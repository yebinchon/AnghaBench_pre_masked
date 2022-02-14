
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_msi {int bitmap_lock; int num_cpus; int bitmap; } ;
struct irq_domain {struct xgene_msi* host_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct irq_domain*,unsigned int,int,int *,struct xgene_msi*,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6, void *VAR_7)
{
 struct xgene_msi *VAR_8 = VAR_4->host_data;
 int VAR_9;

 FUNC_3(&VAR_8->bitmap_lock);

 VAR_9 = FUNC_0(VAR_8->bitmap, VAR_1, 0,
          VAR_8->num_cpus, 0);
 if (VAR_9 < VAR_1)
  FUNC_1(VAR_8->bitmap, VAR_9, VAR_8->num_cpus);
 else
  VAR_9 = -VAR_0;

 FUNC_4(&VAR_8->bitmap_lock);

 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(VAR_4, VAR_5, VAR_9,
       &VAR_3, VAR_4->host_data,
       VAR_2, ((void*)0), ((void*)0));

 return 0;
}
