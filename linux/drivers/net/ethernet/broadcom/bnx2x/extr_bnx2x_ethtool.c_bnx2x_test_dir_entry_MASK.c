
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct code_entry {int dummy; } ;
struct bnx2x {int dummy; } ;
typedef int entry ;


 int FUNC_0 (struct bnx2x*,int ,int *,int) ;
 int FUNC_1 (struct bnx2x*,struct code_entry*,int *) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_0, u32 VAR_1, u8 *VAR_2)
{
 int VAR_3;
 struct code_entry VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, (u32 *)&VAR_4, sizeof(VAR_4));
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_0, &VAR_4, VAR_2);
}
