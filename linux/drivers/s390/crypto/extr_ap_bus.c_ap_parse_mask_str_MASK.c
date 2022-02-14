
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,unsigned long*,int) ;
 int FUNC_2 (unsigned long*) ;
 unsigned long* FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (unsigned long*,unsigned long*,unsigned long) ;
 int FUNC_5 (unsigned long*,int ,unsigned long) ;
 int FUNC_6 (char const*,unsigned long*,int) ;
 scalar_t__ FUNC_7 (struct mutex*) ;
 int FUNC_8 (struct mutex*) ;

int FUNC_9(const char *VAR_4,
        unsigned long *VAR_5, int VAR_6,
        struct mutex *VAR_7)
{
 unsigned long *VAR_8, VAR_9;
 int VAR_10;


 if (VAR_6 & 0x07)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_6)*sizeof(unsigned long);
 VAR_8 = FUNC_3(VAR_9, VAR_3);
 if (!VAR_8)
  return -VAR_1;
 if (FUNC_7(VAR_7)) {
  FUNC_2(VAR_8);
  return -VAR_2;
 }

 if (*VAR_4 == '+' || *VAR_4 == '-') {
  FUNC_4(VAR_8, VAR_5, VAR_9);
  VAR_10 = FUNC_6(VAR_4, VAR_8, VAR_6);
 } else {
  FUNC_5(VAR_8, 0, VAR_9);
  VAR_10 = FUNC_1(VAR_4, VAR_8, VAR_6);
 }
 if (VAR_10 == 0)
  FUNC_4(VAR_5, VAR_8, VAR_9);
 FUNC_8(VAR_7);
 FUNC_2(VAR_8);
 return VAR_10;
}
