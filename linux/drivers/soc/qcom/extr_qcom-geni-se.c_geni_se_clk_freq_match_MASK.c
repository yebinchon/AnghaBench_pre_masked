
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geni_se {int dummy; } ;


 unsigned int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct geni_se*,unsigned long**) ;

int FUNC_2(struct geni_se *VAR_2, unsigned long VAR_3,
      unsigned int *VAR_4, unsigned long *VAR_5,
      bool VAR_6)
{
 unsigned long *VAR_7;
 int VAR_8;
 int VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned int VAR_12;

 VAR_8 = FUNC_1(VAR_2, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_8 == 0)
  return -VAR_0;

 VAR_10 = VAR_1;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_12 = FUNC_0(VAR_7[VAR_9], VAR_3);
  VAR_11 = VAR_3 - VAR_7[VAR_9] / VAR_12;
  if (VAR_11 < VAR_10) {

   *VAR_4 = VAR_9;
   *VAR_5 = VAR_7[VAR_9];


   if (VAR_11 == 0)
    return 0;


   VAR_10 = VAR_11;
  }
 }

 if (VAR_6)
  return -VAR_0;

 return 0;
}
