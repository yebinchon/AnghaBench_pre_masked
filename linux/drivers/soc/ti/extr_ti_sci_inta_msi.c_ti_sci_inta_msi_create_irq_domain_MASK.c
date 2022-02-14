
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_domain_info {int dummy; } ;
struct irq_domain {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_domain*,int ) ;
 struct irq_domain* FUNC_1 (struct fwnode_handle*,struct msi_domain_info*,struct irq_domain*) ;
 int FUNC_2 (struct msi_domain_info*) ;

struct irq_domain *FUNC_3(struct fwnode_handle *VAR_1,
           struct msi_domain_info *VAR_2,
           struct irq_domain *VAR_3)
{
 struct irq_domain *VAR_4;

 FUNC_2(VAR_2);

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  FUNC_0(VAR_4, VAR_0);

 return VAR_4;
}
