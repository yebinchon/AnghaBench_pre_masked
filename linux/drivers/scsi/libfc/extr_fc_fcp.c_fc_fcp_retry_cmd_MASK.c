
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_fcp_pkt {int status_code; scalar_t__ io_status; int state; int * seq_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_fcp_pkt*) ;

__attribute__((used)) static void FUNC_2(struct fc_fcp_pkt *VAR_1, int VAR_2)
{
 if (VAR_1->seq_ptr) {
  FUNC_0(VAR_1->seq_ptr);
  VAR_1->seq_ptr = ((void*)0);
 }

 VAR_1->state &= ~VAR_0;
 VAR_1->io_status = 0;
 VAR_1->status_code = VAR_2;
 FUNC_1(VAR_1);
}
