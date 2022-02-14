
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame_header {size_t fh_type; } ;
struct fc_frame {int dummy; } ;
struct fc4_prov {int module; int (* recv ) (struct fc_lport*,struct fc_frame*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (struct fc_lport*,char*,size_t) ;
 int FUNC_1 (struct fc_seq*) ;
 int FUNC_2 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_3 (struct fc_frame*) ;
 int * VAR_1 ;
 struct fc_seq* FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (int ) ;
 struct fc4_prov* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct fc_lport *VAR_2, struct fc_frame *VAR_3)
{
 struct fc_frame_header *VAR_4 = FUNC_3(VAR_3);
 struct fc_seq *VAR_5 = FUNC_4(VAR_3);
 struct fc4_prov *VAR_6;
 FUNC_7();
 if (VAR_4->fh_type >= VAR_0)
  goto drop;
 VAR_6 = FUNC_6(VAR_1[VAR_4->fh_type]);
 if (!VAR_6 || !FUNC_10(VAR_6->module))
  goto drop;
 FUNC_8();
 VAR_6->recv(VAR_2, VAR_3);
 FUNC_5(VAR_6->module);
 return;
drop:
 FUNC_8();
 FUNC_0(VAR_2, "dropping unexpected frame type %x\n", VAR_4->fh_type);
 FUNC_2(VAR_3);
 if (VAR_5)
  FUNC_1(VAR_5);
}
