
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef scalar_t__ ssize_t ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,char*,size_t,unsigned long,int) ;
 scalar_t__ FUNC_1 (unsigned long,char*,size_t,unsigned long,int) ;
 int FUNC_2 (char*,int ,size_t) ;
 scalar_t__ FUNC_3 (unsigned long) ;

ssize_t FUNC_4(char *VAR_1, size_t VAR_2,
    u64 *VAR_3, int VAR_4,
    bool VAR_5)
{
 unsigned long VAR_6, VAR_7;
 size_t VAR_8;
 ssize_t VAR_9 = 0, VAR_10;

 if (!VAR_2)
  return 0;

 VAR_7 = (unsigned long)(*VAR_3 % VAR_0);
 VAR_6 = (unsigned long)(*VAR_3 / VAR_0);

 do {
  if (VAR_2 > (VAR_0 - VAR_7))
   VAR_8 = VAR_0 - VAR_7;
  else
   VAR_8 = VAR_2;


  if (FUNC_3(VAR_6) == 0)
   FUNC_2(VAR_1, 0, VAR_8);
  else {
   if (VAR_5)
    VAR_10 = FUNC_1(VAR_6, VAR_1,
         VAR_8,
         VAR_7,
         VAR_4);
   else
    VAR_10 = FUNC_0(VAR_6, VAR_1, VAR_8,
             VAR_7, VAR_4);

   if (VAR_10 < 0)
    return VAR_10;
  }
  *VAR_3 += VAR_8;
  VAR_2 -= VAR_8;
  VAR_1 += VAR_8;
  VAR_9 += VAR_8;
  ++VAR_6;
  VAR_7 = 0;
 } while (VAR_2);

 return VAR_9;
}
