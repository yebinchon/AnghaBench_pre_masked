
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config_size; } ;
struct TYPE_3__ {int end; scalar_t__ start; int name; } ;
struct nvdimm_drvdata {int ns_current; int ns_next; TYPE_2__ nsarea; int kref; struct device* dev; TYPE_1__ dpa; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct nvdimm_drvdata*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 struct nvdimm_drvdata* FUNC_6 (int,int ) ;
 int FUNC_7 (struct nvdimm_drvdata*) ;
 int FUNC_8 (struct nvdimm_drvdata*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct nvdimm_drvdata*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct nvdimm_drvdata*) ;

__attribute__((used)) static int FUNC_19(struct device *VAR_4)
{
 struct nvdimm_drvdata *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_14(VAR_4);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4, "security event setup failed: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_11(VAR_4);
 if (VAR_6) {

  if (VAR_6 == -VAR_2)
   VAR_6 = 0;
  return VAR_6;
 }






 FUNC_12(VAR_4);

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_3);
 if (!VAR_5)
  return -VAR_1;

 FUNC_3(VAR_4, VAR_5);
 VAR_5->dpa.name = FUNC_2(VAR_4);
 VAR_5->ns_current = -1;
 VAR_5->ns_next = -1;
 VAR_5->dpa.start = 0;
 VAR_5->dpa.end = -1;
 VAR_5->dev = VAR_4;
 FUNC_4(VAR_4);
 FUNC_5(&VAR_5->kref);






 VAR_6 = FUNC_15(VAR_4);
 if (VAR_6 < 0)
  FUNC_0(VAR_4, "failed to unlock dimm: %d\n", VAR_6);







 VAR_6 = FUNC_13(VAR_5);
 if (VAR_6 == -VAR_0) {





  FUNC_17(VAR_4);
  VAR_6 = 0;
 }
 if (VAR_6)
  goto err;







 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6 == -VAR_0)
  FUNC_17(VAR_4);
 if (VAR_6)
  goto err;

 FUNC_0(VAR_4, "config data size: %d\n", VAR_5->nsarea.config_size);

 FUNC_9(VAR_4);
 if (VAR_5->ns_current >= 0) {
  VAR_6 = FUNC_8(VAR_5);
  if (VAR_6 == 0)
   FUNC_16(VAR_4);
 }
 FUNC_10(VAR_4);

 if (VAR_6)
  goto err;

 return 0;

 err:
 FUNC_18(VAR_5);
 return VAR_6;
}
