
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct mlx5dr_domain {scalar_t__ type; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int ,int const*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct mlx5dr_domain*,char*,scalar_t__) ;
 int FUNC_2 (struct mlx5dr_domain*,char*,scalar_t__) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_3(struct mlx5dr_domain *VAR_15,
     const __be64 *VAR_16)
{
 u16 VAR_17;
 u8 VAR_18;

 VAR_17 = FUNC_0(VAR_14, VAR_16, VAR_13);
 VAR_18 = FUNC_0(VAR_14, VAR_16, VAR_12);


 if (VAR_18 == VAR_11) {
  if (VAR_17 == VAR_4) {
   if (VAR_15->type != VAR_3) {
    FUNC_1(VAR_15, "Unsupported field %d for RX/FDB set action\n",
        VAR_17);
    return -VAR_0;
   }
  }

  if (VAR_17 == VAR_5) {
   if (VAR_15->type != VAR_2) {
    FUNC_1(VAR_15, "Unsupported field %d for TX/FDB set action\n",
        VAR_17);
    return -VAR_0;
   }
  }
 } else if (VAR_18 == VAR_10) {
  if (VAR_17 != VAR_7 &&
      VAR_17 != VAR_6 &&
      VAR_17 != VAR_9 &&
      VAR_17 != VAR_8) {
   FUNC_1(VAR_15, "Unsupported field %d for add action\n", VAR_17);
   return -VAR_0;
  }
 } else {
  FUNC_2(VAR_15, "Unsupported action %d modify action\n", VAR_18);
  return -VAR_1;
 }

 return 0;
}
