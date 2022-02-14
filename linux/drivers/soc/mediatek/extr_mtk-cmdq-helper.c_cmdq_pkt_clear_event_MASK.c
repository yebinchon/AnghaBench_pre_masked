
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct cmdq_pkt {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cmdq_pkt*,int ,scalar_t__,int ) ;

int FUNC_1(struct cmdq_pkt *VAR_4, u16 VAR_5)
{
 if (VAR_5 >= VAR_1)
  return -VAR_3;

 return FUNC_0(VAR_4, VAR_0, VAR_5,
           VAR_2);
}
