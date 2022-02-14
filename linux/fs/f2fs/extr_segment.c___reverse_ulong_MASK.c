
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(unsigned char *VAR_1)
{
 unsigned long VAR_2 = 0;
 int VAR_3 = 24, VAR_4 = 0;




 while (VAR_3 >= 0) {
  VAR_2 |= (unsigned long)VAR_1[VAR_4++] << VAR_3;
  VAR_3 -= VAR_0;
 }
 return VAR_2;
}
