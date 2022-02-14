
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dummy; } ;
struct hx8357_data {int reset; } ;


 int FUNC_0 (int ,int) ;
 struct hx8357_data* FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct lcd_device *VAR_0)
{
 struct hx8357_data *VAR_1 = FUNC_1(VAR_0);


 FUNC_0(VAR_1->reset, 1);
 FUNC_3(10000, 12000);
 FUNC_0(VAR_1->reset, 0);
 FUNC_3(10000, 12000);
 FUNC_0(VAR_1->reset, 1);


 FUNC_2(120);
}
