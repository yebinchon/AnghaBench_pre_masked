
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rproc {char* firmware; int max_notifyid; int * table_ptr; int * cached_table; scalar_t__ nb_vdev; int bootaddr; struct device dev; } ;
struct firmware {int size; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rproc*) ;
 int FUNC_4 (struct rproc*) ;
 int FUNC_5 (struct rproc*) ;
 int FUNC_6 (struct rproc*,struct firmware const*) ;
 int FUNC_7 (struct rproc*,struct firmware const*) ;
 int FUNC_8 (struct rproc*,int ) ;
 int VAR_0 ;
 int FUNC_9 (struct rproc*,struct firmware const*) ;
 int FUNC_10 (struct rproc*) ;
 int FUNC_11 (struct rproc*,struct firmware const*) ;

__attribute__((used)) static int FUNC_12(struct rproc *VAR_1, const struct firmware *VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;
 const char *VAR_4 = VAR_1->firmware;
 int VAR_5;

 VAR_5 = FUNC_6(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_3, "Booting fw image %s, size %zd\n", VAR_4, VAR_2->size);





 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_3, "can't enable iommu: %d\n", VAR_5);
  return VAR_5;
 }

 VAR_1->bootaddr = FUNC_7(VAR_1, VAR_2);


 VAR_5 = FUNC_9(VAR_1, VAR_2);
 if (VAR_5)
  goto disable_iommu;


 VAR_1->max_notifyid = -1;


 VAR_1->nb_vdev = 0;


 VAR_5 = FUNC_8(VAR_1, VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_3, "Failed to process resources: %d\n", VAR_5);
  goto clean_up_resources;
 }


 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5) {
  FUNC_0(VAR_3, "Failed to allocate associated carveouts: %d\n",
   VAR_5);
  goto clean_up_resources;
 }

 VAR_5 = FUNC_11(VAR_1, VAR_2);
 if (VAR_5)
  goto clean_up_resources;

 return 0;

clean_up_resources:
 FUNC_10(VAR_1);
 FUNC_2(VAR_1->cached_table);
 VAR_1->cached_table = ((void*)0);
 VAR_1->table_ptr = ((void*)0);
disable_iommu:
 FUNC_4(VAR_1);
 return VAR_5;
}
