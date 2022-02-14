
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nwl_msi {int lock; int bitmap; } ;
struct nwl_pcie {struct nwl_msi msi; } ;
struct irq_domain {struct nwl_pcie* host_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (struct irq_domain*,unsigned int,int,int *,struct nwl_pcie*,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, void *VAR_7)
{
 struct nwl_pcie *VAR_8 = VAR_4->host_data;
 struct nwl_msi *VAR_9 = &VAR_8->msi;
 int VAR_10;
 int VAR_11;

 FUNC_3(&VAR_9->lock);
 VAR_10 = FUNC_0(VAR_9->bitmap, VAR_1,
          FUNC_1(VAR_6));
 if (VAR_10 < 0) {
  FUNC_4(&VAR_9->lock);
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  FUNC_2(VAR_4, VAR_5 + VAR_11, VAR_10 + VAR_11, &VAR_3,
    VAR_4->host_data, VAR_2,
    ((void*)0), ((void*)0));
 }
 FUNC_4(&VAR_9->lock);
 return 0;
}
