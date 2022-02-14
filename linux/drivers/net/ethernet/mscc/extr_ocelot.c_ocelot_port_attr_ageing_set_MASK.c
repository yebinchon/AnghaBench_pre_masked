
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocelot_port {struct ocelot* ocelot; } ;
struct ocelot {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct ocelot*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ocelot_port *VAR_1,
     unsigned long VAR_2)
{
 struct ocelot *VAR_3 = VAR_1->ocelot;
 unsigned long VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5 = FUNC_2(VAR_4) / 1000;

 FUNC_3(VAR_3, FUNC_0(VAR_5 / 2),
       VAR_0);
}
