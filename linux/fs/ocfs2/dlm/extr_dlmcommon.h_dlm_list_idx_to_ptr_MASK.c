
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dlm_lock_resource {struct list_head blocked; struct list_head converting; struct list_head granted; } ;
typedef enum dlm_lockres_list { ____Placeholder_dlm_lockres_list } dlm_lockres_list ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline struct list_head *
FUNC_1(struct dlm_lock_resource *VAR_3, enum dlm_lockres_list VAR_4)
{
 struct list_head *VAR_5 = ((void*)0);
 if (VAR_4 == VAR_2)
  VAR_5 = &VAR_3->granted;
 else if (VAR_4 == VAR_1)
  VAR_5 = &VAR_3->converting;
 else if (VAR_4 == VAR_0)
  VAR_5 = &VAR_3->blocked;
 else
  FUNC_0();
 return VAR_5;
}
