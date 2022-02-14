
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char vbat_low; char tbat_high; char tbat_restart; char tbat_low; } ;
struct da9030_charger {int master; TYPE_1__ thresholds; } ;


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
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct da9030_charger *VAR_11)
{
 char VAR_12[5];
 int VAR_13;

 VAR_12[0] = VAR_12[1] = VAR_11->thresholds.vbat_low;
 VAR_12[2] = VAR_11->thresholds.tbat_high;
 VAR_12[3] = VAR_11->thresholds.tbat_restart;
 VAR_12[4] = VAR_11->thresholds.tbat_low;

 VAR_13 = FUNC_1(VAR_11->master, VAR_10, 5, VAR_12);
 if (VAR_13)
  return VAR_13;





 VAR_13 = FUNC_0(VAR_11->master, VAR_4,
      VAR_3 |
      VAR_5);
 if (VAR_13)
  return VAR_13;


 return FUNC_0(VAR_11->master, VAR_0,
       VAR_6 | VAR_8 |
       VAR_9 | VAR_2 |
       VAR_7 |
       VAR_1);
}
