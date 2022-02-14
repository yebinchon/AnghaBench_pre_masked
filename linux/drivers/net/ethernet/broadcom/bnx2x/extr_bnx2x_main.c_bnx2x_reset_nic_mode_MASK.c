
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {scalar_t__ mf_mode; int link_params; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct bnx2x*,scalar_t__) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (struct bnx2x*,int) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct bnx2x *VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = FUNC_1(VAR_10);
 int VAR_14 = 0, VAR_15[VAR_7];


 if (VAR_10->mf_mode == VAR_9) {
  FUNC_6(&VAR_10->link_params, 0);
 } else {
  VAR_14 = FUNC_3(VAR_10, VAR_13 ? VAR_3 :
       VAR_1);
  FUNC_4(VAR_10, VAR_13 ? VAR_3 :
     VAR_1, 0);
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   VAR_15[VAR_12] = FUNC_3(VAR_10, VAR_13 ?
          (VAR_4 +
           4 * VAR_12) :
          (VAR_2 +
           4 * VAR_12));
   FUNC_4(VAR_10, VAR_13 ? (VAR_4 +
           4 * VAR_12) :
      (VAR_2 + 4 * VAR_12), 0);
  }
 }


 FUNC_4(VAR_10, VAR_13 ? VAR_5 :
        VAR_6, 0);






 VAR_11 = FUNC_5(VAR_10, 1);
 if (VAR_11) {
  FUNC_0("Can't suspend tx-switching!\n");
  return VAR_11;
 }


 FUNC_4(VAR_10, VAR_8, 0);


 if (VAR_10->mf_mode == VAR_9) {
  FUNC_6(&VAR_10->link_params, 1);
 } else {
  FUNC_4(VAR_10, VAR_13 ? VAR_3 :
     VAR_1, VAR_14);
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   FUNC_4(VAR_10, VAR_13 ? (VAR_4 +
           4 * VAR_12) :
      (VAR_2 + 4 * VAR_12),
      VAR_15[VAR_12]);
  }
 }


 FUNC_4(VAR_10, VAR_13 ? VAR_5 :
        VAR_6, 1);


 VAR_11 = FUNC_5(VAR_10, 0);
 if (VAR_11) {
  FUNC_0("Can't resume tx-switching!\n");
  return VAR_11;
 }

 FUNC_2(VAR_0, "NIC MODE disabled\n");
 return 0;
}
