
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cxl_afu {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cxl_afu*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct cxl_afu*,int ) ;
 int FUNC_3 (struct cxl_afu*,int ,int) ;
 int FUNC_4 (struct cxl_afu*,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct cxl_afu *VAR_10 = VAR_9;
 u64 VAR_11, VAR_12, VAR_13, VAR_14;
 u64 VAR_15, VAR_16, VAR_17;




 VAR_12 = FUNC_2(VAR_10, VAR_5);
 VAR_11 = FUNC_4(VAR_10, VAR_3);
 VAR_13 = FUNC_4(VAR_10, VAR_1);
 VAR_14 = FUNC_4(VAR_10, VAR_2);
 FUNC_0(VAR_10, VAR_12);

 if (FUNC_1()) {
  VAR_15 = FUNC_2(VAR_10, VAR_4);
  VAR_16 = FUNC_2(VAR_10, VAR_0);
  FUNC_5(&VAR_10->dev, "PSL_FIR_SLICE_An: 0x%016llx\n", VAR_15);
  FUNC_5(&VAR_10->dev, "CXL_PSL_AFU_DEBUG_An: 0x%016llx\n", VAR_16);
 }
 FUNC_5(&VAR_10->dev, "CXL_PSL_ErrStat_An: 0x%016llx\n", VAR_11);
 FUNC_5(&VAR_10->dev, "AFU_ERR_An: 0x%.16llx\n", VAR_13);
 FUNC_5(&VAR_10->dev, "PSL_DSISR_An: 0x%.16llx\n", VAR_14);


 VAR_17 = (VAR_12 & VAR_6) >> 32;
 VAR_12 |= VAR_17;
 FUNC_3(VAR_10, VAR_5, VAR_12);
 FUNC_6(&VAR_10->dev, "Further such interrupts will be masked until the AFU is reset\n");

 return VAR_7;
}
