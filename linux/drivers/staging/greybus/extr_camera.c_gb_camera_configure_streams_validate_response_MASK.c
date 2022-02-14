
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_camera_stream_config_response {scalar_t__ padding; } ;
struct gb_camera_configure_streams_response {unsigned int num_streams; struct gb_camera_stream_config_response* config; scalar_t__* padding; } ;
struct gb_camera {int dummy; } ;


 int const VAR_0 ;
 int FUNC_0 (struct gb_camera*,char*,...) ;

__attribute__((used)) static const int FUNC_1(
  struct gb_camera *VAR_1,
  struct gb_camera_configure_streams_response *VAR_2,
  unsigned int VAR_3)
{
 unsigned int VAR_4;


 if (VAR_2->padding[0] || VAR_2->padding[1]) {
  FUNC_0(VAR_1, "response padding != 0\n");
  return -VAR_0;
 }

 if (VAR_2->num_streams > VAR_3) {
  FUNC_0(VAR_1, "got #streams %u > request %u\n",
    VAR_2->num_streams, VAR_3);
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->num_streams; VAR_4++) {
  struct gb_camera_stream_config_response *VAR_5 = &VAR_2->config[VAR_4];

  if (VAR_5->padding) {
   FUNC_0(VAR_1, "stream #%u padding != 0\n", VAR_4);
   return -VAR_0;
  }
 }

 return 0;
}
