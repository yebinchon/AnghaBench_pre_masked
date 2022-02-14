
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
struct brcmf_tlv {int len; scalar_t__ id; } ;


 int VAR_0 ;

__attribute__((used)) static const struct brcmf_tlv *
FUNC_0(const void *VAR_1, int VAR_2, uint VAR_3)
{
 const struct brcmf_tlv *VAR_4 = VAR_1;
 int VAR_5 = VAR_2;


 while (VAR_5 >= VAR_0) {
  int VAR_6 = VAR_4->len;


  if ((VAR_4->id == VAR_3) && (VAR_5 >= (VAR_6 + VAR_0)))
   return VAR_4;

  VAR_4 = (struct brcmf_tlv *)((u8 *)VAR_4 + (VAR_6 + VAR_0));
  VAR_5 -= (VAR_6 + VAR_0);
 }

 return ((void*)0);
}
