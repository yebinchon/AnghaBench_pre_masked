
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvdimm_bus {int badrange; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct nvdimm_bus*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct nvdimm_bus *VAR_0,
  phys_addr_t VAR_1, u64 VAR_2)
{
 if (VAR_2 > 0)
  FUNC_0(&VAR_0->badrange, VAR_1, VAR_2);

 if (VAR_2 > 0 && VAR_2 / 512)
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
