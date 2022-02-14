
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rproc {int lock; int * table_ptr; int * cached_table; int power; int name; struct device dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rproc*) ;
 int FUNC_7 (struct rproc*) ;
 int FUNC_8 (struct rproc*,int) ;

void FUNC_9(struct rproc *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 int VAR_2;

 VAR_2 = FUNC_4(&VAR_0->lock);
 if (VAR_2) {
  FUNC_2(VAR_1, "can't lock rproc %s: %d\n", VAR_0->name, VAR_2);
  return;
 }


 if (!FUNC_0(&VAR_0->power))
  goto out;

 VAR_2 = FUNC_8(VAR_0, 0);
 if (VAR_2) {
  FUNC_1(&VAR_0->power);
  goto out;
 }


 FUNC_7(VAR_0);

 FUNC_6(VAR_0);


 FUNC_3(VAR_0->cached_table);
 VAR_0->cached_table = ((void*)0);
 VAR_0->table_ptr = ((void*)0);
out:
 FUNC_5(&VAR_0->lock);
}
