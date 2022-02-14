
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_driver {int dummy; } ;
typedef enum hns_port_mode { ____Placeholder_hns_port_mode } hns_port_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mac_driver*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_3, enum hns_port_mode *VAR_4)
{
 struct mac_driver *VAR_5 = (struct mac_driver *)VAR_3;

 *VAR_4 = (enum hns_port_mode)FUNC_0(
  VAR_5, VAR_1, VAR_0, VAR_2);
}
