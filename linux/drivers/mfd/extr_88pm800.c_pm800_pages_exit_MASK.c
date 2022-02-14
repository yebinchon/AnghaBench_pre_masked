
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm80x_subchip {scalar_t__ gpadc_page; scalar_t__ power_page; } ;
struct pm80x_chip {struct pm80x_subchip* subchip; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct pm80x_chip *VAR_0)
{
 struct pm80x_subchip *VAR_1;

 VAR_1 = VAR_0->subchip;

 if (VAR_1 && VAR_1->power_page)
  FUNC_0(VAR_1->power_page);

 if (VAR_1 && VAR_1->gpadc_page)
  FUNC_0(VAR_1->gpadc_page);
}
