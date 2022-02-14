
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x_mac_vals {int * bmac_val; scalar_t__ bmac_addr; int emac_val; scalar_t__ emac_addr; int * umac_val; scalar_t__* umac_addr; int xmac_val; scalar_t__ xmac_addr; } ;
struct TYPE_2__ {int port; } ;
struct bnx2x {TYPE_1__ link_params; } ;
typedef int mac_vals ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,int) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_mac_vals*) ;
 int FUNC_10 (struct bnx2x*,int) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (struct bnx2x_mac_vals*,int ,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct bnx2x *VAR_6)
{
 u32 VAR_7, VAR_8 = 0, VAR_9;
 bool VAR_10 = 0;
 struct bnx2x_mac_vals VAR_11;





 FUNC_0("Common unload Flow\n");

 FUNC_13(&VAR_11, 0, sizeof(VAR_11));

 if (FUNC_6(VAR_6))
  return FUNC_8(VAR_6);

 VAR_7 = FUNC_3(VAR_6, VAR_3);


 if (VAR_7 & VAR_2) {
  u32 VAR_12 = 1000;


  FUNC_9(VAR_6, &VAR_11);


  FUNC_12(&VAR_6->link_params, 0);
  VAR_6->link_params.port ^= 1;
  FUNC_12(&VAR_6->link_params, 0);
  VAR_6->link_params.port ^= 1;


  if (FUNC_5(VAR_6)) {
   VAR_10 = 1;

   FUNC_4(VAR_6, VAR_1, 0);

   FUNC_3(VAR_6, VAR_4);
  }
  if (!FUNC_2(VAR_6))

   FUNC_4(VAR_6, VAR_5, 0);


  VAR_8 = FUNC_3(VAR_6, VAR_0);
  while (VAR_12) {
   u32 VAR_13 = VAR_8;

   VAR_8 = FUNC_3(VAR_6, VAR_0);
   if (!VAR_8)
    break;

   FUNC_0("BRB still has 0x%08x\n", VAR_8);


   if (VAR_13 > VAR_8)
    VAR_12 = 1000;
   else
    VAR_12--;


   if (VAR_10)
    FUNC_10(VAR_6, 1);

   FUNC_14(10);
  }

  if (!VAR_12)
   FUNC_1("Failed to empty BRB, hope for the best\n");
 }


 FUNC_11(VAR_6);

 if (VAR_11.xmac_addr)
  FUNC_4(VAR_6, VAR_11.xmac_addr, VAR_11.xmac_val);
 if (VAR_11.umac_addr[0])
  FUNC_4(VAR_6, VAR_11.umac_addr[0], VAR_11.umac_val[0]);
 if (VAR_11.umac_addr[1])
  FUNC_4(VAR_6, VAR_11.umac_addr[1], VAR_11.umac_val[1]);
 if (VAR_11.emac_addr)
  FUNC_4(VAR_6, VAR_11.emac_addr, VAR_11.emac_val);
 if (VAR_11.bmac_addr) {
  FUNC_4(VAR_6, VAR_11.bmac_addr, VAR_11.bmac_val[0]);
  FUNC_4(VAR_6, VAR_11.bmac_addr + 4, VAR_11.bmac_val[1]);
 }

 VAR_9 = FUNC_7(VAR_6, VAR_10);
 if (VAR_9) {
  FUNC_8(VAR_6);
  return VAR_9;
 }

 return FUNC_8(VAR_6);
}
