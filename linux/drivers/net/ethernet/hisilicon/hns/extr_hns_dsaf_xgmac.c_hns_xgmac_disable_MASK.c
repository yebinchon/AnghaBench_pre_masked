
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_driver {int dummy; } ;
typedef enum mac_commom_mode { ____Placeholder_mac_commom_mode } mac_commom_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mac_driver*,int ) ;
 int FUNC_1 (struct mac_driver*,int ) ;
 int FUNC_2 (struct mac_driver*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_4, enum mac_commom_mode VAR_5)
{
 struct mac_driver *VAR_6 = (struct mac_driver *)VAR_4;

 if (VAR_5 == VAR_3) {
  FUNC_2(VAR_6, 0);
 } else if (VAR_5 == VAR_1) {
  FUNC_1(VAR_6, 0);
 } else if (VAR_5 == VAR_2) {
  FUNC_2(VAR_6, 0);
  FUNC_1(VAR_6, 0);
 }
 FUNC_0(VAR_6, VAR_0);
}
