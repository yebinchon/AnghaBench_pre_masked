
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1343_priv {scalar_t__ alarm_sec; int irqen; scalar_t__ alarm_min; scalar_t__ alarm_hour; scalar_t__ alarm_mday; int map; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 struct ds1343_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6)
{
 struct ds1343_priv *VAR_7 = FUNC_1(VAR_6);
 unsigned int VAR_8, VAR_9;
 unsigned char VAR_10[4];
 int VAR_11 = 0;

 VAR_11 = FUNC_3(VAR_7->map, VAR_2, &VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_7->map, VAR_4, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_8 &= ~(VAR_0);
 VAR_9 &= ~(VAR_3);

 VAR_11 = FUNC_4(VAR_7->map, VAR_2, VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_7->map, VAR_4, VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10[0] = VAR_7->alarm_sec < 0 || (VAR_7->irqen & VAR_5) ?
  0x80 : FUNC_0(VAR_7->alarm_sec) & 0x7F;
 VAR_10[1] = VAR_7->alarm_min < 0 || (VAR_7->irqen & VAR_5) ?
  0x80 : FUNC_0(VAR_7->alarm_min) & 0x7F;
 VAR_10[2] = VAR_7->alarm_hour < 0 || (VAR_7->irqen & VAR_5) ?
  0x80 : FUNC_0(VAR_7->alarm_hour) & 0x3F;
 VAR_10[3] = VAR_7->alarm_mday < 0 || (VAR_7->irqen & VAR_5) ?
  0x80 : FUNC_0(VAR_7->alarm_mday) & 0x7F;

 VAR_11 = FUNC_2(VAR_7->map, VAR_1, VAR_10, 4);
 if (VAR_11)
  return VAR_11;

 if (VAR_7->irqen) {
  VAR_8 |= VAR_0;
  VAR_11 = FUNC_4(VAR_7->map, VAR_2, VAR_8);
 }

 return VAR_11;
}
