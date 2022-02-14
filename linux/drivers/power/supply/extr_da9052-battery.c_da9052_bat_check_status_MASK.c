
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct da9052_battery {int status; void* charger_type; int da9052; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (int ,int ,int,int*) ;
 int FUNC_1 (struct da9052_battery*,int*) ;
 int FUNC_2 (struct da9052_battery*,int*) ;

__attribute__((used)) static int FUNC_3(struct da9052_battery *VAR_11, int *VAR_12)
{
 u8 VAR_13[2] = {0, 0};
 u8 VAR_14;
 u8 VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 bool VAR_19;
 bool VAR_20;
 bool VAR_21;
 bool VAR_22;
 bool VAR_23;
 bool VAR_24;

 VAR_16 = FUNC_0(VAR_11->da9052, VAR_7, 2, VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_14 = VAR_13[0];
 VAR_15 = VAR_13[1];

 VAR_19 = VAR_14 & VAR_3;
 VAR_20 = VAR_14 & VAR_2;
 VAR_21 = VAR_14 & VAR_5;
 VAR_22 = VAR_14 & VAR_4;
 VAR_23 = VAR_19 && VAR_20;
 VAR_24 = VAR_21 && VAR_22;


 if (VAR_23 || VAR_24) {
  VAR_11->charger_type = VAR_0;




  if ((VAR_15 & VAR_6) != 0) {
   VAR_16 = FUNC_1(VAR_11, &VAR_17);
   if (VAR_16 < 0)
    return VAR_16;
   VAR_16 = FUNC_2(VAR_11, &VAR_18);
   if (VAR_16 < 0)
    return VAR_16;

   if (VAR_17 >= VAR_18)
    VAR_11->status = VAR_8;
   else
    VAR_11->status = VAR_10;
  } else {



   VAR_11->status = VAR_8;
  }
 } else if (VAR_20 || VAR_22) {
   VAR_11->charger_type = VAR_0;
   VAR_11->status = VAR_10;
 } else {
  VAR_11->charger_type = VAR_1;
  VAR_11->status = VAR_9;
 }

 if (VAR_12 != ((void*)0))
  *VAR_12 = VAR_11->status;
 return 0;
}
