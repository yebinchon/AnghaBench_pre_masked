
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct work_struct {int dummy; } ;
struct octeon_device {int dummy; } ;
struct lio_vf_rep_stats {int dummy; } ;
struct lio_vf_rep_req {int ifidx; int req_type; } ;
struct TYPE_2__ {int work; } ;
struct lio_vf_rep_desc {TYPE_1__ stats_wk; int stats; int ifidx; struct octeon_device* oct; } ;
struct cavium_wk {struct lio_vf_rep_desc* ctxptr; } ;
typedef int stats ;
typedef int rep_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct octeon_device*,struct lio_vf_rep_req*,int,struct lio_vf_rep_stats*,int) ;
 int FUNC_1 (int *,struct lio_vf_rep_stats*,int) ;
 int FUNC_2 (struct lio_vf_rep_req*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(struct work_struct *VAR_2)
{
 struct cavium_wk *VAR_3 = (struct cavium_wk *)VAR_2;
 struct lio_vf_rep_desc *VAR_4 = VAR_3->ctxptr;
 struct lio_vf_rep_stats VAR_5;
 struct lio_vf_rep_req VAR_6;
 struct octeon_device *VAR_7;
 int VAR_8;

 VAR_7 = VAR_4->oct;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.req_type = VAR_0;
 VAR_6.ifidx = VAR_4->ifidx;

 VAR_8 = FUNC_0(VAR_7, &VAR_6, sizeof(VAR_6),
        &VAR_5, sizeof(VAR_5));

 if (!VAR_8) {
  FUNC_4((u64 *)&VAR_5, (sizeof(VAR_5) >> 3));
  FUNC_1(&VAR_4->stats, &VAR_5, sizeof(VAR_5));
 }

 FUNC_5(&VAR_4->stats_wk.work,
         FUNC_3(VAR_1));
}
