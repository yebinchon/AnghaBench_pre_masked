
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cb710_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cb710_slot*,int ) ;
 int FUNC_1 (struct cb710_slot*,int ) ;
 int FUNC_2 (struct cb710_slot*) ;
 int FUNC_3 (struct cb710_slot*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void FUNC_5(struct cb710_slot *VAR_3)
{

 u32 VAR_4, VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (FUNC_1(VAR_3, VAR_2)
     & VAR_1) {
  FUNC_3(VAR_3, VAR_2,
   VAR_1);
  VAR_6 = 1;
 }

 FUNC_4(FUNC_2(VAR_3),
  "FIFO-read-hack: expected STATUS0 bit was %s\n",
  VAR_6 ? "set." : "NOT SET!");
 FUNC_4(FUNC_2(VAR_3),
  "FIFO-read-hack: dwords ignored: %08X %08X - %s\n",
  VAR_4, VAR_5, (VAR_4|VAR_5) ? "BAD (NOT ZERO)!" : "ok");
}
