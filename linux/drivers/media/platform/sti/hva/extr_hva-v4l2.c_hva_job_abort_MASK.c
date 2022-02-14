
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_ctx {int aborting; int name; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct hva_ctx *VAR_1 = VAR_0;
 struct device *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, "%s aborting job\n", VAR_1->name);

 VAR_1->aborting = 1;
}
