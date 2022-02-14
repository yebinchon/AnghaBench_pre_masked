
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct np_info {int stid; struct cxgbit_np* cnp; struct np_info* next; } ;
struct cxgbit_np {int dummy; } ;
struct cxgbit_device {int np_lock; struct np_info** np_hash_tab; } ;


 int FUNC_0 (struct cxgbit_np*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct cxgbit_device *VAR_0, struct cxgbit_np *VAR_1)
{
 int VAR_2 = -1, VAR_3 = FUNC_0(VAR_1);
 struct np_info *VAR_4;

 FUNC_1(&VAR_0->np_lock);
 for (VAR_4 = VAR_0->np_hash_tab[VAR_3]; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->cnp == VAR_1) {
   VAR_2 = VAR_4->stid;
   break;
  }
 }
 FUNC_2(&VAR_0->np_lock);

 return VAR_2;
}
