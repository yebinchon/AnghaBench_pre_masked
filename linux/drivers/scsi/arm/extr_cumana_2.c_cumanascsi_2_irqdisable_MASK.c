
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card {struct cumanascsi2_info* irq_data; } ;
struct cumanascsi2_info {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct expansion_card *VAR_2, int VAR_3)
{
 struct cumanascsi2_info *VAR_4 = VAR_2->irq_data;
 FUNC_0(VAR_0, VAR_4->base + VAR_1);
}
