
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_rport {int dummy; } ;
struct fc_frame_header {scalar_t__ fh_type; scalar_t__ fh_r_ctl; } ;
struct fc_frame {int dummy; } ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fc_frame_header* FUNC_0 (struct fc_frame*) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct qedf_rport*,struct fc_frame*) ;

__attribute__((used)) static int FUNC_3(struct qedf_rport *VAR_2, struct fc_frame *VAR_3)
{
 struct fc_frame_header *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_3);
 if ((VAR_4->fh_type == VAR_1) &&
     (VAR_4->fh_r_ctl == VAR_0)) {
  switch (FUNC_1(VAR_3)) {
  case 128:
   FUNC_2(VAR_2, VAR_3);
   VAR_5 = 1;
   break;
  }
 }

 return VAR_5;
}
