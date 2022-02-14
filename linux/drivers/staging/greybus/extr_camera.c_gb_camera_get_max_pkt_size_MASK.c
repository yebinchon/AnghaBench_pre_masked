
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_camera_stream_config_response {int max_pkt_size; int width; int format; } ;
struct gb_camera_fmt_info {int bpp; } ;
struct gb_camera_configure_streams_response {unsigned int num_streams; struct gb_camera_stream_config_response* config; } ;
struct gb_camera {int dummy; } ;


 int VAR_0 ;
 struct gb_camera_fmt_info* FUNC_0 (int ) ;
 int FUNC_1 (struct gb_camera*,char*,unsigned int,...) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct gb_camera *VAR_1,
  struct gb_camera_configure_streams_response *VAR_2)
{
 unsigned int VAR_3 = 0;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_streams; VAR_4++) {
  struct gb_camera_stream_config_response *VAR_5 = &VAR_2->config[VAR_4];
  const struct gb_camera_fmt_info *VAR_6;
  unsigned int VAR_7;

  VAR_6 = FUNC_0(VAR_5->format);
  if (!VAR_6) {
   FUNC_1(VAR_1, "unsupported greybus image format: %d\n",
     VAR_5->format);
   return -VAR_0;
  }

  if (VAR_6->bpp == 0) {
   VAR_7 = FUNC_3(VAR_5->max_pkt_size);

   if (VAR_7 == 0) {
    FUNC_1(VAR_1,
      "Stream %u: invalid zero maximum packet size\n",
      VAR_4);
    return -VAR_0;
   }
  } else {
   VAR_7 = FUNC_2(VAR_5->width) * VAR_6->bpp / 8;

   if (VAR_7 != FUNC_3(VAR_5->max_pkt_size)) {
    FUNC_1(VAR_1,
      "Stream %u: maximum packet size mismatch (%u/%u)\n",
      VAR_4, VAR_7, VAR_5->max_pkt_size);
    return -VAR_0;
   }
  }

  VAR_3 = FUNC_4(VAR_7, VAR_3);
 }

 return VAR_3;
}
