
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int mem_lock; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(struct wil6210_priv *VAR_3)
{
 if (!FUNC_0(&VAR_3->mem_lock))
  return -VAR_0;

 if (FUNC_1(VAR_2, VAR_3->status) ||
     FUNC_1(VAR_1, VAR_3->status)) {
  FUNC_2(&VAR_3->mem_lock);
  return -VAR_0;
 }

 return 0;
}
