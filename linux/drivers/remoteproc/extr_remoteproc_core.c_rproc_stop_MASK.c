
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct rproc {int name; int state; TYPE_1__* ops; int cached_table; int table_ptr; struct device dev; } ;
struct TYPE_2__ {int (* stop ) (struct rproc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct rproc*,int) ;
 int FUNC_3 (struct rproc*) ;
 int FUNC_4 (struct rproc*) ;

__attribute__((used)) static int FUNC_5(struct rproc *VAR_1, bool VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;
 int VAR_4;


 FUNC_2(VAR_1, VAR_2);


 VAR_1->table_ptr = VAR_1->cached_table;


 VAR_4 = VAR_1->ops->stop(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3, "can't stop rproc: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_3(VAR_1);

 VAR_1->state = VAR_0;

 FUNC_1(VAR_3, "stopped remote processor %s\n", VAR_1->name);

 return 0;
}
