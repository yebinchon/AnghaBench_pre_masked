
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x_mac_vals {int bmac_addr; int* bmac_val; int emac_addr; int xmac_addr; void* xmac_val; void* emac_val; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct bnx2x*,int,int,struct bnx2x_mac_vals*) ;
 int FUNC_7 (struct bnx2x_mac_vals*,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct bnx2x *VAR_14,
     struct bnx2x_mac_vals *VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 bool VAR_21 = 0;
 u8 VAR_22 = FUNC_1(VAR_14);


 FUNC_7(VAR_15, 0, sizeof(*VAR_15));

 VAR_20 = FUNC_4(VAR_14, VAR_7);

 if (!FUNC_3(VAR_14)) {
  VAR_16 = FUNC_4(VAR_14, VAR_8 + VAR_22 * 4);
  VAR_19 = VAR_5 << VAR_22;
  if ((VAR_19 & VAR_20) && VAR_16) {
   u32 VAR_23[2];
   FUNC_0("Disable bmac Rx\n");
   VAR_17 = FUNC_1(VAR_14) ? VAR_10
      : VAR_9;
   VAR_18 = FUNC_2(VAR_14) ? VAR_0
      : VAR_1;







   VAR_23[0] = FUNC_4(VAR_14, VAR_17 + VAR_18);
   VAR_23[1] = FUNC_4(VAR_14, VAR_17 + VAR_18 + 0x4);
   VAR_15->bmac_addr = VAR_17 + VAR_18;
   VAR_15->bmac_val[0] = VAR_23[0];
   VAR_15->bmac_val[1] = VAR_23[1];
   VAR_23[0] &= ~VAR_2;
   FUNC_5(VAR_14, VAR_15->bmac_addr, VAR_23[0]);
   FUNC_5(VAR_14, VAR_15->bmac_addr + 0x4, VAR_23[1]);
  }
  FUNC_0("Disable emac Rx\n");
  VAR_15->emac_addr = VAR_11 + FUNC_1(VAR_14)*4;
  VAR_15->emac_val = FUNC_4(VAR_14, VAR_15->emac_addr);
  FUNC_5(VAR_14, VAR_15->emac_addr, 0);
  VAR_21 = 1;
 } else {
  if (VAR_20 & VAR_6) {
   FUNC_0("Disable xmac Rx\n");
   VAR_17 = FUNC_1(VAR_14) ? VAR_4 : VAR_3;
   VAR_16 = FUNC_4(VAR_14, VAR_17 + VAR_13);
   FUNC_5(VAR_14, VAR_17 + VAR_13,
          VAR_16 & ~(1 << 1));
   FUNC_5(VAR_14, VAR_17 + VAR_13,
          VAR_16 | (1 << 1));
   VAR_15->xmac_addr = VAR_17 + VAR_12;
   VAR_15->xmac_val = FUNC_4(VAR_14, VAR_15->xmac_addr);
   FUNC_5(VAR_14, VAR_15->xmac_addr, 0);
   VAR_21 = 1;
  }

  VAR_21 |= FUNC_6(VAR_14, 0,
           VAR_20, VAR_15);
  VAR_21 |= FUNC_6(VAR_14, 1,
           VAR_20, VAR_15);
 }

 if (VAR_21)
  FUNC_8(20);
}
