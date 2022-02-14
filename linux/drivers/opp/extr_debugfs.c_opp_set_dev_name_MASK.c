
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device const* parent; } ;


 int VAR_0 ;
 char* FUNC_0 (struct device const*) ;
 int FUNC_1 (char*,int ,char*,char*,...) ;

__attribute__((used)) static void FUNC_2(const struct device *VAR_1, char *VAR_2)
{
 if (VAR_1->parent)
  FUNC_1(VAR_2, VAR_0, "%s-%s", FUNC_0(VAR_1->parent),
    FUNC_0(VAR_1));
 else
  FUNC_1(VAR_2, VAR_0, "%s", FUNC_0(VAR_1));
}
