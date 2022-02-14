
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct mwifiex_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_1 (struct mwifiex_adapter*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_3,
          u8 *VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7 = 0;
 int VAR_8;

 do {
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_8) {
   VAR_7++;
   FUNC_0(VAR_3, VAR_1,
        "host_to_card, write iomem\t"
        "(%d) failed: %d\n", VAR_7, VAR_8);
   if (FUNC_2(VAR_3, VAR_0, 0x04))
    FUNC_0(VAR_3, VAR_1,
         "write CFG reg failed\n");

   VAR_8 = -1;
   if (VAR_7 > VAR_2)
    return VAR_8;
  }
 } while (VAR_8 == -1);

 return VAR_8;
}
