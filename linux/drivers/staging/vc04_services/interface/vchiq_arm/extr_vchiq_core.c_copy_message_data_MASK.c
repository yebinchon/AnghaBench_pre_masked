
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 size_t VAR_0 ;

__attribute__((used)) static ssize_t
FUNC_0(
 ssize_t (*VAR_1)(void *VAR_2, void *VAR_3,
     size_t VAR_4, size_t VAR_5),
 void *VAR_6,
 void *VAR_7,
 size_t VAR_8)
{
 size_t VAR_9 = 0;

 while (VAR_9 < VAR_8) {
  ssize_t VAR_10;
  size_t VAR_11 = VAR_8 - VAR_9;

  VAR_10 =
   VAR_1(VAR_6, VAR_7 + VAR_9,
          VAR_9, VAR_11);

  if (VAR_10 < 0)
   return VAR_10;

  if (!VAR_10)
   return -VAR_0;

  if (VAR_10 > VAR_11)
   return -VAR_0;

  VAR_9 += VAR_10;
 }

 return VAR_8;
}
