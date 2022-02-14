
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cnic_dev {int * mac_addr; int netdev; } ;
struct bnx2x {int pfid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cnic_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 struct bnx2x* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct cnic_dev *VAR_2)
{
 struct bnx2x *VAR_3 = FUNC_10(VAR_2->netdev);
 u32 VAR_4 = VAR_3->pfid;
 u8 *VAR_5 = VAR_2->mac_addr;

 FUNC_0(VAR_2, VAR_1 +
   FUNC_4(VAR_4), VAR_5[0]);
 FUNC_0(VAR_2, VAR_1 +
   FUNC_5(VAR_4), VAR_5[1]);
 FUNC_0(VAR_2, VAR_1 +
   FUNC_6(VAR_4), VAR_5[2]);
 FUNC_0(VAR_2, VAR_1 +
   FUNC_7(VAR_4), VAR_5[3]);
 FUNC_0(VAR_2, VAR_1 +
   FUNC_8(VAR_4), VAR_5[4]);
 FUNC_0(VAR_2, VAR_1 +
   FUNC_9(VAR_4), VAR_5[5]);

 FUNC_0(VAR_2, VAR_0 +
   FUNC_1(VAR_4), VAR_5[5]);
 FUNC_0(VAR_2, VAR_0 +
   FUNC_1(VAR_4) + 1,
   VAR_5[4]);
 FUNC_0(VAR_2, VAR_0 +
   FUNC_2(VAR_4), VAR_5[3]);
 FUNC_0(VAR_2, VAR_0 +
   FUNC_2(VAR_4) + 1,
   VAR_5[2]);
 FUNC_0(VAR_2, VAR_0 +
   FUNC_3(VAR_4), VAR_5[1]);
 FUNC_0(VAR_2, VAR_0 +
   FUNC_3(VAR_4) + 1,
   VAR_5[0]);
}
