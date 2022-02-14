
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spinlock_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,int) ;
 int FUNC_2 (int *,int,unsigned char*) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_1,
         unsigned long VAR_2,
         unsigned int VAR_3,
         spinlock_t *VAR_4)
{
 int VAR_5, VAR_6 = VAR_3;

 if (FUNC_0(VAR_2 < VAR_3)) {
  VAR_5 = VAR_2;
  do {
   VAR_5 = FUNC_1(VAR_1, VAR_6, VAR_5);
   if (VAR_5 >= VAR_6)
    break;
   if (!FUNC_2(VAR_4, VAR_5, VAR_1))
    return VAR_5;
  } while (++VAR_5 < VAR_6);

  VAR_6 = VAR_2;
 }


 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_5 = FUNC_1(VAR_1, VAR_6, VAR_5);
  if (VAR_5 >= VAR_6)
   break;
  if (!FUNC_2(VAR_4, VAR_5, VAR_1))
   return VAR_5;
 }

 return -VAR_0;
}
