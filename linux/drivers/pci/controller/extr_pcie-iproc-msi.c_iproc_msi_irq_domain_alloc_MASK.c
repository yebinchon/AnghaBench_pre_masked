
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct iproc_msi* host_data; } ;
struct iproc_msi {int nr_msi_vecs; int bitmap_lock; int nr_cpus; int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct irq_domain*,unsigned int,int,int *,struct iproc_msi*,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_3,
          unsigned int VAR_4, unsigned int VAR_5,
          void *VAR_6)
{
 struct iproc_msi *VAR_7 = VAR_3->host_data;
 int VAR_8, VAR_9;

 FUNC_3(&VAR_7->bitmap_lock);


 VAR_8 = FUNC_0(VAR_7->bitmap, VAR_7->nr_msi_vecs, 0,
        VAR_7->nr_cpus, 0);
 if (VAR_8 < VAR_7->nr_msi_vecs) {
  FUNC_1(VAR_7->bitmap, VAR_8, VAR_7->nr_cpus);
 } else {
  FUNC_4(&VAR_7->bitmap_lock);
  return -VAR_0;
 }

 FUNC_4(&VAR_7->bitmap_lock);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_2(VAR_3, VAR_4 + VAR_9, VAR_8 + VAR_9,
        &VAR_2,
        VAR_3->host_data, VAR_1,
        ((void*)0), ((void*)0));
 }

 return VAR_8;
}
