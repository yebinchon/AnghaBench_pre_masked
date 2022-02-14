
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_seq {int dummy; } ;
struct fc_frame {int dummy; } ;
struct TYPE_2__ {int non_bls_resp; int xid_not_found; } ;
struct fc_exch_mgr {TYPE_1__ stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_frame*) ;
 struct fc_seq* FUNC_2 (struct fc_exch_mgr*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_3(struct fc_exch_mgr *VAR_0, struct fc_frame *VAR_1)
{
 struct fc_seq *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);

 if (!VAR_2)
  FUNC_0(&VAR_0->stats.xid_not_found);
 else
  FUNC_0(&VAR_0->stats.non_bls_resp);

 FUNC_1(VAR_1);
}
