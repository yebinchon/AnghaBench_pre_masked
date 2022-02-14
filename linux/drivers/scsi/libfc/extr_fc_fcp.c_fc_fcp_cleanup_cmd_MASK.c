
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_fcp_pkt {int status_code; int * seq_ptr; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct fc_fcp_pkt *VAR_0, int VAR_1)
{
 if (VAR_0->seq_ptr) {
  FUNC_0(VAR_0->seq_ptr);
  VAR_0->seq_ptr = ((void*)0);
 }
 VAR_0->status_code = VAR_1;
}
