
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_frame_header {scalar_t__ fh_type; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int * seq_ptr; int wait_for_comp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_seq*) ;
 scalar_t__ FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*,struct fc_frame*) ;
 int FUNC_4 (struct fc_fcp_pkt*) ;
 int FUNC_5 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_6 (struct fc_frame*) ;

__attribute__((used)) static void FUNC_7(struct fc_seq *VAR_1, struct fc_frame *VAR_2, void *VAR_3)
{
 struct fc_fcp_pkt *VAR_4 = VAR_3;
 struct fc_frame_header *VAR_5;

 if (FUNC_0(VAR_2)) {






  return;
 }

 if (FUNC_2(VAR_4))
  goto out;




 if (!VAR_4->seq_ptr || !VAR_4->wait_for_comp)
  goto out_unlock;

 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5->fh_type != VAR_0)
  FUNC_3(VAR_4, VAR_2);
 VAR_4->seq_ptr = ((void*)0);
 FUNC_1(VAR_1);
out_unlock:
 FUNC_4(VAR_4);
out:
 FUNC_5(VAR_2);
}
