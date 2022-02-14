
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*,int ) ;
 int FUNC_2 (struct mutex*,struct mutex*) ;

__attribute__((used)) static void FUNC_3(struct mutex *VAR_1, struct mutex *VAR_2)
{
 if (VAR_2 < VAR_1)
  FUNC_2(VAR_1, VAR_2);

 FUNC_0(VAR_1);
 FUNC_1(VAR_2, VAR_0);
}
