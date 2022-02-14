
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_4,
           unsigned long VAR_5, void *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;

 if ((VAR_5 * VAR_3) < VAR_1)
  return FUNC_1(VAR_4, VAR_5,
       VAR_0);


 VAR_9 = VAR_4;
 VAR_10 = VAR_4 + VAR_5;
 VAR_8 = VAR_9;

 while (VAR_8 < VAR_10) {
  if (FUNC_0(VAR_8)) {

   VAR_11 = VAR_8 - VAR_9;
   VAR_7 = FUNC_1(VAR_9, VAR_11,
       VAR_0);
   if (VAR_7)
    return VAR_7;


   VAR_8 += (VAR_1 / VAR_3);
   VAR_9 = VAR_8;
  } else
   VAR_8 += (VAR_2 / VAR_3);
 }


 VAR_11 = VAR_8 - VAR_9;
 return FUNC_1(VAR_9, VAR_11, VAR_0);
}
