
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_req_info {int list; } ;
struct snic {int spl_cmd_lock; int snic_lock; scalar_t__ in_remove; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct snic*,struct snic_req_info*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void
FUNC_5(struct snic *VAR_0, struct snic_req_info *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_0->snic_lock, VAR_2);
 if (VAR_0->in_remove) {
  FUNC_4(&VAR_0->snic_lock, VAR_2);
  goto end;
 }
 FUNC_4(&VAR_0->snic_lock, VAR_2);

 FUNC_3(&VAR_0->spl_cmd_lock, VAR_2);
 if (FUNC_1(&VAR_1->list)) {
  FUNC_4(&VAR_0->spl_cmd_lock, VAR_2);
  goto end;
 }
 FUNC_0(&VAR_1->list);
 FUNC_4(&VAR_0->spl_cmd_lock, VAR_2);
 FUNC_2(VAR_0, VAR_1);

end:
 return;
}
