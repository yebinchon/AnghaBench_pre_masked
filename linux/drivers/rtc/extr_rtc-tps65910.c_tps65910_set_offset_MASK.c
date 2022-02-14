
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef long s64 ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long long VAR_3 ;
 scalar_t__ VAR_4 ;
 long FUNC_0 (long,long long) ;
 int FUNC_1 (struct device*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_5, long VAR_6)
{
 int VAR_7;
 s64 VAR_8;
 int VAR_9;


 if (VAR_6 < VAR_2 || VAR_6 > VAR_1)
  return -VAR_0;


 VAR_8 = VAR_6 * (s64)VAR_4;
 if (VAR_8 < 0)
  VAR_8 -= VAR_3 / 2LL;
 else
  VAR_8 += VAR_3 / 2LL;
 VAR_8 = FUNC_0(VAR_8, VAR_3);


 VAR_7 = (int)-VAR_8;

 VAR_9 = FUNC_1(VAR_5, VAR_7);

 return VAR_9;
}
