
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long* FUNC_0 (unsigned long*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, unsigned long **VAR_3,
        unsigned *VAR_4, unsigned long VAR_5)
{
 unsigned VAR_6 = *VAR_4;
 unsigned VAR_7 = VAR_6 + 1;
 unsigned long *VAR_8;

 VAR_8 = FUNC_0(*VAR_3, sizeof(*VAR_8) * VAR_7,
          VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8[VAR_6] = VAR_5;

 *VAR_3 = VAR_8;
 *VAR_4 = VAR_7;

 return 0;
}
