
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct vbe_ib {int dummy; } ;
struct TYPE_6__ {int vbe_version; int oem_vendor_name_ptr; int oem_product_name_ptr; int oem_product_rev_ptr; int oem_string_ptr; int mode_list_ptr; int vbe_signature; } ;
struct uvesafb_par {TYPE_3__ vbe_ib; } ;
struct TYPE_4__ {int eax; } ;
struct TYPE_5__ {int buf_len; TYPE_1__ regs; int flags; } ;
struct uvesafb_ktask {TYPE_3__* buf; TYPE_2__ t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct uvesafb_ktask*) ;

__attribute__((used)) static int FUNC_5(struct uvesafb_ktask *VAR_2,
          struct uvesafb_par *VAR_3)
{
 int VAR_4;

 VAR_2->t.regs.eax = 0x4f00;
 VAR_2->t.flags = VAR_1;
 VAR_2->t.buf_len = sizeof(struct vbe_ib);
 VAR_2->buf = &VAR_3->vbe_ib;
 FUNC_3(VAR_3->vbe_ib.vbe_signature, "VBE2", 4);

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4 || (VAR_2->t.regs.eax & 0xffff) != 0x004f) {
  FUNC_1("Getting VBE info block failed (eax=0x%x, err=%d)\n",
         (u32)VAR_2->t.regs.eax, VAR_4);
  return -VAR_0;
 }

 if (VAR_3->vbe_ib.vbe_version < 0x0200) {
  FUNC_1("Sorry, pre-VBE 2.0 cards are not supported\n");
  return -VAR_0;
 }

 if (!VAR_3->vbe_ib.mode_list_ptr) {
  FUNC_1("Missing mode list!\n");
  return -VAR_0;
 }

 FUNC_2("");






 if (VAR_3->vbe_ib.oem_vendor_name_ptr)
  FUNC_0("%s, ",
   ((char *)VAR_2->buf) + VAR_3->vbe_ib.oem_vendor_name_ptr);

 if (VAR_3->vbe_ib.oem_product_name_ptr)
  FUNC_0("%s, ",
   ((char *)VAR_2->buf) + VAR_3->vbe_ib.oem_product_name_ptr);

 if (VAR_3->vbe_ib.oem_product_rev_ptr)
  FUNC_0("%s, ",
   ((char *)VAR_2->buf) + VAR_3->vbe_ib.oem_product_rev_ptr);

 if (VAR_3->vbe_ib.oem_string_ptr)
  FUNC_0("OEM: %s, ",
   ((char *)VAR_2->buf) + VAR_3->vbe_ib.oem_string_ptr);

 FUNC_0("VBE v%d.%d\n",
  (VAR_3->vbe_ib.vbe_version & 0xff00) >> 8,
  VAR_3->vbe_ib.vbe_version & 0xff);

 return 0;
}
