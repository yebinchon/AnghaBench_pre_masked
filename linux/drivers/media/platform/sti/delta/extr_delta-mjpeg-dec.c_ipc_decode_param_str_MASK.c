
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int display_decimated_luma_p; int display_decimated_chroma_p; } ;
struct jpeg_decode_params_t {int picture_start_addr_p; int picture_end_addr_p; int decoding_mode; int main_aux_enable; int additional_flags; int field_flag; int is_jpeg_image; TYPE_1__ display_buffer_addr; } ;


 int FUNC_0 (char*,unsigned int,char*,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static char *FUNC_1(struct jpeg_decode_params_t *VAR_0,
      char *VAR_1, unsigned int VAR_2)
{
 char *VAR_3 = VAR_1;

 if (!VAR_0)
  return "";

 VAR_3 += FUNC_0(VAR_3, VAR_2,
        "jpeg_decode_params_t\n"
        "picture_start_addr_p                  0x%x\n"
        "picture_end_addr_p                    0x%x\n"
        "decoding_mode                        %d\n"
        "display_buffer_addr.display_decimated_luma_p   0x%x\n"
        "display_buffer_addr.display_decimated_chroma_p 0x%x\n"
        "main_aux_enable                       %d\n"
        "additional_flags                     0x%x\n"
        "field_flag                           %x\n"
        "is_jpeg_image                        %x\n",
        VAR_0->picture_start_addr_p,
        VAR_0->picture_end_addr_p,
        VAR_0->decoding_mode,
        VAR_0->display_buffer_addr.display_decimated_luma_p,
        VAR_0->display_buffer_addr.display_decimated_chroma_p,
        VAR_0->main_aux_enable, VAR_0->additional_flags,
        VAR_0->field_flag,
        VAR_0->is_jpeg_image);

 return VAR_1;
}
