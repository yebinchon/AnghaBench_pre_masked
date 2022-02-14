
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct faraday_pci {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct faraday_pci*,int ,int ,int ,int,unsigned int*) ;
 int FUNC_2 (struct faraday_pci*,int ,int ,int ,int,unsigned int) ;
 struct faraday_pci* FUNC_3 (struct irq_data*) ;
 scalar_t__ FUNC_4 (struct irq_data*) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_3)
{
 struct faraday_pci *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5;

 FUNC_1(VAR_4, 0, 0, VAR_0, 4, &VAR_5);
 VAR_5 &= ~(0xF << VAR_2);
 VAR_5 |= FUNC_0(FUNC_4(VAR_3) + VAR_1);
 FUNC_2(VAR_4, 0, 0, VAR_0, 4, VAR_5);
}
