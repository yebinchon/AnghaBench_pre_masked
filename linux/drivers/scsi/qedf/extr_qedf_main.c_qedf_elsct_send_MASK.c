
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qedf_ctx {int flogi_cnt; } ;
struct fc_seq {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;


 struct fc_seq* FUNC_0 (struct fc_lport*,int ,struct fc_frame*,unsigned int,void (*) (struct fc_seq*,struct fc_frame*,void*),void*,int ) ;
 void FUNC_1 (struct fc_seq*,struct fc_frame*,void*) ;
 struct qedf_ctx* FUNC_2 (struct fc_lport*) ;
 void FUNC_3 (struct fc_seq*,struct fc_frame*,void*) ;

__attribute__((used)) static struct fc_seq *FUNC_4(struct fc_lport *VAR_0, u32 VAR_1,
 struct fc_frame *VAR_2, unsigned int VAR_3,
 void (*VAR_4)(struct fc_seq *,
 struct fc_frame *,
 void *),
 void *VAR_5, u32 VAR_6)
{
 struct qedf_ctx *VAR_7 = FUNC_2(VAR_0);





 if (VAR_4 == FUNC_1) {
  VAR_7->flogi_cnt++;
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, FUNC_3,
      VAR_5, VAR_6);
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
