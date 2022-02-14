
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int status_code; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_fcp_pkt*) ;
 scalar_t__ FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*,int ) ;
 int FUNC_4 (struct fc_fcp_pkt*) ;

__attribute__((used)) static void FUNC_5(struct fc_fcp_pkt *VAR_4, struct fc_frame *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5);

 if (FUNC_2(VAR_4))
  return;

 if (VAR_6 == -VAR_2) {
  FUNC_3(VAR_4, VAR_1);
  goto unlock;
 }





 VAR_4->state &= ~VAR_3;
 VAR_4->status_code = VAR_0;
 FUNC_1(VAR_4);
unlock:
 FUNC_4(VAR_4);
}
