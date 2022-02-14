
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ cmt_state; int cs_lock; int commit_sem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ubifs_info*) ;

int FUNC_6(struct ubifs_info *VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(&VAR_4->cs_lock);
 if (VAR_4->cmt_state == VAR_0) {
  VAR_5 = -VAR_3;
  goto out;
 }

 if (VAR_4->cmt_state == VAR_1)




  VAR_4->cmt_state = VAR_2;

 if (VAR_4->cmt_state == VAR_2) {
  FUNC_3(&VAR_4->cs_lock);
  return FUNC_5(VAR_4);
 }
 FUNC_3(&VAR_4->cs_lock);



 FUNC_1(&VAR_4->commit_sem);
 FUNC_2(&VAR_4->cs_lock);




 if (VAR_4->cmt_state == VAR_0) {
  VAR_5 = -VAR_3;
  goto out_cmt_unlock;
 }

 if (VAR_4->cmt_state == VAR_1)
  VAR_4->cmt_state = VAR_2;

 if (VAR_4->cmt_state == VAR_2) {
  FUNC_4(&VAR_4->commit_sem);
  FUNC_3(&VAR_4->cs_lock);
  return FUNC_5(VAR_4);
 }
 VAR_4->cmt_state = VAR_2;
 FUNC_3(&VAR_4->cs_lock);

 VAR_5 = FUNC_0(VAR_4);
 return VAR_5;

out_cmt_unlock:
 FUNC_4(&VAR_4->commit_sem);
out:
 FUNC_3(&VAR_4->cs_lock);
 return VAR_5;
}
