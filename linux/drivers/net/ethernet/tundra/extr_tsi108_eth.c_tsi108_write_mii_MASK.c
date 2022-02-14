
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tsi108_prv_data {int phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct tsi108_prv_data *VAR_6,
    int VAR_7, u16 VAR_8)
{
 unsigned VAR_9 = 100;
 FUNC_1(VAR_0,
    (VAR_6->phy << VAR_1) |
    (VAR_7 << VAR_2));
 FUNC_1(VAR_3, VAR_8);
 while (VAR_9--) {
  if(!(FUNC_0(VAR_4) &
   VAR_5))
   break;
  FUNC_2(10);
 }
}
