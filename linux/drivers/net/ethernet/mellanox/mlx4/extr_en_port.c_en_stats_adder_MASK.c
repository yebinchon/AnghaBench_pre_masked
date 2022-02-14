
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be64 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(__be64 *VAR_0, __be64 *VAR_1, int VAR_2)
{
 __be64 *VAR_3 = VAR_0;
 unsigned long VAR_4 = 0;
 int VAR_5;
 int VAR_6 = VAR_1 - VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 += FUNC_0(*VAR_3);
  VAR_3 += VAR_6;
 }

 return VAR_4;
}
