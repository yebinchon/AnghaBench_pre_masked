
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct rproc {struct resource_table* cached_table; struct resource_table* table_ptr; TYPE_1__* ops; int name; int state; int table_sz; struct device dev; } ;
struct resource_table {int dummy; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int (* start ) (struct rproc*) ;int (* stop ) (struct rproc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct resource_table*,struct resource_table*,int ) ;
 struct resource_table* FUNC_3 (struct rproc*,struct firmware const*) ;
 int FUNC_4 (struct rproc*,struct firmware const*) ;
 int FUNC_5 (struct rproc*) ;
 int FUNC_6 (struct rproc*) ;
 int FUNC_7 (struct rproc*) ;
 int FUNC_8 (struct rproc*) ;
 int FUNC_9 (struct rproc*) ;

__attribute__((used)) static int FUNC_10(struct rproc *VAR_1, const struct firmware *VAR_2)
{
 struct resource_table *VAR_3;
 struct device *VAR_4 = &VAR_1->dev;
 int VAR_5;


 VAR_5 = FUNC_4(VAR_1, VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_4, "Failed to load program segments: %d\n", VAR_5);
  return VAR_5;
 }
 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_3, VAR_1->cached_table, VAR_1->table_sz);
  VAR_1->table_ptr = VAR_3;
 }

 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_4, "failed to prepare subdevices for %s: %d\n",
   VAR_1->name, VAR_5);
  goto reset_table_ptr;
 }


 VAR_5 = VAR_1->ops->start(VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_4, "can't start rproc %s: %d\n", VAR_1->name, VAR_5);
  goto unprepare_subdevices;
 }


 VAR_5 = FUNC_6(VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_4, "failed to probe subdevices for %s: %d\n",
   VAR_1->name, VAR_5);
  goto stop_rproc;
 }

 VAR_1->state = VAR_0;

 FUNC_1(VAR_4, "remote processor %s is now up\n", VAR_1->name);

 return 0;

stop_rproc:
 VAR_1->ops->stop(VAR_1);
unprepare_subdevices:
 FUNC_7(VAR_1);
reset_table_ptr:
 VAR_1->table_ptr = VAR_1->cached_table;

 return VAR_5;
}
