
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x_phy *VAR_11,
    struct link_params *VAR_12,
    u16 VAR_13,
    u16 VAR_14[], int VAR_15)
{
 int VAR_16;
 u16 VAR_17;
 struct bnx2x *VAR_18 = VAR_12->bp;
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  FUNC_1(VAR_18, VAR_11, VAR_4,
    VAR_3, &VAR_17);
  if ((VAR_17 != VAR_8) &&
      (VAR_17 != VAR_9))
   break;
  FUNC_3(1000, 2000);
 }
 if (VAR_16 >= VAR_10) {
  FUNC_0(VAR_5, "FW cmd: FW not ready.\n");
  return -VAR_0;
 }





 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  FUNC_2(VAR_18, VAR_11, VAR_4,
     VAR_2 + VAR_16,
     VAR_14[VAR_16]);
 }




 FUNC_2(VAR_18, VAR_11, VAR_4,
    VAR_1, VAR_13);






 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  FUNC_1(VAR_18, VAR_11, VAR_4,
    VAR_3, &VAR_17);
  if ((VAR_17 == VAR_7) ||
      (VAR_17 == VAR_6))
   break;
  FUNC_3(1000, 2000);
 }
 if ((VAR_16 >= VAR_10) ||
     (VAR_17 == VAR_6)) {
  FUNC_0(VAR_5, "FW cmd failed.\n");
  return -VAR_0;
 }





 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  FUNC_1(VAR_18, VAR_11, VAR_4,
    VAR_2 + VAR_16,
    &VAR_14[VAR_16]);
 }

 return 0;
}
