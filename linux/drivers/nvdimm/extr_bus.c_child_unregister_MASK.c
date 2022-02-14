
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct nvdimm {int dwork; int flags; TYPE_1__ sec; } ;
struct device {scalar_t__ class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct nvdimm* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_3, void *VAR_4)
{






 if (VAR_3->class)
  return 0;

 if (FUNC_1(VAR_3)) {
  struct nvdimm *VAR_5 = FUNC_8(VAR_3);
  bool VAR_6 = 0;


  FUNC_3(VAR_3);
  FUNC_6(VAR_2, &VAR_5->sec.flags);
  if (FUNC_7(VAR_0, &VAR_5->flags))
   VAR_6 = 1;
  FUNC_4(VAR_3);
  FUNC_0(&VAR_5->dwork);
  if (VAR_6)
   FUNC_5(VAR_3);
 }
 FUNC_2(VAR_3, VAR_1);

 return 0;
}
