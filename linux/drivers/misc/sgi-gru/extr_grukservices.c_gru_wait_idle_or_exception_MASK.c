
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_control_block_status {scalar_t__ istatus; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct gru_control_block_status *VAR_1)
{
 while (VAR_1->istatus >= VAR_0) {
  FUNC_1();
  FUNC_0();
 }
 return VAR_1->istatus;
}
