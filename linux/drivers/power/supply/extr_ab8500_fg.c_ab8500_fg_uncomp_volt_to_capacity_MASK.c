
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_fg {int vbat; } ;


 int FUNC_0 (struct ab8500_fg*) ;
 int FUNC_1 (struct ab8500_fg*,int ) ;

__attribute__((used)) static int FUNC_2(struct ab8500_fg *VAR_0)
{
 VAR_0->vbat = FUNC_0(VAR_0);
 return FUNC_1(VAR_0, VAR_0->vbat);
}
