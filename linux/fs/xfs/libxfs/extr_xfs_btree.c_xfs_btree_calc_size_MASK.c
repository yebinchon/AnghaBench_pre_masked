
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 (unsigned long long,int) ;

unsigned long long
FUNC_1(
 uint *VAR_0,
 unsigned long long VAR_1)
{
 int VAR_2;
 int VAR_3;
 unsigned long long VAR_4;

 VAR_3 = VAR_0[0];
 for (VAR_2 = 0, VAR_4 = 0; VAR_1 > 1; VAR_2++) {
  VAR_1 += VAR_3 - 1;
  FUNC_0(VAR_1, VAR_3);
  VAR_3 = VAR_0[1];
  VAR_4 += VAR_1;
 }
 return VAR_4;
}
