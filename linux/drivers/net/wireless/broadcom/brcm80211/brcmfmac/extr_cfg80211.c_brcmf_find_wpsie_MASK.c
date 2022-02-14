
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct brcmf_vs_tlv {int dummy; } ;
struct brcmf_tlv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct brcmf_tlv* FUNC_0 (int const*,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int const**,int *,int ,int ,int ) ;

__attribute__((used)) static struct brcmf_vs_tlv *
FUNC_2(const u8 *VAR_4, u32 VAR_5)
{
 const struct brcmf_tlv *VAR_6;

 while ((VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_1))) {
  if (FUNC_1((u8 *)VAR_6, &VAR_4, &VAR_5,
         VAR_2, VAR_0, VAR_3))
   return (struct brcmf_vs_tlv *)VAR_6;
 }
 return ((void*)0);
}
