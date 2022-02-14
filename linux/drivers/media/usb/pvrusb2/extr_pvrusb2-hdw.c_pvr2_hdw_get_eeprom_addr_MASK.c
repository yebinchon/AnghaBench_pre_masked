
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int* cmd_buffer; int ctl_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvr2_hdw*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct pvr2_hdw *VAR_1)
{
 int VAR_2;
 FUNC_1(VAR_1->ctl_lock); do {
  VAR_1->cmd_buffer[0] = VAR_0;
  VAR_2 = FUNC_2(VAR_1,
        VAR_1->cmd_buffer,1,
        VAR_1->cmd_buffer,1);
  if (VAR_2 < 0) break;
  VAR_2 = VAR_1->cmd_buffer[0];
 } while(0); FUNC_0(VAR_1->ctl_lock);
 return VAR_2;
}
