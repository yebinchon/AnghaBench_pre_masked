
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_frame_header {scalar_t__ fh_type; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int recov_retry; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_seq*) ;
 scalar_t__ FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*,int ) ;
 int FUNC_4 (struct fc_fcp_pkt*,struct fc_frame*) ;
 int FUNC_5 (struct fc_fcp_pkt*,int ) ;
 int FUNC_6 (struct fc_fcp_pkt*) ;
 int FUNC_7 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_8 (struct fc_frame*) ;
 int FUNC_9 (struct fc_frame*) ;
 int FUNC_10 (struct fc_fcp_pkt*) ;

__attribute__((used)) static void FUNC_11(struct fc_seq *VAR_2, struct fc_frame *VAR_3, void *VAR_4)
{
 struct fc_fcp_pkt *VAR_5 = VAR_4;
 struct fc_frame_header *VAR_6;

 if (FUNC_0(VAR_3)) {
  FUNC_4(VAR_5, VAR_3);
  return;
 }

 if (FUNC_2(VAR_5))
  goto out;

 VAR_6 = FUNC_8(VAR_3);







 if (VAR_6->fh_type == VAR_1) {
  FUNC_6(VAR_5);
  return;
 }

 switch (FUNC_9(VAR_3)) {
 case 129:
  VAR_5->recov_retry = 0;
  FUNC_5(VAR_5, FUNC_10(VAR_5));
  break;
 case 128:
 default:
  FUNC_3(VAR_5, VAR_0);
  break;
 }
 FUNC_6(VAR_5);
out:
 FUNC_1(VAR_2);
 FUNC_7(VAR_3);
}
