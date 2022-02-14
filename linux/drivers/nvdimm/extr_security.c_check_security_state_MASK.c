
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct device {int dummy; } ;
struct nvdimm {int flags; TYPE_1__ sec; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct nvdimm *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;

 if (FUNC_1(VAR_3, &VAR_4->sec.flags)) {
  FUNC_0(VAR_5, "Incorrect security state: %#lx\n",
    VAR_4->sec.flags);
  return -VAR_1;
 }

 if (FUNC_1(VAR_2, &VAR_4->flags)) {
  FUNC_0(VAR_5, "Security operation in progress.\n");
  return -VAR_0;
 }

 return 0;
}
