
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct mutex*) ;

__attribute__((used)) static int FUNC_3(struct mutex *VAR_1, unsigned VAR_2)
{
 return VAR_2
  ? FUNC_0(FUNC_2(VAR_1)) ? 0 : -VAR_0
  : FUNC_1(VAR_1);
}
