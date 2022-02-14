
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powertec_info {scalar_t__ base; } ;
struct expansion_card {struct powertec_info* irq_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct expansion_card *VAR_2, int VAR_3)
{
 struct powertec_info *VAR_4 = VAR_2->irq_data;
 FUNC_0(VAR_1, VAR_4->base + VAR_0);
}
