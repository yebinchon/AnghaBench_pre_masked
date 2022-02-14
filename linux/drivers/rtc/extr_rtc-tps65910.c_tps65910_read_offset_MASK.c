
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int s64 ;


 scalar_t__ VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int,long long) ;
 int FUNC_1 (struct device*,int*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, long *VAR_3)
{
 int VAR_4;
 s64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_5 = VAR_4 * (s64)VAR_0;
 if (VAR_5 < 0)
  VAR_5 -= VAR_1 / 2LL;
 else
  VAR_5 += VAR_1 / 2LL;
 VAR_5 = FUNC_0(VAR_5, VAR_1);


 *VAR_3 = (long)-VAR_5;

 return 0;
}
