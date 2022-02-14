
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_sste {int dummy; } ;
struct cxl_context {int sstp0; int sstp1; struct cxl_sste* sstp; scalar_t__ sst_size; scalar_t__ sst_lru; } ;
struct TYPE_2__ {int sllp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct cxl_context *VAR_14)
{
 unsigned long VAR_15;
 u64 VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_18 = 0;
 VAR_19 = 0;

 VAR_14->sst_size = VAR_9;
 VAR_14->sst_lru = 0;
 VAR_14->sstp = (struct cxl_sste *)FUNC_2(VAR_7);
 if (!VAR_14->sstp) {
  FUNC_4("cxl_alloc_sst: Unable to allocate segment table\n");
  return -VAR_5;
 }
 FUNC_3("SSTP allocated at 0x%p\n", VAR_14->sstp);

 VAR_15 = FUNC_1((u64)VAR_14->sstp, VAR_11) << 12;

 VAR_18 |= (u64)VAR_11 << VAR_0;
 VAR_18 |= (VAR_10 | VAR_13[VAR_12].sllp) << 50;

 VAR_17 = (((u64)VAR_14->sst_size >> 8) - 1) << VAR_2;
 if (FUNC_5(VAR_17 & ~VAR_1)) {
  FUNC_0(1, "Impossible segment table size\n");
  return -VAR_4;
 }
 VAR_18 |= VAR_17;

 if (VAR_11 == VAR_8)
  VAR_16 = 0xfffff00ULL;
 else
  VAR_16 = 0xffffffff00ULL;

 VAR_18 |= VAR_15 >> (50-14);
 VAR_19 |= (VAR_15 << (64-(50-14))) & ~VAR_16;
 VAR_19 |= (u64)VAR_14->sstp & VAR_16;
 VAR_19 |= VAR_3;

 FUNC_3("Looked up %#llx: slbfee. %#llx (ssize: %x, vsid: %#lx), copied to SSTP0: %#llx, SSTP1: %#llx\n",
   (u64)VAR_14->sstp, (u64)VAR_14->sstp & VAR_6, VAR_11, VAR_15, VAR_18, VAR_19);


 VAR_14->sstp0 = VAR_18;
 VAR_14->sstp1 = VAR_19;

 return 0;
}
