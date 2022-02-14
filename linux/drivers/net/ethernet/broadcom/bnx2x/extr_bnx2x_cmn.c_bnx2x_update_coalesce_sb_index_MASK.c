
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,int,int,int,int) ;
 int FUNC_2 (struct bnx2x*,int,int,int,int) ;

void FUNC_3(struct bnx2x *VAR_1, u8 VAR_2,
        u8 VAR_3, u8 VAR_4, u16 VAR_5)
{
 int VAR_6 = FUNC_0(VAR_1);
 u8 VAR_7 = VAR_5 / VAR_0;

 FUNC_2(VAR_1, VAR_6, VAR_2, VAR_3, VAR_7);

 VAR_4 = VAR_4 ? 1 : (VAR_5 ? 0 : 1);
 FUNC_1(VAR_1, VAR_6, VAR_2, VAR_3, VAR_4);
}
