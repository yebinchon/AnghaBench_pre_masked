
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct np_info {unsigned int stid; struct np_info* next; struct cxgbit_np* cnp; } ;
struct cxgbit_np {int dummy; } ;
struct cxgbit_device {int np_lock; struct np_info** np_hash_tab; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxgbit_np*) ;
 struct np_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct np_info *
FUNC_4(struct cxgbit_device *VAR_1, struct cxgbit_np *VAR_2,
     unsigned int VAR_3)
{
 struct np_info *VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);

 if (VAR_4) {
  int VAR_5 = FUNC_0(VAR_2);

  VAR_4->cnp = VAR_2;
  VAR_4->stid = VAR_3;
  FUNC_2(&VAR_1->np_lock);
  VAR_4->next = VAR_1->np_hash_tab[VAR_5];
  VAR_1->np_hash_tab[VAR_5] = VAR_4;
  FUNC_3(&VAR_1->np_lock);
 }

 return VAR_4;
}
