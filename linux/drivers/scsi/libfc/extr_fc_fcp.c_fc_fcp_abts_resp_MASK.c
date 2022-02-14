
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_frame_header {int fh_r_ctl; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int dummy; } ;
struct fc_ba_rjt {int br_reason; } ;


 int VAR_0 ;


 int FUNC_0 (struct fc_fcp_pkt*) ;
 struct fc_frame_header* FUNC_1 (struct fc_frame*) ;
 struct fc_ba_rjt* FUNC_2 (struct fc_frame*,int) ;

__attribute__((used)) static void FUNC_3(struct fc_fcp_pkt *VAR_1, struct fc_frame *VAR_2)
{
 int VAR_3 = 1;
 struct fc_ba_rjt *VAR_4;
 struct fc_frame_header *VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 switch (VAR_5->fh_r_ctl) {
 case 129:
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_2, sizeof(*VAR_4));
  if (VAR_4 && VAR_4->br_reason == VAR_0)
   break;

 default:





  VAR_3 = 0;
 }

 if (VAR_3)
  FUNC_0(VAR_1);
}
