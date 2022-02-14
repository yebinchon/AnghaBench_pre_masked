
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocelot_port {int chip_port; scalar_t__ vid; scalar_t__ vlan_aware; int pvid; } ;
struct ocelot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int VAR_15 ;
 int FUNC_6 (struct ocelot*,int,int,int ,int ) ;
 int FUNC_7 (struct ocelot*,int,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ocelot *VAR_16,
       struct ocelot_port *VAR_17)
{
 u32 VAR_18;



 VAR_18 = FUNC_1(VAR_17->pvid);
 if (VAR_17->vlan_aware)
  VAR_18 |= VAR_6 |
         FUNC_0(1);

 FUNC_6(VAR_16, VAR_18,
         VAR_8 |
         VAR_6 |
         VAR_7,
         VAR_5, VAR_17->chip_port);


 VAR_18 = VAR_1;
 if (VAR_17->vlan_aware && !VAR_17->vid)



  VAR_18 |= VAR_4 |
         VAR_3 |
         VAR_2;
 FUNC_7(VAR_16, VAR_18, VAR_0, VAR_17->chip_port);


 VAR_18 = FUNC_5(0);

 if (VAR_17->vlan_aware) {
  if (VAR_17->vid)

   VAR_18 |= FUNC_4(1);
  else

   VAR_18 |= FUNC_4(3);
 }
 FUNC_6(VAR_16, VAR_18,
         VAR_15 |
         VAR_14,
         VAR_13, VAR_17->chip_port);


 VAR_18 = FUNC_2(VAR_9) |
       FUNC_3(VAR_17->vid);
 FUNC_6(VAR_16, VAR_18,
         VAR_11 |
         VAR_12,
         VAR_10, VAR_17->chip_port);
}
