
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct iproc_pcie {scalar_t__ base; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,int,int ,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct iproc_pcie*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static inline int FUNC_8(struct iproc_pcie *VAR_5, int VAR_6,
          int VAR_7, u64 VAR_8, u64 VAR_9)
{
 struct device *VAR_10 = VAR_5->dev;
 u16 VAR_11, VAR_12;





 VAR_11 = FUNC_3(VAR_5, FUNC_0(VAR_1,
         VAR_6));
 VAR_12 = FUNC_3(VAR_5, FUNC_0(VAR_2,
         VAR_6));
 if (FUNC_2(VAR_11) ||
     FUNC_2(VAR_12))
  return -VAR_0;





 FUNC_7(FUNC_4(VAR_8) | (VAR_7 << VAR_3) |
        VAR_4, VAR_5->base + VAR_11);
 FUNC_7(FUNC_6(VAR_8), VAR_5->base + VAR_11 + 4);


 FUNC_7(FUNC_4(VAR_9), VAR_5->base + VAR_12);
 FUNC_7(FUNC_6(VAR_9), VAR_5->base + VAR_12 + 4);

 FUNC_1(VAR_10, "ob window [%d]: offset 0x%x axi %pap pci %pap\n",
  VAR_6, VAR_11, &VAR_8, &VAR_9);
 FUNC_1(VAR_10, "oarr lo 0x%x oarr hi 0x%x\n",
  FUNC_5(VAR_5->base + VAR_11),
  FUNC_5(VAR_5->base + VAR_11 + 4));
 FUNC_1(VAR_10, "omap lo 0x%x omap hi 0x%x\n",
  FUNC_5(VAR_5->base + VAR_12),
  FUNC_5(VAR_5->base + VAR_12 + 4));

 return 0;
}
