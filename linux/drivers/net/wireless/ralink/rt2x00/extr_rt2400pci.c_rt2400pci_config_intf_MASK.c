
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00intf_conf {unsigned int sync; int bssid; int mac; } ;
struct rt2x00_intf {int dummy; } ;
struct rt2x00_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (int ,int) ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rt2x00_dev *VAR_11,
      struct rt2x00_intf *VAR_12,
      struct rt2x00intf_conf *VAR_13,
      const unsigned int VAR_14)
{
 unsigned int VAR_15;
 u32 VAR_16;

 if (VAR_14 & VAR_4) {



  VAR_15 = VAR_10 + FUNC_0(VAR_9, 20);
  VAR_16 = FUNC_3(VAR_11, VAR_0);
  FUNC_1(&VAR_16, VAR_1, VAR_15);
  FUNC_4(VAR_11, VAR_0, VAR_16);




  VAR_16 = FUNC_3(VAR_11, VAR_5);
  FUNC_1(&VAR_16, VAR_6, VAR_13->sync);
  FUNC_4(VAR_11, VAR_5, VAR_16);
 }

 if (VAR_14 & VAR_3)
  FUNC_2(VAR_11, VAR_7,
            VAR_13->mac, sizeof(VAR_13->mac));

 if (VAR_14 & VAR_2)
  FUNC_2(VAR_11, VAR_8,
            VAR_13->bssid,
            sizeof(VAR_13->bssid));
}
