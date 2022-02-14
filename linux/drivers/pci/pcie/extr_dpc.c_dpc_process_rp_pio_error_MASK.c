
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct dpc_dev {int cap_pos; int rp_log_size; TYPE_1__* dev; } ;
struct TYPE_2__ {struct pci_dev* port; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct pci_dev*,char*,int,...) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 int * VAR_9 ;

__attribute__((used)) static void FUNC_5(struct dpc_dev *VAR_10)
{
 struct pci_dev *VAR_11 = VAR_10->dev->port;
 u16 VAR_12 = VAR_10->cap_pos, VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26;

 FUNC_2(VAR_11, VAR_12 + VAR_5, &VAR_15);
 FUNC_2(VAR_11, VAR_12 + VAR_3, &VAR_16);
 FUNC_1(VAR_11, "rp_pio_status: %#010x, rp_pio_mask: %#010x\n",
  VAR_15, VAR_16);

 FUNC_2(VAR_11, VAR_12 + VAR_4, &VAR_17);
 FUNC_2(VAR_11, VAR_12 + VAR_6, &VAR_18);
 FUNC_2(VAR_11, VAR_12 + VAR_0, &VAR_19);
 FUNC_1(VAR_11, "RP PIO severity=%#010x, syserror=%#010x, exception=%#010x\n",
  VAR_17, VAR_18, VAR_19);


 FUNC_3(VAR_11, VAR_12 + VAR_8, &VAR_13);
 VAR_14 = (VAR_13 & 0x1f00) >> 8;

 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_9); VAR_26++) {
  if ((VAR_15 & ~VAR_16) & (1 << VAR_26))
   FUNC_1(VAR_11, "[%2d] %s%s\n", VAR_26, VAR_9[VAR_26],
    VAR_14 == VAR_26 ? " (First)" : "");
 }

 if (VAR_10->rp_log_size < 4)
  goto clear_status;
 FUNC_2(VAR_11, VAR_12 + VAR_1,
         &VAR_20);
 FUNC_2(VAR_11, VAR_12 + VAR_1 + 4,
         &VAR_21);
 FUNC_2(VAR_11, VAR_12 + VAR_1 + 8,
         &VAR_22);
 FUNC_2(VAR_11, VAR_12 + VAR_1 + 12,
         &VAR_23);
 FUNC_1(VAR_11, "TLP Header: %#010x %#010x %#010x %#010x\n",
  VAR_20, VAR_21, VAR_22, VAR_23);

 if (VAR_10->rp_log_size < 5)
  goto clear_status;
 FUNC_2(VAR_11, VAR_12 + VAR_2, &VAR_24);
 FUNC_1(VAR_11, "RP PIO ImpSpec Log %#010x\n", VAR_24);

 for (VAR_26 = 0; VAR_26 < VAR_10->rp_log_size - 5; VAR_26++) {
  FUNC_2(VAR_11,
   VAR_12 + VAR_7, &VAR_25);
  FUNC_1(VAR_11, "TLP Prefix Header: dw%d, %#010x\n", VAR_26, VAR_25);
 }
 clear_status:
 FUNC_4(VAR_11, VAR_12 + VAR_5, VAR_15);
}
