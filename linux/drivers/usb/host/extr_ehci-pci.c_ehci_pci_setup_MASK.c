
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int controller; } ;
struct usb_hcd {int has_tt; TYPE_2__* regs; TYPE_1__ self; } ;
struct pci_dev {int vendor; int device; int revision; int dev; } ;
struct ehci_hcd {int big_endian_mmio; int no_selective_suspend; int amd_pll_fix; int use_dummy_qh; int frame_index_bug; int hcs_params; int sbrn; int command; int has_ppcd; int need_io_watchdog; TYPE_2__* debug; TYPE_2__* caps; } ;
struct TYPE_4__ {int control; int hcs_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;



 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct ehci_hcd*,char*,int,int,int) ;
 int FUNC_9 (struct ehci_hcd*,char*,...) ;
 int FUNC_10 (struct ehci_hcd*,struct pci_dev*) ;
 int FUNC_11 (struct ehci_hcd*,int *) ;
 int FUNC_12 (struct usb_hcd*) ;
 int FUNC_13 (struct ehci_hcd*,char*) ;
 struct ehci_hcd* FUNC_14 (struct usb_hcd*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int,int*) ;
 int FUNC_17 (struct pci_dev*,int,int*) ;
 int FUNC_18 (struct pci_dev*,int,int*) ;
 int FUNC_19 (struct pci_dev*,int ) ;
 int FUNC_20 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_21 (int ) ;
 int FUNC_22 () ;
 int FUNC_23 () ;

__attribute__((used)) static int FUNC_24(struct usb_hcd *VAR_8)
{
 struct ehci_hcd *VAR_9 = FUNC_14(VAR_8);
 struct pci_dev *VAR_10 = FUNC_21(VAR_8->self.controller);
 u32 VAR_11;
 int VAR_12;

 VAR_9->caps = VAR_8->regs;
 switch (VAR_10->vendor) {
 case 129:

  if (VAR_10->device == 0x01b5) {



   FUNC_13(VAR_9,
      "unsupported big endian Toshiba quirk\n");

  }
  break;
 case 131:




  switch (VAR_10->device) {
  case 0x003c:
  case 0x005b:
  case 0x00d8:
  case 0x00e8:
   if (FUNC_19(VAR_10,
      FUNC_0(31)) < 0)
    FUNC_13(VAR_9, "can't enable NVidia "
     "workaround for >2GB RAM\n");
   break;




  case 0x0068:
   if (VAR_10->revision < 0xa4)
    VAR_9->no_selective_suspend = 1;
   break;
  }
  break;
 case 134:
  if (VAR_10->device == VAR_4)
   VAR_8->has_tt = 1;
  break;
 case 130:
  if (VAR_10->device == VAR_6)
   VAR_8->has_tt = 1;
  break;
 case 136:

  if (FUNC_23())
   VAR_9->amd_pll_fix = 1;

  if (VAR_10->device == 0x7463) {
   FUNC_9(VAR_9, "ignoring AMD8111 (errata)\n");
   VAR_12 = -VAR_2;
   goto done;
  }
  if (VAR_10->device == 0x7808) {
   VAR_9->use_dummy_qh = 1;
   FUNC_9(VAR_9, "applying AMD SB700/SB800/Hudson-2/3 EHCI dummy qh workaround\n");
  }
  break;
 case 128:
  if (VAR_10->device == 0x3104 && (VAR_10->revision & 0xf0) == 0x60) {
   u8 VAR_13;





   FUNC_16(VAR_10, 0x4b, &VAR_13);
   if (VAR_13 & 0x20)
    break;
   FUNC_20(VAR_10, 0x4b, VAR_13 | 0x20);
  }
  break;
 case 135:

  if (FUNC_23())
   VAR_9->amd_pll_fix = 1;
  if (VAR_10->device == 0x4396) {
   VAR_9->use_dummy_qh = 1;
   FUNC_9(VAR_9, "applying AMD SB700/SB800/Hudson-2/3 EHCI dummy qh workaround\n");
  }



  if ((VAR_10->device == 0x4386 || VAR_10->device == 0x4396) &&
    FUNC_22()) {
   u8 VAR_14;
   FUNC_9(VAR_9, "applying AMD SB600/SB700 USB freeze workaround\n");
   FUNC_16(VAR_10, 0x53, &VAR_14);
   FUNC_20(VAR_10, 0x53, VAR_14 | (1<<3));
  }
  break;
 case 132:

  FUNC_9(VAR_9, "applying MosChip frame-index workaround\n");
  VAR_9->frame_index_bug = 1;
  break;
 }


 VAR_11 = FUNC_15(VAR_10, VAR_3);
 if (VAR_11) {
  FUNC_17(VAR_10, VAR_11, &VAR_11);
  VAR_11 >>= 16;
  if (((VAR_11 >> 13) & 7) == 1) {
   u32 VAR_15 = FUNC_11(VAR_9,
          &VAR_9->caps->hcs_params);

   VAR_11 &= 0x1fff;
   VAR_9->debug = VAR_8->regs + VAR_11;
   VAR_11 = FUNC_11(VAR_9, &VAR_9->debug->control);
   FUNC_9(VAR_9, "debug port %d%s\n",
      FUNC_1(VAR_15),
      (VAR_11 & VAR_1) ? " IN USE" : "");
   if (!(VAR_11 & VAR_1))
    VAR_9->debug = ((void*)0);
  }
 }

 VAR_12 = FUNC_12(VAR_8);
 if (VAR_12)
  return VAR_12;


 switch (VAR_10->vendor) {
 case 133:
 case 134:
 case 136:
  VAR_9->need_io_watchdog = 0;
  break;
 case 131:
  switch (VAR_10->device) {





  case 0x0d9d:
   FUNC_9(VAR_9, "disable ppcd for nvidia mcp89\n");
   VAR_9->has_ppcd = 0;
   VAR_9->command &= ~VAR_0;
   break;
  }
  break;
 }


 VAR_11 = FUNC_2(VAR_9->hcs_params) * FUNC_3(VAR_9->hcs_params);
 VAR_11 &= 0x0f;
 if (VAR_11 && FUNC_4(VAR_9->hcs_params) > VAR_11) {
  FUNC_8(VAR_9, "bogus port configuration: "
   "cc=%d x pcc=%d < ports=%d\n",
   FUNC_2(VAR_9->hcs_params),
   FUNC_3(VAR_9->hcs_params),
   FUNC_4(VAR_9->hcs_params));

  switch (VAR_10->vendor) {
  case 0x17a0:

   VAR_11 |= (VAR_9->hcs_params & ~0xf);
   VAR_9->hcs_params = VAR_11;
   break;
  case 131:

   break;
  }
 }


 if (VAR_10->vendor == VAR_7
     && VAR_10->device == VAR_5)
  ;
 else
  FUNC_16(VAR_10, 0x60, &VAR_9->sbrn);






 if (!FUNC_6(&VAR_10->dev)) {
  u16 VAR_16;

  FUNC_18(VAR_10, 0x62, &VAR_16);
  if (VAR_16 & 0x0001) {
   FUNC_5(&VAR_10->dev, "Enabling legacy PCI PM\n");
   FUNC_7(&VAR_10->dev, 1);
  }
 }






 VAR_12 = FUNC_10(VAR_9, VAR_10);
done:
 return VAR_12;
}
