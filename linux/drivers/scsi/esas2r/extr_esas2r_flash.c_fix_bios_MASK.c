
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct esas2r_pc_image {scalar_t__ checksum; scalar_t__ pnp_offset; scalar_t__ header_offset; } ;
struct esas2r_flash_img {struct esas2r_component_header* cmp_hdr; } ;
struct esas2r_component_header {int image_offset; int length; } ;
struct esas2r_boot_header {int device_id; } ;
struct esas2r_adapter {TYPE_1__* pcid; } ;
struct TYPE_2__ {int subsystem_device; int subsystem_vendor; int device; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__*,int,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct esas2r_adapter *VAR_1, struct esas2r_flash_img *VAR_2)
{
 struct esas2r_component_header *VAR_3 = &VAR_2->cmp_hdr[VAR_0];
 struct esas2r_pc_image *VAR_4;
 struct esas2r_boot_header *VAR_5;

 VAR_4 = (struct esas2r_pc_image *)((u8 *)VAR_2 + VAR_3->image_offset);
 VAR_5 =
  (struct esas2r_boot_header *)((u8 *)VAR_4 +
           FUNC_4(VAR_4->header_offset));
 VAR_5->device_id = FUNC_1(VAR_1->pcid->device);


 if (VAR_4->pnp_offset) {
  u8 *VAR_6 =
   ((u8 *)VAR_4 + FUNC_4(VAR_4->pnp_offset));


  *((u32 *)&VAR_6[10]) =
   FUNC_2(FUNC_0(VAR_1->pcid->subsystem_vendor,
           VAR_1->pcid->subsystem_device));


  VAR_6[9] -= FUNC_3(VAR_6,
             32, 0);
 }


 VAR_4->checksum = VAR_4->checksum -
         FUNC_3((u8 *)VAR_4, VAR_3->length, 0);
}
