
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {scalar_t__ cmt_state; int cs_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ubifs_info *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_2->cs_lock);
 if (VAR_2->cmt_state == VAR_0) {
  FUNC_0("commit required now");
  VAR_2->cmt_state = VAR_1;
 } else
  FUNC_0("commit not requested");
 if (VAR_2->cmt_state == VAR_1)
  VAR_3 = 1;
 FUNC_2(&VAR_2->cs_lock);
 return VAR_3;
}
