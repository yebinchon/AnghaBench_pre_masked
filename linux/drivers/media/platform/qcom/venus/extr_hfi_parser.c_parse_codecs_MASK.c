
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_core {int dec_codecs; int enc_codecs; } ;
struct hfi_codec_supported {int enc_codecs; int dec_codecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct venus_core*) ;

__attribute__((used)) static void FUNC_1(struct venus_core *VAR_2, void *VAR_3)
{
 struct hfi_codec_supported *VAR_4 = VAR_3;

 VAR_2->dec_codecs = VAR_4->dec_codecs;
 VAR_2->enc_codecs = VAR_4->enc_codecs;

 if (FUNC_0(VAR_2)) {
  VAR_2->dec_codecs &= ~VAR_0;
  VAR_2->dec_codecs &= ~VAR_1;
 }
}
