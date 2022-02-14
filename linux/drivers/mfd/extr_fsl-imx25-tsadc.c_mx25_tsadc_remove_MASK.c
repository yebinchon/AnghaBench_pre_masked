
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mx25_tsadc {int domain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *,int *) ;
 struct mx25_tsadc* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct mx25_tsadc *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = FUNC_3(VAR_0, 0);

 if (VAR_2) {
  FUNC_1(VAR_2, ((void*)0), ((void*)0));
  FUNC_0(VAR_1->domain);
 }

 return 0;
}
