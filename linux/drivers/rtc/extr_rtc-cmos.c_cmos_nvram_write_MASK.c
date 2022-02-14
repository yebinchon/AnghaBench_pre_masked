
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmos_rtc {unsigned int day_alrm; unsigned int mon_alrm; unsigned int century; } ;


 int FUNC_0 (int ,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_3, unsigned int VAR_4, void *VAR_5,
       size_t VAR_6)
{
 struct cmos_rtc *VAR_7 = VAR_3;
 unsigned char *VAR_8 = VAR_5;
 int VAR_9;






 VAR_4 += VAR_0;
 FUNC_2(&VAR_2);
 for (VAR_9 = 0; VAR_6; VAR_6--, VAR_4++, VAR_9++) {

  if (VAR_4 == VAR_7->day_alrm
    || VAR_4 == VAR_7->mon_alrm
    || VAR_4 == VAR_7->century)
   VAR_8++;
  else if (VAR_4 < 128)
   FUNC_0(*VAR_8++, VAR_4);
  else if (VAR_1)
   FUNC_1(*VAR_8++, VAR_4);
  else
   break;
 }
 FUNC_3(&VAR_2);

 return VAR_9;
}
