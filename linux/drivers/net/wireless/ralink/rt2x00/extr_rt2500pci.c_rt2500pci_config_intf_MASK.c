
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00intf_conf {unsigned int sync; int bssid; int mac; } ;
struct rt2x00_intf {int dummy; } ;
struct rt2x00_dev {struct data_queue* bcn; } ;
struct data_queue {unsigned int cw_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 unsigned int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (int ,int) ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_12,
      struct rt2x00_intf *VAR_13,
      struct rt2x00intf_conf *VAR_14,
      const unsigned int VAR_15)
{
 struct data_queue *VAR_16 = VAR_12->bcn;
 unsigned int VAR_17;
 u32 VAR_18;

 if (VAR_15 & VAR_5) {



  VAR_17 = VAR_11 + FUNC_0(VAR_10, 20);
  VAR_18 = FUNC_3(VAR_12, VAR_0);
  FUNC_1(&VAR_18, VAR_2, VAR_17);
  FUNC_1(&VAR_18, VAR_1, VAR_16->cw_min);
  FUNC_4(VAR_12, VAR_0, VAR_18);




  VAR_18 = FUNC_3(VAR_12, VAR_6);
  FUNC_1(&VAR_18, VAR_7, VAR_14->sync);
  FUNC_4(VAR_12, VAR_6, VAR_18);
 }

 if (VAR_15 & VAR_4)
  FUNC_2(VAR_12, VAR_8,
           VAR_14->mac, sizeof(VAR_14->mac));

 if (VAR_15 & VAR_3)
  FUNC_2(VAR_12, VAR_9,
           VAR_14->bssid, sizeof(VAR_14->bssid));
}
