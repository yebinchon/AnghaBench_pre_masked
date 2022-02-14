
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ocelot {int num_phys_ports; scalar_t__* vlan_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (struct ocelot*,size_t,scalar_t__) ;
 int FUNC_4 (struct ocelot*) ;
 int FUNC_5 (struct ocelot*,scalar_t__,int ) ;
 int FUNC_6 (struct ocelot*,int,int ,size_t) ;

__attribute__((used)) static void FUNC_7(struct ocelot *VAR_8)
{
 u16 VAR_9, VAR_10;


 FUNC_5(VAR_8, VAR_3,
       VAR_2);
 FUNC_4(VAR_8);


 for (VAR_10 = 1; VAR_10 < VAR_7; VAR_10++) {
  VAR_8->vlan_mask[VAR_10] = 0;
  FUNC_3(VAR_8, VAR_10, VAR_8->vlan_mask[VAR_10]);
 }





 VAR_8->vlan_mask[0] = FUNC_2(VAR_8->num_phys_ports - 1, 0);
 FUNC_3(VAR_8, 0, VAR_8->vlan_mask[0]);


 FUNC_6(VAR_8, FUNC_1(0) |
     VAR_1 |
     FUNC_0(1),
    VAR_0, VAR_8->num_phys_ports);




 FUNC_5(VAR_8, FUNC_2(9, 0), VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_8->num_phys_ports; VAR_9++) {
  FUNC_6(VAR_8, 0, VAR_5, VAR_9);
  FUNC_6(VAR_8, 0, VAR_6, VAR_9);
 }
}
