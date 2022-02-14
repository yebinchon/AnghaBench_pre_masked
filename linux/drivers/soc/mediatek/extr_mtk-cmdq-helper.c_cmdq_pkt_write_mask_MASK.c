
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cmdq_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmdq_pkt*,int ,int ,int) ;
 int FUNC_1 (struct cmdq_pkt*,int,int ,int) ;

int FUNC_2(struct cmdq_pkt *VAR_2, u8 VAR_3,
   u16 VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7 = VAR_4;
 int VAR_8 = 0;

 if (VAR_6 != 0xffffffff) {
  VAR_8 = FUNC_0(VAR_2, VAR_0, 0, ~VAR_6);
  VAR_7 |= VAR_1;
 }
 VAR_8 |= FUNC_1(VAR_2, VAR_5, VAR_3, VAR_7);

 return VAR_8;
}
