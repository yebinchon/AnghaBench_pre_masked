
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2x {int igu_base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*,int,int,int ,int,int,int) ;

void FUNC_1(struct bnx2x *VAR_1, u8 VAR_2, u8 VAR_3,
        u16 VAR_4, u8 VAR_5, u8 VAR_6)
{
 u32 VAR_7 = VAR_1->igu_base_addr;
 VAR_7 += (VAR_0 + VAR_2)*8;
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);
}
