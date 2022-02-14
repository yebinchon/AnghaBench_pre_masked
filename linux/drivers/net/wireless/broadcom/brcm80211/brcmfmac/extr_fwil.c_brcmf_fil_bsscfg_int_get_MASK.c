
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_if {int dummy; } ;
typedef scalar_t__ s32 ;
typedef int data_le ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (struct brcmf_if*,char*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

s32
FUNC_3(struct brcmf_if *VAR_0, char *VAR_1, u32 *VAR_2)
{
 __le32 VAR_3 = FUNC_1(*VAR_2);
 s32 VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3,
     sizeof(VAR_3));
 if (VAR_4 == 0)
  *VAR_2 = FUNC_2(VAR_3);
 return VAR_4;
}
