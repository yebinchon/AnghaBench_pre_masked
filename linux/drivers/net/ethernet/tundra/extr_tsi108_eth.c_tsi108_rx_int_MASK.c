
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsi108_prv_data {int napi; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct tsi108_prv_data* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6)
{
 struct tsi108_prv_data *VAR_7 = FUNC_4(VAR_6);
 if (FUNC_3(&VAR_7->napi)) {




  FUNC_1(VAR_0,
         FUNC_0(VAR_0) |
         VAR_3
         | VAR_4 |
         VAR_2 | VAR_1 |
         VAR_5);
  FUNC_2(&VAR_7->napi);
 } else {
  if (!FUNC_5(VAR_6)) {
   FUNC_1(VAR_0,
          FUNC_0
          (VAR_0) |
          VAR_3 |
          VAR_4 |
          VAR_2 |
          VAR_1 |
          VAR_5);
  }
 }
}
