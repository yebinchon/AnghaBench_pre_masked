
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int id; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nvmem_device*) ;
 int VAR_0 ;
 struct nvmem_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1)
{
 struct nvmem_device *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_0, VAR_2->id);
 FUNC_1(VAR_2);
}
