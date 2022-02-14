
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ofdpa_port {scalar_t__ internal_vlan_id; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static __be16 FUNC_1(const struct ofdpa_port *VAR_0,
         u16 VAR_1, bool *VAR_2)
{
 __be16 VAR_3;

 if (VAR_2)
  *VAR_2 = 0;
 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3) {
  VAR_3 = VAR_0->internal_vlan_id;
  if (VAR_2)
   *VAR_2 = 1;
 }

 return VAR_3;
}
