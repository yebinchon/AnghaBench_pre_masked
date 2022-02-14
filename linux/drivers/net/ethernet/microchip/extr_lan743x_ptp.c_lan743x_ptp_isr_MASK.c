
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_ptp {int ptp_clock; } ;
struct lan743x_adapter {int netdev; struct lan743x_ptp ptp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int) ;
 int FUNC_2 (struct lan743x_adapter*,int ,int ,char*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(void *VAR_10)
{
 struct lan743x_adapter *VAR_11 = (struct lan743x_adapter *)VAR_10;
 struct lan743x_ptp *VAR_12 = ((void*)0);
 int VAR_13 = 1;
 u32 VAR_14 = 0;

 VAR_12 = &VAR_11->ptp;

 FUNC_1(VAR_11, VAR_1, VAR_0);

 VAR_14 = FUNC_0(VAR_11, VAR_8);
 VAR_14 &= FUNC_0(VAR_11, VAR_7);

 if (VAR_14 & VAR_6) {
  FUNC_3(VAR_12->ptp_clock, 0);
  VAR_13 = 0;
 }
 if (VAR_14 & VAR_5) {
  FUNC_2(VAR_11, VAR_9, VAR_11->netdev,
     "PTP TX Software Timestamp Error\n");

  FUNC_1(VAR_11, VAR_8,
      VAR_5);
 }
 if (VAR_14 & VAR_4) {

  FUNC_1(VAR_11, VAR_8,
      VAR_4);
 }
 if (VAR_14 & VAR_3) {

  FUNC_1(VAR_11, VAR_8,
      VAR_3);
 }

 if (VAR_13) {

  FUNC_1(VAR_11, VAR_2, VAR_0);
 }
}
