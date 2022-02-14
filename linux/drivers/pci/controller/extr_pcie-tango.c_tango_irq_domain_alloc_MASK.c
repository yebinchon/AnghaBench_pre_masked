
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tango_pcie {int used_msi_lock; int used_msi; } ;
struct irq_domain {struct tango_pcie* host_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct irq_domain*,unsigned int,int,int *,struct tango_pcie*,int ,int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6, void *VAR_7)
{
 struct tango_pcie *VAR_8 = VAR_4->host_data;
 unsigned long VAR_9;
 int VAR_10;

 FUNC_3(&VAR_8->used_msi_lock, VAR_9);
 VAR_10 = FUNC_1(VAR_8->used_msi, VAR_1);
 if (VAR_10 >= VAR_1) {
  FUNC_4(&VAR_8->used_msi_lock, VAR_9);
  return -VAR_0;
 }
 FUNC_0(VAR_10, VAR_8->used_msi);
 FUNC_4(&VAR_8->used_msi_lock, VAR_9);
 FUNC_2(VAR_4, VAR_5, VAR_10, &VAR_3,
   VAR_8, VAR_2, ((void*)0), ((void*)0));

 return 0;
}
