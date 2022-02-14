
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb {int dummy; } ;
struct dsps_glue {int dev; int musb; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dsps_glue*,int ) ;
 struct musb* FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct dsps_glue *VAR_4 = VAR_3;
 struct musb *VAR_5 = FUNC_2(VAR_4->musb);

 if (!VAR_5)
  return VAR_1;

 FUNC_0(VAR_4->dev, "VBUS interrupt\n");
 FUNC_1(VAR_4, 0);

 return VAR_0;
}
