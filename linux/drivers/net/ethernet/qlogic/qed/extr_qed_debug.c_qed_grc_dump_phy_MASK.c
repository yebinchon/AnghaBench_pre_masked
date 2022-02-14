
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct phy_defs {int base_addr; int tbus_addr_lo_addr; int tbus_addr_hi_addr; int tbus_data_lo_addr; int tbus_data_hi_addr; char* phy_name; } ;
typedef int mem_name ;


 size_t FUNC_0 (struct phy_defs*) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qed_hwfn*,int*,int,char*,int ,int,int,int,char*,int,int ) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int,int) ;
 struct phy_defs* VAR_2 ;
 scalar_t__ FUNC_5 (char*,int,char*,char*) ;

__attribute__((used)) static u32 FUNC_6(struct qed_hwfn *VAR_3,
       struct qed_ptt *VAR_4, u32 *VAR_5, bool VAR_6)
{
 u32 VAR_7 = 0, VAR_8, VAR_9;
 char VAR_10[32];
 u8 VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_2); VAR_11++) {
  u32 VAR_12, VAR_13, VAR_14, VAR_15;
  struct phy_defs *VAR_16;
  u8 *VAR_17;

  VAR_16 = &VAR_2[VAR_11];
  VAR_12 = VAR_16->base_addr +
          VAR_16->tbus_addr_lo_addr;
  VAR_13 = VAR_16->base_addr +
          VAR_16->tbus_addr_hi_addr;
  VAR_14 = VAR_16->base_addr +
          VAR_16->tbus_data_lo_addr;
  VAR_15 = VAR_16->base_addr +
          VAR_16->tbus_data_hi_addr;

  if (FUNC_5(VAR_10, sizeof(VAR_10), "tbus_%s",
        VAR_16->phy_name) < 0)
   FUNC_1(VAR_3,
      "Unexpected debug error: invalid PHY memory name\n");

  VAR_7 += FUNC_2(VAR_3,
            VAR_5 + VAR_7,
            VAR_6,
            VAR_10,
            0,
            VAR_1,
            16, 1, VAR_10, 0, 0);

  if (!VAR_6) {
   VAR_7 += VAR_1;
   continue;
  }

  VAR_17 = (u8 *)(VAR_5 + VAR_7);
  for (VAR_9 = 0;
       VAR_9 < (VAR_0 >> 8);
       VAR_9++) {
   FUNC_4(VAR_3, VAR_4, VAR_13, VAR_9);
   for (VAR_8 = 0; VAR_8 < 256;
        VAR_8++) {
    FUNC_4(VAR_3,
           VAR_4, VAR_12, VAR_8);
    *(VAR_17++) = (u8)FUNC_3(VAR_3,
           VAR_4,
           VAR_14);
    *(VAR_17++) = (u8)FUNC_3(VAR_3,
           VAR_4,
           VAR_15);
   }
  }

  VAR_7 += VAR_1;
 }

 return VAR_7;
}
