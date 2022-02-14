
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max310x_port {int regmap; } ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (unsigned long,long*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_8, struct max310x_port *VAR_9,
          unsigned long VAR_10, bool VAR_11)
{
 unsigned int VAR_12, VAR_13, VAR_14 = 0;
 long VAR_15 = -1;
 unsigned long VAR_16, VAR_17, VAR_18 = VAR_10;


 FUNC_2(VAR_10, &VAR_15);


 for (VAR_12 = 1; (VAR_12 <= 63) && VAR_15; VAR_12++) {
  VAR_16 = FUNC_0(VAR_10, VAR_12);


  VAR_17 = VAR_16 * 6;
  if ((VAR_16 >= 500000) && (VAR_16 <= 800000))
   if (!FUNC_2(VAR_17, &VAR_15)) {
    VAR_14 = (0 << 6) | VAR_12;
    VAR_18 = VAR_17;
   }

  VAR_17 = VAR_16 * 48;
  if ((VAR_16 >= 850000) && (VAR_16 <= 1200000))
   if (!FUNC_2(VAR_17, &VAR_15)) {
    VAR_14 = (1 << 6) | VAR_12;
    VAR_18 = VAR_17;
   }

  VAR_17 = VAR_16 * 96;
  if ((VAR_16 >= 425000) && (VAR_16 <= 1000000))
   if (!FUNC_2(VAR_17, &VAR_15)) {
    VAR_14 = (2 << 6) | VAR_12;
    VAR_18 = VAR_17;
   }

  VAR_17 = VAR_16 * 144;
  if ((VAR_16 >= 390000) && (VAR_16 <= 667000))
   if (!FUNC_2(VAR_17, &VAR_15)) {
    VAR_14 = (3 << 6) | VAR_12;
    VAR_18 = VAR_17;
   }
 }


 VAR_13 = VAR_1 | (VAR_11 ? VAR_0 : 0);


 if (VAR_14) {
  VAR_13 |= VAR_3;
  FUNC_5(VAR_9->regmap, VAR_5, VAR_14);
 } else
  VAR_13 |= VAR_2;

 FUNC_5(VAR_9->regmap, VAR_4, VAR_13);


 if (VAR_11) {
  unsigned int VAR_19;
  FUNC_3(10);
  FUNC_4(VAR_9->regmap, VAR_7, &VAR_19);
  if (!(VAR_19 & VAR_6)) {
   FUNC_1(VAR_8, "clock is not stable yet\n");
  }
 }

 return (int)VAR_18;
}
