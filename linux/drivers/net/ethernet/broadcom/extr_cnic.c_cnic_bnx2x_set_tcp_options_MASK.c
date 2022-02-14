
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cnic_dev {int netdev; } ;
struct bnx2x {int pfid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cnic_dev*,scalar_t__,int ) ;
 int FUNC_1 (struct cnic_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct bnx2x* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct cnic_dev *VAR_6, int VAR_7,
           int VAR_8)
{
 struct bnx2x *VAR_9 = FUNC_4(VAR_6->netdev);
 u8 VAR_10 = VAR_5;
 u16 VAR_11 = 0;

 if (VAR_7) {
  VAR_10 |= VAR_4;
  VAR_11 |= VAR_3;
 }
 if (VAR_8)
  VAR_11 |= VAR_2;

 FUNC_1(VAR_6, VAR_1 +
   FUNC_3(VAR_9->pfid), VAR_10);

 FUNC_0(VAR_6, VAR_0 +
    FUNC_2(VAR_9->pfid), VAR_11);
}
