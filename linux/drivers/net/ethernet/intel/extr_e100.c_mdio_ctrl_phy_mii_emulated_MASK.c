
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct nic {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct nic*,int ,int ,int ,char*,char*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static u16 FUNC_1(struct nic *VAR_10,
          u32 VAR_11,
          u32 VAR_12,
          u32 VAR_13,
          u16 VAR_14)
{




 if (VAR_12 == VAR_9) {
  switch (VAR_13) {
  case 129:

   return VAR_2 |
    VAR_3;
  case 128:
   return VAR_6 |
    VAR_5 |
    VAR_4;
  case 130:

   return VAR_1 |
    VAR_0;
  default:
   FUNC_0(VAR_10, VAR_8, VAR_7, VAR_10->netdev,
         "%s:addr=%d, reg=%d, data=0x%04X: unimplemented emulation!\n",
         VAR_12 == VAR_9 ? "READ" : "WRITE",
         VAR_11, VAR_13, VAR_14);
   return 0xFFFF;
  }
 } else {
  switch (VAR_13) {
  default:
   FUNC_0(VAR_10, VAR_8, VAR_7, VAR_10->netdev,
         "%s:addr=%d, reg=%d, data=0x%04X: unimplemented emulation!\n",
         VAR_12 == VAR_9 ? "READ" : "WRITE",
         VAR_11, VAR_13, VAR_14);
   return 0xFFFF;
  }
 }
}
