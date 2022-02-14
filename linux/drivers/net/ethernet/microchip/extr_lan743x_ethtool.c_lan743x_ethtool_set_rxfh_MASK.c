
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lan743x_adapter*,int ,int) ;
 struct lan743x_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
        const u32 *VAR_4, const u8 *VAR_5,
        const u8 VAR_6)
{
 struct lan743x_adapter *VAR_7 = FUNC_3(VAR_3);

 if (VAR_6 != VAR_1 && VAR_6 != VAR_2)
  return -VAR_0;

 if (VAR_4) {
  u32 VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 0;

  for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
   VAR_10 = VAR_9 << 2;
   VAR_8 =
    (((VAR_4[VAR_10 + 0] & 0x000000FF) << 0) |
    ((VAR_4[VAR_10 + 1] & 0x000000FF) << 8) |
    ((VAR_4[VAR_10 + 2] & 0x000000FF) << 16) |
    ((VAR_4[VAR_10 + 3] & 0x000000FF) << 24));
   FUNC_2(VAR_7, FUNC_1(VAR_9),
       VAR_8);
  }
 }
 if (VAR_5) {
  int VAR_11 = 0;
  int VAR_12 = 0;
  u32 VAR_13 = 0;

  for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
   VAR_12 = VAR_11 << 2;
   VAR_13 =
    ((((u32)(VAR_5[VAR_12 + 0])) << 0) |
    (((u32)(VAR_5[VAR_12 + 1])) << 8) |
    (((u32)(VAR_5[VAR_12 + 2])) << 16) |
    (((u32)(VAR_5[VAR_12 + 3])) << 24));
   FUNC_2(VAR_7, FUNC_0(VAR_11),
       VAR_13);
  }
 }
 return 0;
}
