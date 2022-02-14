
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_fw_dump {int clr; int cap_mask; int size; int num_entries; int offset; void* tmpl_hdr; int tmpl_hdr_size; int * data; } ;
struct qlcnic_hardware_context {size_t pci_func; struct qlcnic_fw_dump fw_dump; } ;
struct qlcnic_dump_operations {scalar_t__ opcode; int (* handler ) (struct qlcnic_adapter*,struct qlcnic_dump_entry*,int *) ;} ;
struct TYPE_6__ {int mask; int offset; scalar_t__ type; int cap_size; int flags; } ;
struct qlcnic_dump_entry {TYPE_2__ hdr; } ;
struct qlcnic_adapter {TYPE_3__* netdev; int fw_version; struct qlcnic_hardware_context* ahw; TYPE_1__* pdev; } ;
struct qlcnic_83xx_dump_template_hdr {int* ocm_wnd_reg; int* saved_state; } ;
struct device {int kobj; } ;
typedef int mesg ;
typedef int __le32 ;
struct TYPE_7__ {char* name; } ;
struct TYPE_5__ {struct device dev; } ;


 int FUNC_0 (struct qlcnic_dump_operations*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (struct device*,char*,...) ;
 int VAR_8 ;
 int FUNC_2 (int *,int ,char**) ;
 int FUNC_3 (TYPE_3__*,char*,int,int *,int ,void*) ;
 int FUNC_4 (struct qlcnic_hardware_context*,int ,TYPE_3__*,char*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 struct qlcnic_dump_operations* VAR_9 ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 struct qlcnic_dump_operations* VAR_10 ;
 scalar_t__ FUNC_7 (struct qlcnic_adapter*,void*,int) ;
 int FUNC_8 (struct qlcnic_adapter*,void*,int,int ) ;
 int FUNC_9 (struct device*,struct qlcnic_dump_entry*,int) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (struct qlcnic_adapter*,struct qlcnic_dump_entry*,int *) ;
 int * FUNC_12 (int) ;

int FUNC_13(struct qlcnic_adapter *VAR_11)
{
 struct qlcnic_fw_dump *VAR_12 = &VAR_11->ahw->fw_dump;
 const struct qlcnic_dump_operations *VAR_13;
 struct qlcnic_83xx_dump_template_hdr *VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18 = 0;
 int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 = 0;
 struct device *VAR_24 = &VAR_11->pdev->dev;
 struct qlcnic_hardware_context *VAR_25;
 struct qlcnic_dump_entry *VAR_26;
 void *VAR_27;
 u32 VAR_28;
 __le32 *VAR_29;
 char VAR_30[64];
 char *VAR_31[] = {VAR_30, ((void*)0)};

 VAR_25 = VAR_11->ahw;
 VAR_27 = VAR_12->tmpl_hdr;


 if (!VAR_27)
  return -VAR_0;

 if (!FUNC_6(VAR_11)) {
  FUNC_1(&VAR_11->pdev->dev, "Dump not enabled\n");
  return -VAR_0;
 }

 if (VAR_12->clr) {
  FUNC_1(&VAR_11->pdev->dev,
    "Previous dump not cleared, not capturing dump\n");
  return -VAR_0;
 }

 FUNC_4(VAR_11->ahw, VAR_8, VAR_11->netdev, "Take FW dump\n");

 for (VAR_19 = 2, VAR_20 = 1; (VAR_19 & VAR_4); VAR_19 <<= 1, VAR_20++)
  if (VAR_19 & VAR_12->cap_mask)
   VAR_23 += FUNC_7(VAR_11, VAR_27, VAR_20);

 if (!VAR_23)
  return -VAR_0;

 VAR_12->data = FUNC_12(VAR_23);
 if (!VAR_12->data)
  return -VAR_1;

 VAR_29 = VAR_12->data;
 VAR_12->size = VAR_23;
 VAR_17 = VAR_12->num_entries;
 VAR_15 = VAR_12->offset;
 FUNC_8(VAR_11, VAR_27, 0, VAR_3);
 FUNC_8(VAR_11, VAR_27, 1, VAR_11->fw_version);

 if (FUNC_5(VAR_11)) {
  VAR_21 = FUNC_0(VAR_10);
  VAR_13 = VAR_10;
 } else {
  VAR_14 = VAR_27;
  VAR_21 = FUNC_0(VAR_9);
  VAR_13 = VAR_9;
  VAR_28 = VAR_14->ocm_wnd_reg[VAR_25->pci_func];
  VAR_14->saved_state[VAR_6] = VAR_28;
  VAR_14->saved_state[VAR_7] = VAR_25->pci_func;
 }

 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  VAR_26 = VAR_27 + VAR_15;
  if (!(VAR_26->hdr.mask & VAR_12->cap_mask)) {
   VAR_26->hdr.flags |= VAR_5;
   VAR_15 += VAR_26->hdr.offset;
   continue;
  }


  VAR_22 = 0;
  while (VAR_22 < VAR_21) {
   if (VAR_26->hdr.type == VAR_13[VAR_22].opcode)
    break;
   VAR_22++;
  }

  if (VAR_22 == VAR_21) {
   FUNC_1(VAR_24, "Skipping unknown entry opcode %d\n",
     VAR_26->hdr.type);
   VAR_26->hdr.flags |= VAR_5;
   VAR_15 += VAR_26->hdr.offset;
   continue;
  }


  VAR_16 = VAR_13[VAR_22].handler(VAR_11, VAR_26, VAR_29);
  if (!FUNC_9(VAR_24, VAR_26, VAR_16)) {
   VAR_26->hdr.flags |= VAR_5;
   VAR_15 += VAR_26->hdr.offset;
   continue;
  }

  VAR_18 += VAR_26->hdr.cap_size;
  VAR_15 += VAR_26->hdr.offset;
  VAR_29 = VAR_12->data + VAR_18;
 }

 VAR_12->clr = 1;
 FUNC_10(VAR_30, sizeof(VAR_30), "FW_DUMP=%s", VAR_11->netdev->name);
 FUNC_3(VAR_11->netdev,
      "Dump data %d bytes captured, dump data address = %p, template header size %d bytes, template address = %p\n",
      VAR_12->size, VAR_12->data, VAR_12->tmpl_hdr_size,
      VAR_12->tmpl_hdr);

 FUNC_2(&VAR_24->kobj, VAR_2, VAR_31);

 return 0;
}
