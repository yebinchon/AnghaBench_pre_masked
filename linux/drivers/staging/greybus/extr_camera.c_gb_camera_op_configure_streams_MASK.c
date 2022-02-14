
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_camera_stream_config {int format; int max_size; int * dt; int vc; int height; int width; } ;
struct gb_camera_stream {int pixel_code; int max_size; int * dt; int vc; int height; int width; } ;
struct gb_camera_csi_params {int dummy; } ;
struct gb_camera {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct gb_camera*,unsigned int*,unsigned int*,struct gb_camera_stream_config*,struct gb_camera_csi_params*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct gb_camera_stream_config* FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (struct gb_camera_stream_config*) ;

__attribute__((used)) static int FUNC_5(void *VAR_8, unsigned int *VAR_9,
  unsigned int *VAR_10, struct gb_camera_stream *VAR_11,
  struct gb_camera_csi_params *VAR_12)
{
 struct gb_camera *VAR_13 = VAR_8;
 struct gb_camera_stream_config *VAR_14;
 unsigned int VAR_15 = 0;
 unsigned int VAR_16 = *VAR_9;
 unsigned int VAR_17;
 int VAR_18;

 if (VAR_16 > VAR_5)
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_16, sizeof(*VAR_14), VAR_7);
 if (!VAR_14)
  return -VAR_1;

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_14[VAR_17].width = VAR_11[VAR_17].width;
  VAR_14[VAR_17].height = VAR_11[VAR_17].height;
  VAR_14[VAR_17].format =
   FUNC_2(VAR_11[VAR_17].pixel_code);
 }

 if (*VAR_10 & VAR_4)
  VAR_15 |= VAR_3;

 VAR_18 = FUNC_0(VAR_13, &VAR_16,
       &VAR_15, VAR_14, VAR_12);
 if (VAR_18 < 0)
  goto done;
 if (VAR_16 > *VAR_9) {
  VAR_18 = -VAR_0;
  goto done;
 }

 *VAR_10 = 0;
 if (VAR_15 & VAR_2)
  *VAR_10 |= VAR_6;

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_11[VAR_17].width = VAR_14[VAR_17].width;
  VAR_11[VAR_17].height = VAR_14[VAR_17].height;
  VAR_11[VAR_17].vc = VAR_14[VAR_17].vc;
  VAR_11[VAR_17].dt[0] = VAR_14[VAR_17].dt[0];
  VAR_11[VAR_17].dt[1] = VAR_14[VAR_17].dt[1];
  VAR_11[VAR_17].max_size = VAR_14[VAR_17].max_size;
  VAR_11[VAR_17].pixel_code =
   FUNC_1(VAR_14[VAR_17].format);
 }
 *VAR_9 = VAR_16;

done:
 FUNC_4(VAR_14);
 return VAR_18;
}
