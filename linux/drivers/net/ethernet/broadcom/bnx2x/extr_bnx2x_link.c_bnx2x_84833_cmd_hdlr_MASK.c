
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x_phy *VAR_15,
    struct link_params *VAR_16, u16 VAR_17,
    u16 VAR_18[], int VAR_19, int VAR_20)
{
 int VAR_21;
 u16 VAR_22;
 struct bnx2x *VAR_23 = VAR_16->bp;
 int VAR_24 = 0;

 if (VAR_20 == VAR_7) {

  FUNC_2(VAR_23, VAR_15, VAR_4,
     VAR_3,
     VAR_13);
 }

 for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
  FUNC_1(VAR_23, VAR_15, VAR_4,
    VAR_3, &VAR_22);
  if (VAR_22 == VAR_12)
   break;
  FUNC_3(1000, 2000);
 }
 if (VAR_21 >= VAR_14) {
  FUNC_0(VAR_5, "FW cmd: FW not ready.\n");



  if (VAR_22 == VAR_11 ||
      VAR_22 == VAR_10) {
   FUNC_2(VAR_23, VAR_15, VAR_4,
      VAR_3,
      VAR_9);
  }
  return -VAR_0;
 }
 if (VAR_20 == VAR_6 ||
     VAR_20 == VAR_7) {

  for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
   FUNC_2(VAR_23, VAR_15, VAR_4,
      VAR_2 + VAR_21,
      VAR_18[VAR_21]);
  }
 }

 FUNC_2(VAR_23, VAR_15, VAR_4,
   VAR_1, VAR_17);
 for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
  FUNC_1(VAR_23, VAR_15, VAR_4,
    VAR_3, &VAR_22);
  if ((VAR_22 == VAR_11) ||
      (VAR_22 == VAR_10))
   break;
  FUNC_3(1000, 2000);
 }
 if ((VAR_21 >= VAR_14) ||
     (VAR_22 == VAR_10)) {
  FUNC_0(VAR_5, "FW cmd failed.\n");
  VAR_24 = -VAR_0;
 }
 if (VAR_20 == VAR_8 && VAR_24 == 0) {

  for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
   FUNC_1(VAR_23, VAR_15, VAR_4,
     VAR_2 + VAR_21,
     &VAR_18[VAR_21]);
  }
 }
 if (VAR_22 == VAR_10 ||
     VAR_22 == VAR_11) {
  FUNC_2(VAR_23, VAR_15, VAR_4,
     VAR_3,
     VAR_9);
 }
 return VAR_24;
}
