
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct cmdq_pkt {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cmdq_pkt*,int ,scalar_t__,int) ;

int FUNC_1(struct cmdq_pkt *VAR_6, u16 VAR_7)
{
 u32 VAR_8;

 if (VAR_7 >= VAR_1)
  return -VAR_5;
 VAR_8 = VAR_2 | VAR_3 | VAR_4;

 return FUNC_0(VAR_6, VAR_0, VAR_7, VAR_8);
}
