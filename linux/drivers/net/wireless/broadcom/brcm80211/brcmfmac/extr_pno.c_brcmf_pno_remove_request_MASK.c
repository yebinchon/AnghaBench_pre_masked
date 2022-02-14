
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct brcmf_pno_info {int n_reqs; int req_lock; TYPE_1__** reqs; } ;
struct TYPE_2__ {scalar_t__ reqid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct brcmf_pno_info *VAR_2, u64 VAR_3)
{
 int VAR_4, VAR_5 = 0;

 FUNC_2(&VAR_2->req_lock);


 for (VAR_4 = 0; VAR_4 < VAR_2->n_reqs; VAR_4++) {
  if (VAR_2->reqs[VAR_4]->reqid == VAR_3)
   break;
 }

 if (FUNC_0(VAR_4 == VAR_2->n_reqs, "reqid not found\n")) {
  VAR_5 = -VAR_0;
  goto done;
 }

 FUNC_1(VAR_1, "reqid=%llu\n", VAR_3);
 VAR_2->n_reqs--;


 if (!VAR_2->n_reqs || VAR_4 == VAR_2->n_reqs)
  goto done;


 while (VAR_4 <= VAR_2->n_reqs - 1) {
  VAR_2->reqs[VAR_4] = VAR_2->reqs[VAR_4 + 1];
  VAR_4++;
 }

done:
 FUNC_3(&VAR_2->req_lock);
 return VAR_5;
}
