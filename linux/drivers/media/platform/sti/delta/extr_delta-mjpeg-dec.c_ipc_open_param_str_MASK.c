
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jpeg_video_decode_init_params_t {int circular_buffer_begin_addr_p; int circular_buffer_end_addr_p; } ;


 int FUNC_0 (char*,unsigned int,char*,int,int) ;

__attribute__((used)) static char *FUNC_1(struct jpeg_video_decode_init_params_t *VAR_0,
    char *VAR_1, unsigned int VAR_2)
{
 char *VAR_3 = VAR_1;

 if (!VAR_0)
  return "";

 VAR_3 += FUNC_0(VAR_3, VAR_2,
        "jpeg_video_decode_init_params_t\n"
        "circular_buffer_begin_addr_p 0x%x\n"
        "circular_buffer_end_addr_p   0x%x\n",
        VAR_0->circular_buffer_begin_addr_p,
        VAR_0->circular_buffer_end_addr_p);

 return VAR_1;
}
