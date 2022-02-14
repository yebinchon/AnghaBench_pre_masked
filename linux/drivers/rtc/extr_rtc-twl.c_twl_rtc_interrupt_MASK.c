
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl_rtc {scalar_t__ class; int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int,unsigned long) ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (struct twl_rtc*,int*,int ) ;
 int FUNC_3 (struct twl_rtc*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_10, void *VAR_11)
{
 struct twl_rtc *VAR_12 = VAR_11;
 unsigned long VAR_13;
 int VAR_14 = VAR_2;
 int VAR_15;
 u8 VAR_16;

 VAR_15 = FUNC_2(VAR_12, &VAR_16, VAR_3);
 if (VAR_15)
  goto out;






 if (VAR_16 & VAR_0)
  VAR_13 = VAR_5 | VAR_4;
 else
  VAR_13 = VAR_5 | VAR_6;

 VAR_15 = FUNC_3(VAR_12, VAR_0,
          VAR_3);
 if (VAR_15)
  goto out;

 if (VAR_12->class == VAR_9) {
  VAR_15 = FUNC_1(VAR_8,
   &VAR_16, VAR_7);
  if (VAR_15)
   goto out;
 }


 FUNC_0(VAR_12->rtc, 1, VAR_13);

 VAR_14 = VAR_1;
out:
 return VAR_14;
}
