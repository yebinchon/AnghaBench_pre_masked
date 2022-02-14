
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct nvdimm_drvdata {int dev; } ;
struct nd_namespace_label {void* checksum; int slot; } ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct nvdimm_drvdata*,int ) ;
 scalar_t__ FUNC_5 (struct nd_namespace_label*,int ,int) ;
 int FUNC_6 (struct nvdimm_drvdata*) ;

__attribute__((used)) static bool FUNC_7(struct nvdimm_drvdata *VAR_1,
  struct nd_namespace_label *VAR_2, u32 VAR_3)
{

 if (VAR_3 != FUNC_1(VAR_2->slot))
  return 0;


 if (FUNC_4(VAR_1, VAR_0)) {
  u64 VAR_4, VAR_5;

  VAR_5 = FUNC_2(VAR_2->checksum);
  VAR_2->checksum = FUNC_0(0);
  VAR_4 = FUNC_5(VAR_2, FUNC_6(VAR_1), 1);
  VAR_2->checksum = FUNC_0(VAR_5);
  if (VAR_4 != VAR_5) {
   FUNC_3(VAR_1->dev, "fail checksum. slot: %d expect: %#llx\n",
    VAR_3, VAR_4);
   return 0;
  }
 }

 return 1;
}
