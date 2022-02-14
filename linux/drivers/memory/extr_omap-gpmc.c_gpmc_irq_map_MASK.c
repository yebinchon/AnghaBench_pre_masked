
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct gpmc_device* host_data; } ;
struct gpmc_device {int irq_chip; } ;
typedef scalar_t__ irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,int ,int ) ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,struct gpmc_device*) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_5, unsigned int VAR_6,
   irq_hw_number_t VAR_7)
{
 struct gpmc_device *VAR_8 = VAR_5->host_data;

 FUNC_2(VAR_6, VAR_8);
 if (VAR_7 < VAR_0) {
  FUNC_0(VAR_6, VAR_2, VAR_1);
  FUNC_1(VAR_6, &VAR_8->irq_chip,
      VAR_4);
 } else {
  FUNC_1(VAR_6, &VAR_8->irq_chip,
      VAR_3);
 }

 return 0;
}
