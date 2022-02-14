
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nvdimm_bus {int dev; } ;
struct clear_badblocks_context {int cleared; int phys; } ;
typedef int phys_addr_t ;


 int FUNC_0 (int *,struct clear_badblocks_context*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct nvdimm_bus *VAR_1,
  phys_addr_t VAR_2, u64 VAR_3)
{
 struct clear_badblocks_context VAR_4 = {
  .phys = VAR_2,
  .cleared = VAR_3,
 };

 FUNC_0(&VAR_1->dev, &VAR_4,
   VAR_0);
}
