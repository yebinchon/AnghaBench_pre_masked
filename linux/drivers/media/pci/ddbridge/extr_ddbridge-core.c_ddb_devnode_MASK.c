
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct device {int dummy; } ;
struct ddb {int nr; } ;


 int VAR_0 ;
 struct ddb* FUNC_0 (struct device*) ;
 char* FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_1, umode_t *VAR_2)
{
 struct ddb *VAR_3 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0, "ddbridge/card%d", VAR_3->nr);
}
