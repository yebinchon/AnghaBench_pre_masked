
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cc770_priv {int clkout; int cpu_interface; int bus_config; } ;
struct TYPE_2__ {int config; int * id; int * data; int ctrl1; int ctrl0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct cc770_priv*,int ) ;
 int FUNC_1 (struct cc770_priv*,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int VAR_19 ;
 TYPE_1__* VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void FUNC_2(struct cc770_priv *VAR_22)
{
 int VAR_23, VAR_24, VAR_25;


 FUNC_1(VAR_22, VAR_15, (VAR_0 | VAR_1));


 FUNC_1(VAR_22, VAR_14, VAR_22->clkout);


 FUNC_1(VAR_22, VAR_16, VAR_22->cpu_interface);


 FUNC_1(VAR_22, VAR_13, VAR_22->bus_config);


 FUNC_0(VAR_22, VAR_19);


 FUNC_1(VAR_22, VAR_21, 0);


 for (VAR_23 = VAR_5; VAR_23 <= VAR_6; VAR_23++) {
  FUNC_1(VAR_22, VAR_20[VAR_23].ctrl0,
    VAR_3 | VAR_10 |
    VAR_11 | VAR_7);
  FUNC_1(VAR_22, VAR_20[VAR_23].ctrl0,
    VAR_2 | VAR_10 |
    VAR_11 | VAR_7);
  FUNC_1(VAR_22, VAR_20[VAR_23].ctrl1,
    VAR_8 | VAR_4 |
    VAR_12 | VAR_9);
  for (VAR_25 = 0; VAR_25 < 8; VAR_25++)
   FUNC_1(VAR_22, VAR_20[VAR_23].data[VAR_25], 0);
  for (VAR_24 = 0; VAR_24 < 4; VAR_24++)
   FUNC_1(VAR_22, VAR_20[VAR_23].id[VAR_24], 0);
  FUNC_1(VAR_22, VAR_20[VAR_23].config, 0);
 }


 FUNC_1(VAR_22, VAR_18[0], 0);
 FUNC_1(VAR_22, VAR_18[1], 0);
 FUNC_1(VAR_22, VAR_17[0], 0);
 FUNC_1(VAR_22, VAR_17[1], 0);
 FUNC_1(VAR_22, VAR_17[2], 0);
 FUNC_1(VAR_22, VAR_17[3], 0);

}
