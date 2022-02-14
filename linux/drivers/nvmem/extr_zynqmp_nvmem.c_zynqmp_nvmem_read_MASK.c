
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zynqmp_nvmem_data {int dev; } ;
struct TYPE_2__ {int (* get_chipid ) (int*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int*,int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, unsigned int VAR_4,
        void *VAR_5, size_t VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;
 struct zynqmp_nvmem_data *VAR_10 = VAR_3;

 if (!VAR_2->get_chipid)
  return -VAR_0;

 VAR_7 = VAR_2->get_chipid(&VAR_8, &VAR_9);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0(VAR_10->dev, "Read chipid val %x %x\n", VAR_8, VAR_9);
 *(int *)VAR_5 = VAR_9 & VAR_1;

 return 0;
}
