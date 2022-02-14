
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {unsigned long long totalram; unsigned long long totalhigh; } ;


 unsigned long VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (struct sysinfo*) ;

__attribute__((used)) static int FUNC_1(void)
{
 struct sysinfo VAR_2;
 unsigned long long VAR_3;
 unsigned long VAR_4;

 FUNC_0(&VAR_2);
 VAR_3 = (VAR_2.totalram - VAR_2.totalhigh) << VAR_1;





 VAR_3 >>= 12;

 VAR_4 = VAR_0;
 while (VAR_4 > VAR_3 && VAR_4 >= 8*1024*2)
  VAR_4 /= 2;
 return VAR_4;
}
