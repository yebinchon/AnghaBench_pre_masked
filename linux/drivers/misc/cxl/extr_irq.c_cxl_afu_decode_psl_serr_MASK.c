
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cxl_afu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,...) ;

void FUNC_1(struct cxl_afu *VAR_10, u64 VAR_11)
{
 FUNC_0(&VAR_10->dev,
   "PSL Slice error received. Check AFU for root cause.\n");
 FUNC_0(&VAR_10->dev, "PSL_SERR_An: 0x%016llx\n", VAR_11);
 if (VAR_11 & VAR_5)
  FUNC_0(&VAR_10->dev, "AFU MMIO Timeout\n");
 if (VAR_11 & VAR_1)
  FUNC_0(&VAR_10->dev,
    "MMIO targeted Accelerator that was not enabled\n");
 if (VAR_11 & VAR_3)
  FUNC_0(&VAR_10->dev, "AFU CTAG Overflow\n");
 if (VAR_11 & VAR_7)
  FUNC_0(&VAR_10->dev, "Bad Interrupt Source\n");
 if (VAR_11 & VAR_6)
  FUNC_0(&VAR_10->dev, "Bad Context Handle\n");
 if (VAR_11 & VAR_8)
  FUNC_0(&VAR_10->dev, "LLCMD to Disabled AFU\n");
 if (VAR_11 & VAR_9)
  FUNC_0(&VAR_10->dev, "LLCMD Timeout to AFU\n");
 if (VAR_11 & VAR_4)
  FUNC_0(&VAR_10->dev, "AFU MMIO Parity Error\n");
 if (VAR_11 & VAR_2)
  FUNC_0(&VAR_10->dev, "AFU MMIO Duplicate CTAG Error\n");
 if (VAR_11 & VAR_0)
  FUNC_0(&VAR_10->dev,
    "AFU asserted JDONE with JERROR in AFU Directed Mode\n");
}
