
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi_codec_mask_supported {int video_domains; int codecs; } ;



__attribute__((used)) static void FUNC_0(u32 *VAR_0, u32 *VAR_1, void *VAR_2)
{
 struct hfi_codec_mask_supported *VAR_3 = VAR_2;

 *VAR_0 = VAR_3->codecs;
 *VAR_1 = VAR_3->video_domains;
}
