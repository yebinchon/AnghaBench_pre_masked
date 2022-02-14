
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_control_block_status {int icmd; } ;
struct control_block_extended_exc_detail {int ecause; int cbrexecstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gru_control_block_status*) ;
 int FUNC_1 (void*,struct control_block_extended_exc_detail*) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (struct gru_control_block_status*) ;

__attribute__((used)) static int FUNC_4(void *VAR_5)
{
 struct gru_control_block_status *VAR_6 = (void *)VAR_5;
 struct control_block_extended_exc_detail VAR_7;
 int VAR_8 = VAR_4;

 while (1) {
  if (FUNC_3(VAR_6) == VAR_2)
   return VAR_2;
  if (FUNC_2(VAR_5))
   return VAR_1;
  FUNC_1(VAR_5, &VAR_7);
  if ((VAR_7.ecause & ~VAR_3) ||
    (VAR_7.cbrexecstatus & VAR_0))
   break;
  if (VAR_8-- == 0)
   break;
  VAR_6->icmd = 1;
  FUNC_0(VAR_6);
 }
 return VAR_1;
}
