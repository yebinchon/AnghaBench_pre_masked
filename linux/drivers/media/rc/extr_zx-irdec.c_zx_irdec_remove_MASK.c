
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_irdec {scalar_t__ base; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct zx_irdec* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct zx_irdec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct zx_irdec *VAR_4 = FUNC_0(VAR_3);


 FUNC_2(VAR_4, VAR_1, VAR_0, 0);


 FUNC_1(0, VAR_4->base + VAR_2);

 return 0;
}
