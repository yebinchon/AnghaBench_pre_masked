
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt1 {int lock; int * kthread; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,struct pt1*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct pt1 *VAR_1)
{
 int VAR_2 = 0;

 FUNC_3(&VAR_1->lock);
 if (!VAR_1->kthread) {
  VAR_1->kthread = FUNC_2(VAR_0, VAR_1, "earth-pt1");
  if (FUNC_0(VAR_1->kthread)) {
   VAR_2 = FUNC_1(VAR_1->kthread);
   VAR_1->kthread = ((void*)0);
  }
 }
 FUNC_4(&VAR_1->lock);
 return VAR_2;
}
