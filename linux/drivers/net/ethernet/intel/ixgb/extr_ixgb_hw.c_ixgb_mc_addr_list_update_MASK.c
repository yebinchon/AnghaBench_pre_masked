
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgb_hw {int num_mc_addrs; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgb_hw*,int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ixgb_hw*,int *) ;
 int FUNC_3 (struct ixgb_hw*,int) ;
 int FUNC_4 (struct ixgb_hw*,int *,int) ;
 int FUNC_5 (char*,...) ;

void
FUNC_6(struct ixgb_hw *VAR_5,
     u8 *VAR_6,
     u32 VAR_7,
     u32 VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11 = 1;
 u8 *VAR_12;

 FUNC_0();


 VAR_5->num_mc_addrs = VAR_7;


 FUNC_5("Clearing RAR[1-15]\n");
 for (VAR_10 = VAR_11; VAR_10 < VAR_2; VAR_10++) {
  FUNC_1(VAR_5, VAR_4, (VAR_10 << 1), 0);
  FUNC_1(VAR_5, VAR_4, ((VAR_10 << 1) + 1), 0);
 }


 FUNC_5("Clearing MTA\n");
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
  FUNC_1(VAR_5, VAR_3, VAR_10, 0);


 VAR_12 = VAR_6;
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  FUNC_5("Adding the multicast addresses:\n");
  FUNC_5("MC Addr #%d = %pM\n", VAR_10, VAR_12);




  if (VAR_11 < VAR_2) {
   FUNC_4(VAR_5, VAR_12, VAR_11);
   FUNC_5("Added a multicast address to RAR[%d]\n", VAR_10);
   VAR_11++;
  } else {
   VAR_9 = FUNC_2(VAR_5, VAR_12);

   FUNC_5("Hash value = 0x%03X\n", VAR_9);

   FUNC_3(VAR_5, VAR_9);
  }

  VAR_12 += VAR_0 + VAR_8;
 }

 FUNC_5("MC Update Complete\n");
}
