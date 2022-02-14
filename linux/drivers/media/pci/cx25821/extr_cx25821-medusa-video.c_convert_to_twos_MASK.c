
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long) ;

__attribute__((used)) static unsigned long FUNC_1(long VAR_0, unsigned long VAR_1)
{
 unsigned char VAR_2;

 if (VAR_0 >= 0)
  return VAR_0;
 else {
  VAR_2 = ~(FUNC_0(VAR_0) & 0xFF);
  VAR_2 += 1;
  return VAR_2;
 }
}
