
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct em28xx*) ;
 unsigned int FUNC_1 (struct em28xx*) ;

__attribute__((used)) static void FUNC_2(struct em28xx *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3,
   unsigned int *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6 = FUNC_1(VAR_1);
 unsigned int VAR_7 = FUNC_0(VAR_1);

 *VAR_4 = (((unsigned long)VAR_6) << 12) / VAR_2 - 4096L;
 if (*VAR_4 > VAR_0)
  *VAR_4 = VAR_0;

 *VAR_5 = (((unsigned long)VAR_7) << 12) / VAR_3 - 4096L;
 if (*VAR_5 > VAR_0)
  *VAR_5 = VAR_0;
}
