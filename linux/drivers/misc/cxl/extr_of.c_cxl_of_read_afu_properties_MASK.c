
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct device_node {int dummy; } ;
struct cxl_afu {scalar_t__ psn_phys; int psa; int max_procs_virtualised; int irqs_max; int pp_irqs; int crs_num; int pp_psa; int serr_hwirq; TYPE_2__* adapter; TYPE_1__* guest; scalar_t__ crs_offset; int crs_len; scalar_t__ eb_offset; int eb_len; } ;
typedef int __be32 ;
struct TYPE_6__ {int (* afu_cr_read16 ) (struct cxl_afu*,int,int ,int*) ;int (* afu_cr_read32 ) (struct cxl_afu*,int,int ,int*) ;} ;
struct TYPE_5__ {int ps_size; } ;
struct TYPE_4__ {int max_ints; int handle; int p2n_size; int p2n_phys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (struct device_node*,char*,int*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct device_node*,char*,struct cxl_afu*) ;
 int FUNC_4 (struct device_node*,char*,int *) ;
 int * FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (struct device_node*,char*) ;
 int FUNC_7 (int *,struct cxl_afu*) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (struct cxl_afu*,int,int ,int*) ;
 int FUNC_10 (struct cxl_afu*,int,int ,int*) ;
 int FUNC_11 (struct cxl_afu*,int,int ,int*) ;

int FUNC_12(struct cxl_afu *VAR_5, struct device_node *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 char *VAR_10;
 const __be32 *VAR_11;
 u16 VAR_12, VAR_13;
 u32 VAR_14 = 0, VAR_15;



 if (VAR_4) {
  FUNC_2("Dump of the 'ibm,coherent-platform-function' node properties:\n");

  VAR_11 = FUNC_0(VAR_6, "compatible", &VAR_8);
  VAR_7 = 0;
  while (VAR_7 < VAR_8) {
   VAR_10 = (char *) VAR_11 + VAR_7;
   FUNC_2("compatible: %s\n", VAR_10);
   VAR_7 += FUNC_8(VAR_10) + 1;
  }
  FUNC_6(VAR_6, "name");
 }

 VAR_9 = FUNC_3(VAR_6, "reg", VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_6, "assigned-addresses", VAR_5);
 if (VAR_9)
  return VAR_9;

 if (VAR_5->psn_phys == 0)
  VAR_5->psa = 0;
 else
  VAR_5->psa = 1;

 if (VAR_4) {
  FUNC_6(VAR_6, "ibm,loc-code");
  FUNC_6(VAR_6, "device_type");
 }

 FUNC_5(VAR_6, "ibm,#processes", &VAR_5->max_procs_virtualised);

 if (VAR_4) {
  FUNC_5(VAR_6, "ibm,scratchpad-size", &VAR_14);
  FUNC_5(VAR_6, "ibm,programmable", &VAR_14);
  FUNC_6(VAR_6, "ibm,phandle");
  FUNC_7(((void*)0), VAR_5);
 }

 FUNC_5(VAR_6, "ibm,max-ints-per-process", &VAR_5->guest->max_ints);
 VAR_5->irqs_max = VAR_5->guest->max_ints;

 VAR_11 = FUNC_5(VAR_6, "ibm,min-ints-per-process", &VAR_5->pp_irqs);
 if (VAR_11) {




  VAR_5->pp_irqs--;
 }

 if (VAR_4) {
  FUNC_5(VAR_6, "ibm,max-ints", &VAR_14);
  FUNC_5(VAR_6, "ibm,vpd-size", &VAR_14);
 }

 FUNC_4(VAR_6, "ibm,error-buffer-size", &VAR_5->eb_len);
 VAR_5->eb_offset = 0;

 if (VAR_4)
  FUNC_5(VAR_6, "ibm,config-record-type", &VAR_14);

 FUNC_4(VAR_6, "ibm,config-record-size", &VAR_5->crs_len);
 VAR_5->crs_offset = 0;

 FUNC_5(VAR_6, "ibm,#config-records", &VAR_5->crs_num);

 if (VAR_4) {
  for (VAR_7 = 0; VAR_7 < VAR_5->crs_num; VAR_7++) {
   VAR_9 = VAR_3->afu_cr_read16(VAR_5, VAR_7, VAR_1,
      &VAR_12);
   if (!VAR_9)
    FUNC_2("record %d - device-id: %#x\n",
     VAR_7, VAR_12);
   VAR_9 = VAR_3->afu_cr_read16(VAR_5, VAR_7, VAR_2,
      &VAR_13);
   if (!VAR_9)
    FUNC_2("record %d - vendor-id: %#x\n",
     VAR_7, VAR_13);
   VAR_9 = VAR_3->afu_cr_read32(VAR_5, VAR_7, VAR_0,
      &VAR_15);
   if (!VAR_9) {
    VAR_15 >>= 8;
    FUNC_2("record %d - class-code: %#x\n",
     VAR_7, VAR_15);
   }
  }

  FUNC_5(VAR_6, "ibm,function-number", &VAR_14);
  FUNC_5(VAR_6, "ibm,privileged-function", &VAR_14);
  FUNC_5(VAR_6, "vendor-id", &VAR_14);
  FUNC_5(VAR_6, "device-id", &VAR_14);
  FUNC_5(VAR_6, "revision-id", &VAR_14);
  FUNC_5(VAR_6, "class-code", &VAR_14);
  FUNC_5(VAR_6, "subsystem-vendor-id", &VAR_14);
  FUNC_5(VAR_6, "subsystem-id", &VAR_14);
 }




 VAR_14 = 0;
 VAR_11 = FUNC_5(VAR_6, "ibm,process-mmio", &VAR_14);
 if (VAR_11 && VAR_14 == 1)
  VAR_5->pp_psa = 1;
 else
  VAR_5->pp_psa = 0;

 if (VAR_4) {
  FUNC_5(VAR_6, "ibm,supports-aur", &VAR_14);
  FUNC_5(VAR_6, "ibm,supports-csrp", &VAR_14);
  FUNC_5(VAR_6, "ibm,supports-prr", &VAR_14);
 }

 VAR_11 = FUNC_5(VAR_6, "ibm,function-error-interrupt", &VAR_14);
 if (VAR_11)
  VAR_5->serr_hwirq = VAR_14;

 FUNC_1("AFU handle: %#llx\n", VAR_5->guest->handle);
 FUNC_1("p2n_phys: %#llx (size %#llx)\n",
  VAR_5->guest->p2n_phys, VAR_5->guest->p2n_size);
 FUNC_1("psn_phys: %#llx (size %#llx)\n",
  VAR_5->psn_phys, VAR_5->adapter->ps_size);
 FUNC_1("Max number of processes virtualised=%i\n",
  VAR_5->max_procs_virtualised);
 FUNC_1("Per-process irqs min=%i, max=%i\n", VAR_5->pp_irqs,
   VAR_5->irqs_max);
 FUNC_1("Slice error interrupt=%#lx\n", VAR_5->serr_hwirq);

 return 0;
}
