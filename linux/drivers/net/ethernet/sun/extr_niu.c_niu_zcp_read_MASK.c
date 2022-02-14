
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct niu {int dev; int port; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned long long) ;
 int FUNC_2 (struct niu*,int ,int ,int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_10, int VAR_11, u64 *VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_0, VAR_1,
      1000, 100);
 if (VAR_13) {
  FUNC_1(VAR_10->dev, "ZCP read busy won't clear, ZCP_RAM_ACC[%llx]\n",
      (unsigned long long)FUNC_3(VAR_0));
  return VAR_13;
 }

 FUNC_4(VAR_0,
      (VAR_3 |
       (0 << VAR_4) |
       (FUNC_0(VAR_10->port) << VAR_2)));

 VAR_13 = FUNC_2(VAR_10, VAR_0, VAR_1,
      1000, 100);
 if (VAR_13) {
  FUNC_1(VAR_10->dev, "ZCP read busy2 won't clear, ZCP_RAM_ACC[%llx]\n",
      (unsigned long long)FUNC_3(VAR_0));
  return VAR_13;
 }

 VAR_12[0] = FUNC_3(VAR_5);
 VAR_12[1] = FUNC_3(VAR_6);
 VAR_12[2] = FUNC_3(VAR_7);
 VAR_12[3] = FUNC_3(VAR_8);
 VAR_12[4] = FUNC_3(VAR_9);

 return 0;
}
