
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {struct altera_msi* host_data; } ;
struct altera_msi {unsigned long num_of_vectors; int lock; int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 int VAR_3 ;
 int FUNC_2 (struct irq_domain*,unsigned int,unsigned long,int *,struct altera_msi*,int ,int *,int *) ;
 int FUNC_3 (struct altera_msi*,int ) ;
 int FUNC_4 (struct altera_msi*,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_8(struct irq_domain *VAR_4, unsigned int VAR_5,
       unsigned int VAR_6, void *VAR_7)
{
 struct altera_msi *VAR_8 = VAR_4->host_data;
 unsigned long VAR_9;
 u32 VAR_10;

 FUNC_0(VAR_6 != 1);
 FUNC_5(&VAR_8->lock);

 VAR_9 = FUNC_1(VAR_8->used, VAR_8->num_of_vectors);
 if (VAR_9 >= VAR_8->num_of_vectors) {
  FUNC_6(&VAR_8->lock);
  return -VAR_0;
 }

 FUNC_7(VAR_9, VAR_8->used);

 FUNC_6(&VAR_8->lock);

 FUNC_2(VAR_4, VAR_5, VAR_9, &VAR_2,
       VAR_4->host_data, VAR_3,
       ((void*)0), ((void*)0));

 VAR_10 = FUNC_3(VAR_8, VAR_1);
 VAR_10 |= 1 << VAR_9;
 FUNC_4(VAR_8, VAR_10, VAR_1);

 return 0;
}
