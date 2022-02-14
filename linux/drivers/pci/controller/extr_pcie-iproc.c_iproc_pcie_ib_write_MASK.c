
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct iproc_pcie_ib_map {scalar_t__ imap_window_offset; scalar_t__ imap_addr_offset; } ;
struct iproc_pcie {scalar_t__ base; struct iproc_pcie_ib_map* ib_map; struct device* dev; } ;
struct device {int dummy; } ;
typedef int resource_size_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct device*,char*,int,int,...) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct iproc_pcie*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct iproc_pcie *VAR_4, int VAR_5,
          int VAR_6, int VAR_7, u64 VAR_8,
          u64 VAR_9, resource_size_t VAR_10)
{
 struct device *VAR_11 = VAR_4->dev;
 const struct iproc_pcie_ib_map *VAR_12 = &VAR_4->ib_map[VAR_5];
 u16 VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_13 = FUNC_5(VAR_4,
    FUNC_1(VAR_2, VAR_5));
 VAR_14 = FUNC_5(VAR_4,
    FUNC_1(VAR_3, VAR_5));
 if (FUNC_4(VAR_13) ||
     FUNC_4(VAR_14))
  return -VAR_0;

 FUNC_2(VAR_11, "ib region [%d]: offset 0x%x axi %pap pci %pap\n",
  VAR_5, VAR_13, &VAR_8, &VAR_9);





 FUNC_9(FUNC_6(VAR_9) | FUNC_0(VAR_6),
        VAR_4->base + VAR_13);
 FUNC_9(FUNC_8(VAR_9), VAR_4->base + VAR_13 + 4);

 FUNC_2(VAR_11, "iarr lo 0x%x iarr hi 0x%x\n",
  FUNC_7(VAR_4->base + VAR_13),
  FUNC_7(VAR_4->base + VAR_13 + 4));





 VAR_10 >>= FUNC_3(VAR_7);
 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  VAR_15 = FUNC_7(VAR_4->base + VAR_14);
  VAR_15 |= FUNC_6(VAR_8) | VAR_1;
  FUNC_9(VAR_15, VAR_4->base + VAR_14);
  FUNC_9(FUNC_8(VAR_8),
         VAR_4->base + VAR_14 + VAR_12->imap_addr_offset);

  FUNC_2(VAR_11, "imap window [%d] lo 0x%x hi 0x%x\n",
   VAR_16, FUNC_7(VAR_4->base + VAR_14),
   FUNC_7(VAR_4->base + VAR_14 +
         VAR_12->imap_addr_offset));

  VAR_14 += VAR_12->imap_window_offset;
  VAR_8 += VAR_10;
 }

 return 0;
}
