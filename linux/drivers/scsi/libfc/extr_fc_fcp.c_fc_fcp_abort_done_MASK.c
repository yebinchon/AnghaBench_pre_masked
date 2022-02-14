
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_fcp_pkt {int tm_done; scalar_t__ wait_for_comp; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_fcp_pkt*) ;

__attribute__((used)) static void FUNC_2(struct fc_fcp_pkt *VAR_2)
{
 VAR_2->state |= VAR_0;
 VAR_2->state &= ~VAR_1;

 if (VAR_2->wait_for_comp)
  FUNC_0(&VAR_2->tm_done);
 else
  FUNC_1(VAR_2);
}
