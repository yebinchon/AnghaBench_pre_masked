
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, unsigned int VAR_1, void *VAR_2,
         size_t VAR_3)
{
 struct device *VAR_4 = VAR_0;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  FUNC_1(VAR_4, ((u8 *)VAR_2)[VAR_5], FUNC_0(VAR_1 + VAR_5));

 return 0;
}
