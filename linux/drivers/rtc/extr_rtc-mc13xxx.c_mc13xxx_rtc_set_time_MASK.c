
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct mc13xxx_rtc {int valid; int mc13xxx; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 struct mc13xxx_rtc* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (int ,unsigned int,unsigned int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct rtc_time*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_5, struct rtc_time *VAR_6)
{
 struct mc13xxx_rtc *VAR_7 = FUNC_0(VAR_5);
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_1(FUNC_8(VAR_6), VAR_4, &VAR_8);

 FUNC_4(VAR_7->mc13xxx);





 VAR_11 = FUNC_5(VAR_7->mc13xxx, VAR_3, &VAR_10);
 if (FUNC_9(VAR_11))
  goto out;

 if (VAR_10 < VAR_4) {
  VAR_11 = FUNC_6(VAR_7->mc13xxx,
    VAR_3, 0x1ffff);
  if (FUNC_9(VAR_11))
   goto out;
 }





 VAR_11 = FUNC_6(VAR_7->mc13xxx, VAR_2, 0);
 if (FUNC_9(VAR_11))
  goto out;

 VAR_11 = FUNC_6(VAR_7->mc13xxx, VAR_1, VAR_9);
 if (FUNC_9(VAR_11))
  goto out;

 VAR_11 = FUNC_6(VAR_7->mc13xxx, VAR_2, VAR_8);
 if (FUNC_9(VAR_11))
  goto out;


 if (VAR_10 < VAR_4) {
  VAR_11 = FUNC_6(VAR_7->mc13xxx,
    VAR_3, VAR_10);
  if (FUNC_9(VAR_11))
   goto out;
 }

 if (!VAR_7->valid) {
  VAR_11 = FUNC_2(VAR_7->mc13xxx, VAR_0);
  if (FUNC_9(VAR_11))
   goto out;

  VAR_11 = FUNC_3(VAR_7->mc13xxx, VAR_0);
 }

out:
 VAR_7->valid = !VAR_11;

 FUNC_7(VAR_7->mc13xxx);

 return VAR_11;
}
