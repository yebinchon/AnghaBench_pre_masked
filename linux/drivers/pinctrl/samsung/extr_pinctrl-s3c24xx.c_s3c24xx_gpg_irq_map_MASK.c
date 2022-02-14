
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {int eint_mask; int eint_offset; } ;
struct s3c24xx_eint_domain_data {struct samsung_pin_bank* bank; } ;
struct irq_domain {struct s3c24xx_eint_domain_data* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct samsung_pin_bank*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_3, unsigned int VAR_4,
     irq_hw_number_t VAR_5)
{
 struct s3c24xx_eint_domain_data *VAR_6 = VAR_3->host_data;
 struct samsung_pin_bank *VAR_7 = VAR_6->bank;

 if (!(VAR_7->eint_mask & (1 << (VAR_7->eint_offset + VAR_5))))
  return -VAR_0;

 FUNC_0(VAR_4, &VAR_2, VAR_1);
 FUNC_1(VAR_4, VAR_7);
 return 0;
}
