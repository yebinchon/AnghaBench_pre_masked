
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_if {int dummy; } ;
typedef int s32 ;
typedef int data_le ;
typedef int __le32 ;


 int FUNC_0 (struct brcmf_if*,char*,int *,int) ;
 int FUNC_1 (int ) ;

s32
FUNC_2(struct brcmf_if *VAR_0, char *VAR_1, u32 VAR_2)
{
 __le32 VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_0, VAR_1, &VAR_3,
      sizeof(VAR_3));
}
