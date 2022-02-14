
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef scalar_t__ uint ;
struct gasket_page_table {int device; scalar_t__ base_slot; scalar_t__ entries; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct gasket_page_table*,int ,scalar_t__) ;
 int FUNC_2 (struct gasket_page_table*,int ,scalar_t__) ;
 int FUNC_3 (struct gasket_page_table*,scalar_t__,scalar_t__,int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct gasket_page_table*,int ) ;

__attribute__((used)) static int FUNC_5(struct gasket_page_table *VAR_0,
       ulong VAR_1, ulong VAR_2,
       uint VAR_3)
{
 int VAR_4;
 uint VAR_5 = FUNC_4(VAR_0, VAR_2);

 VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_0->device,
   "page table slots %u (@ 0x%lx) to %u are not available\n",
   VAR_5, VAR_2, VAR_5 + VAR_3 - 1);
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_0, VAR_0->entries + VAR_5,
         VAR_0->base_slot + VAR_5, VAR_1,
         VAR_3, 1);

 if (VAR_4) {
  FUNC_2(VAR_0, VAR_2, VAR_3);
  FUNC_0(VAR_0->device, "gasket_perform_mapping %d\n", VAR_4);
 }
 return VAR_4;
}
