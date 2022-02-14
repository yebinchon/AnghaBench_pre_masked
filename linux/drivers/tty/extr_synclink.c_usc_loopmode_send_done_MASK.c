
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {int loopmode_send_done_requested; int cmr_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mgsl_struct*,int ,int ) ;

__attribute__((used)) static void FUNC_1( struct mgsl_struct * VAR_2 )
{
  VAR_2->loopmode_send_done_requested = 0;

  VAR_2->cmr_value &= ~VAR_0;
  FUNC_0(VAR_2, VAR_1, VAR_2->cmr_value);
}
