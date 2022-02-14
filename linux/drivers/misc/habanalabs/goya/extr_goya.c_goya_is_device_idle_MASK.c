
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct seq_file {int dummy; } ;
struct hl_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (struct seq_file*,char const*,int,char*,int,int,...) ;
 int FUNC_10 (struct seq_file*,char*) ;

__attribute__((used)) static bool FUNC_11(struct hl_device *VAR_15, u32 *VAR_16,
    struct seq_file *VAR_17)
{
 const char *VAR_18 = "%-5d%-9s%#-14x%#-16x%#x\n";
 const char *VAR_19 = "%-5d%-9s%#-14x%#x\n";
 u32 VAR_20, VAR_21, VAR_22, VAR_23,
  VAR_24;
 bool VAR_25 = 1, VAR_26;
 u64 VAR_27;
 int VAR_28;

 if (VAR_17)
  FUNC_10(VAR_17, "\nDMA  is_idle  QM_GLBL_STS0  DMA_CORE_STS0\n"
    "---  -------  ------------  -------------\n");

 VAR_27 = VAR_7 - VAR_6;

 for (VAR_28 = 0 ; VAR_28 < VAR_0 ; VAR_28++) {
  VAR_20 = FUNC_8(VAR_6 + VAR_28 * VAR_27);
  VAR_22 = FUNC_8(VAR_5 + VAR_28 * VAR_27);
  VAR_26 = FUNC_1(VAR_20) &&
    FUNC_0(VAR_22);
  VAR_25 &= VAR_26;

  if (VAR_16)
   *VAR_16 |= !VAR_26 << (VAR_1 + VAR_28);
  if (VAR_17)
   FUNC_9(VAR_17, VAR_19, VAR_28, VAR_26 ? "Y" : "N",
     VAR_20, VAR_22);
 }

 if (VAR_17)
  FUNC_10(VAR_17,
   "\nTPC  is_idle  QM_GLBL_STS0  CMDQ_GLBL_STS0  CFG_STATUS\n"
   "---  -------  ------------  --------------  ----------\n");

 VAR_27 = VAR_14 - VAR_13;

 for (VAR_28 = 0 ; VAR_28 < VAR_4 ; VAR_28++) {
  VAR_20 = FUNC_8(VAR_13 + VAR_28 * VAR_27);
  VAR_21 = FUNC_8(VAR_12 + VAR_28 * VAR_27);
  VAR_23 = FUNC_8(VAR_11 + VAR_28 * VAR_27);
  VAR_26 = FUNC_7(VAR_20) &&
    FUNC_5(VAR_21) &&
    FUNC_6(VAR_23);
  VAR_25 &= VAR_26;

  if (VAR_16)
   *VAR_16 |= !VAR_26 << (VAR_3 + VAR_28);
  if (VAR_17)
   FUNC_9(VAR_17, VAR_18, VAR_28, VAR_26 ? "Y" : "N",
    VAR_20, VAR_21, VAR_23);
 }

 if (VAR_17)
  FUNC_10(VAR_17,
   "\nMME  is_idle  QM_GLBL_STS0  CMDQ_GLBL_STS0  ARCH_STATUS\n"
   "---  -------  ------------  --------------  -----------\n");

 VAR_20 = FUNC_8(VAR_10);
 VAR_21 = FUNC_8(VAR_9);
 VAR_24 = FUNC_8(VAR_8);
 VAR_26 = FUNC_4(VAR_20) &&
   FUNC_2(VAR_21) &&
   FUNC_3(VAR_24);
 VAR_25 &= VAR_26;

 if (VAR_16)
  *VAR_16 |= !VAR_26 << VAR_2;
 if (VAR_17) {
  FUNC_9(VAR_17, VAR_18, 0, VAR_26 ? "Y" : "N", VAR_20,
    VAR_21, VAR_24);
  FUNC_10(VAR_17, "\n");
 }

 return VAR_25;
}
