
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_battery_info {int resistor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pm860x_battery_info*,int*) ;
 int FUNC_1 (struct pm860x_battery_info*,int ,int*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct pm860x_battery_info*,int,int*) ;

__attribute__((used)) static int FUNC_4(struct pm860x_battery_info *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_0(VAR_4, &VAR_10);

 if (VAR_11 || VAR_10 < 0)
  goto out;

 VAR_11 = FUNC_1(VAR_4, VAR_1, &VAR_10);
 if (VAR_11)
  goto out;

 if (VAR_10 < VAR_3 || VAR_10 > VAR_2)
  goto out;


 if (FUNC_3(VAR_4, 500, &VAR_7))
  goto out;





 FUNC_2(500);

 for (VAR_12 = 0, VAR_5 = 0, VAR_8 = 0; VAR_12 < 10; VAR_12++) {
  VAR_11 = FUNC_1(VAR_4, VAR_1, &VAR_10);
  if (VAR_11)
   goto out_meas;
  VAR_5 += VAR_10;
  VAR_11 = FUNC_0(VAR_4, &VAR_10);
  if (VAR_11)
   goto out_meas;

  if (VAR_10 < 0)
   VAR_8 = VAR_8 - VAR_10;
  else
   VAR_8 = VAR_8 + VAR_10;
 }

 if (FUNC_3(VAR_4, 100, &VAR_11))
  goto out_meas;




 FUNC_2(500);

 for (VAR_12 = 0, VAR_6 = 0, VAR_9 = 0; VAR_12 < 10; VAR_12++) {
  VAR_11 = FUNC_1(VAR_4, VAR_1, &VAR_10);
  if (VAR_11)
   goto out_meas;
  VAR_6 += VAR_10;
  VAR_11 = FUNC_0(VAR_4, &VAR_10);
  if (VAR_11)
   goto out_meas;

  if (VAR_10 < 0)
   VAR_9 = VAR_9 - VAR_10;
  else
   VAR_9 = VAR_9 + VAR_10;
 }


 if (FUNC_3(VAR_4, VAR_7, &VAR_11))
  goto out_meas;

 if ((VAR_5 > VAR_6) && (VAR_8 > VAR_9) &&
   (VAR_9 > 0)) {

  VAR_10 = 1000 * (VAR_5 - VAR_6)
      / (VAR_8 - VAR_9);
  if ((VAR_10 - VAR_4->resistor > 0) &&
    (VAR_10 - VAR_4->resistor < VAR_4->resistor))
   VAR_4->resistor = VAR_10;
  if ((VAR_4->resistor - VAR_10 > 0) &&
    (VAR_4->resistor - VAR_10 < VAR_10))
   VAR_4->resistor = VAR_10;
 }
 return 0;

out_meas:
 FUNC_3(VAR_4, VAR_7, &VAR_11);
out:
 return -VAR_0;
}
