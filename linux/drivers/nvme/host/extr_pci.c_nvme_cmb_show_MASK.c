
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int cmbsz; int cmbloc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ,int ) ;
 struct nvme_dev* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct nvme_dev *VAR_4 = FUNC_2(FUNC_0(VAR_1));

 return FUNC_1(VAR_3, VAR_0, "cmbloc : x%08x\ncmbsz  : x%08x\n",
         VAR_4->cmbloc, VAR_4->cmbsz);
}
