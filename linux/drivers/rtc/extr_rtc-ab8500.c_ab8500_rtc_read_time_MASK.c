
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned char VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct device*,int ,int ,unsigned char*) ;
 int FUNC_2 (struct device*,int ,int ,unsigned char) ;
 unsigned long VAR_6 ;
 int FUNC_3 (unsigned long,struct rtc_time*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_7, struct rtc_time *VAR_8)
{
 unsigned long VAR_9 = VAR_6 + VAR_3;
 int VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 unsigned char VAR_14[FUNC_0(VAR_5)];
 u8 VAR_15;


 VAR_10 = FUNC_2(VAR_7,
  VAR_0, VAR_1, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;


 while (FUNC_4(VAR_6, VAR_9)) {
  VAR_10 = FUNC_1(VAR_7,
   VAR_0, VAR_1, &VAR_15);
  if (VAR_10 < 0)
   return VAR_10;

  if (!(VAR_15 & VAR_4))
   break;

  FUNC_5(1000, 5000);
 }


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  VAR_10 = FUNC_1(VAR_7,
   VAR_0, VAR_5[VAR_11], &VAR_15);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_14[VAR_11] = VAR_15;
 }

 VAR_12 = (VAR_14[0] << 16) | (VAR_14[1] << 8) | VAR_14[2];

 VAR_13 = (VAR_14[3] << 8) | VAR_14[4];
 VAR_13 = VAR_13 / VAR_2;
 VAR_13 = VAR_13 + (VAR_12 * 60);

 FUNC_3(VAR_13, VAR_8);
 return 0;
}
