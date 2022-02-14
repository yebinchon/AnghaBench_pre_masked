
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ q_depth; scalar_t__ head; } ;
struct ena_com_dev {scalar_t__ reg_bar; TYPE_1__ aenq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

void FUNC_2(struct ena_com_dev *VAR_1)
{
 u16 VAR_2 = VAR_1->aenq.q_depth;

 FUNC_0(VAR_1->aenq.head != VAR_2, "Invalid AENQ state\n");




 FUNC_1(VAR_2, VAR_1->reg_bar + VAR_0);
}
