
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intr_info {int member_0; char* member_1; int member_2; int member_3; } ;
struct adapter {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*,int ,struct intr_info const*) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*,int ,int const) ;

__attribute__((used)) static void FUNC_6(struct adapter *VAR_5)
{
 static const struct intr_info VAR_6[] = {
  { 146, "CIM control register prefetch drop", -1, 1 },
  { 154, "CIM OBQ parity error", -1, 1 },
  { 155, "CIM IBQ parity error", -1, 1 },
  { 147, "CIM mailbox uP parity error", -1, 1 },
  { 148, "CIM mailbox host parity error", -1, 1 },
  { 132, "CIM TIEQ outgoing parity error", -1, 1 },
  { 131, "CIM TIEQ incoming parity error", -1, 1 },
  { 128, "CIM TIMER0 interrupt", -1, 1 },
  { 0 }
 };
 static const struct intr_info VAR_7[] = {
  { 143, "CIM reserved space access", -1, 1 },
  { 151, "CIM illegal transaction", -1, 1 },
  { 149, "CIM illegal write", -1, 1 },
  { 152, "CIM illegal read", -1, 1 },
  { 153, "CIM illegal read BE", -1, 1 },
  { 150, "CIM illegal write BE", -1, 1 },
  { 142, "CIM single read from boot space", -1, 1 },
  { 137, "CIM single write to boot space", -1, 1 },
  { 160, "CIM block write to boot space", -1, 1 },
  { 139, "CIM single read from flash space", -1, 1 },
  { 134, "CIM single write to flash space", -1, 1 },
  { 157, "CIM block write to flash space", -1, 1 },
  { 140, "CIM single EEPROM read", -1, 1 },
  { 135, "CIM single EEPROM write", -1, 1 },
  { 162, "CIM block EEPROM read", -1, 1 },
  { 158, "CIM block EEPROM write", -1, 1 },
  { 141, "CIM single read from CTL space", -1, 1 },
  { 136, "CIM single write to CTL space", -1, 1 },
  { 163, "CIM block read from CTL space", -1, 1 },
  { 159, "CIM block write to CTL space", -1, 1 },
  { 138, "CIM single read from PL space", -1, 1 },
  { 133, "CIM single write to PL space", -1, 1 },
  { 161, "CIM block read from PL space", -1, 1 },
  { 156, "CIM block write to PL space", -1, 1 },
  { 145, "CIM request FIFO overwrite", -1, 1 },
  { 144, "CIM response FIFO overwrite", -1, 1 },
  { 130, "CIM PIF timeout", -1, 1 },
  { 129, "CIM PIF MA timeout", -1, 1 },
  { 0 }
 };

 u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_5, VAR_2);
 if (VAR_9 & VAR_3)
  FUNC_4(VAR_5);
 VAR_8 = FUNC_3(VAR_5, VAR_0);
 if (VAR_8 & 128)
  if (!(VAR_9 & VAR_3) ||
      (FUNC_0(VAR_9) != VAR_4))
   FUNC_5(VAR_5, VAR_0,
         128);

 VAR_10 = FUNC_2(VAR_5, VAR_0,
        VAR_6) +
       FUNC_2(VAR_5, VAR_1,
        VAR_7);
 if (VAR_10)
  FUNC_1(VAR_5);
}
