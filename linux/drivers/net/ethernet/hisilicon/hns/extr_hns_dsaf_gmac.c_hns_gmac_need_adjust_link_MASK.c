
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_driver {struct hns_mac_cb* mac_cb; } ;
struct hns_mac_cb {int speed; int half_duplex; } ;
typedef enum mac_speed { ____Placeholder_mac_speed } mac_speed ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, enum mac_speed VAR_1,
          int VAR_2)
{
 struct mac_driver *VAR_3 = (struct mac_driver *)VAR_0;
 struct hns_mac_cb *VAR_4 = VAR_3->mac_cb;

 return (VAR_4->speed != VAR_1) ||
  (VAR_4->half_duplex == VAR_2);
}
