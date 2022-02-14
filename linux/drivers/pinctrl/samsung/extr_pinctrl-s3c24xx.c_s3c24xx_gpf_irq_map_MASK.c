
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {int eint_mask; int eint_offset; } ;
struct s3c24xx_eint_domain_data {scalar_t__ eint0_3_parent_only; struct samsung_pin_bank* bank; } ;
struct irq_domain {struct s3c24xx_eint_domain_data* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct samsung_pin_bank*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_5, unsigned int VAR_6,
     irq_hw_number_t VAR_7)
{
 struct s3c24xx_eint_domain_data *VAR_8 = VAR_5->host_data;
 struct samsung_pin_bank *VAR_9 = VAR_8->bank;

 if (!(VAR_9->eint_mask & (1 << (VAR_9->eint_offset + VAR_7))))
  return -VAR_0;

 if (VAR_7 <= 3) {
  if (VAR_8->eint0_3_parent_only)
   FUNC_0(VAR_6, &VAR_2,
       VAR_1);
  else
   FUNC_0(VAR_6, &VAR_3,
       VAR_1);
 } else {
  FUNC_0(VAR_6, &VAR_4,
      VAR_1);
 }
 FUNC_1(VAR_6, VAR_9);
 return 0;
}
