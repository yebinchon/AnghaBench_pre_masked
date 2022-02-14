
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_control_block_extended {scalar_t__ cbrexecstatus; } ;


 int FUNC_0 (struct gru_control_block_extended*) ;
 scalar_t__ FUNC_1 (struct gru_control_block_extended*) ;

__attribute__((used)) static void FUNC_2(struct gru_control_block_extended *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  VAR_0->cbrexecstatus = 0;
  FUNC_0(VAR_0);
 }
}
