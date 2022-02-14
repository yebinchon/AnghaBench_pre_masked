
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int *,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_3,
      u32 VAR_4[],
      u32 VAR_5[],
      u8 VAR_6,
      u32 VAR_7)
{
 u8 VAR_8;
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_7);
 FUNC_2(VAR_3, VAR_8, VAR_1);
 FUNC_3(10);
 FUNC_2(VAR_3, VAR_8, VAR_0);
 FUNC_0(VAR_2, "84833 reset pulse on pin values 0x%x\n",
  VAR_8);
 return 0;
}
