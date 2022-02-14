
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {struct msix_entry* irq_entries; } ;
struct msix_entry {int entry; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct nfp_net*,int ) ;
 int FUNC_1 (struct nfp_net*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct nfp_net *VAR_4 = VAR_3;
 struct msix_entry *VAR_5;

 VAR_5 = &VAR_4->irq_entries[VAR_1];

 FUNC_1(VAR_4);

 FUNC_0(VAR_4, VAR_5->entry);

 return VAR_0;
}
