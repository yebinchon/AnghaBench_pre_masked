
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_net {struct msix_entry* irq_entries; } ;
struct msix_entry {int entry; int vector; } ;
typedef int irq_handler_t ;


 int FUNC_0 (struct nfp_net*,int ) ;
 int FUNC_1 (struct nfp_net*) ;
 int FUNC_2 (struct nfp_net*,char*,int ,int) ;
 int FUNC_3 (struct nfp_net*,int ,int ) ;
 int FUNC_4 (int ,int ,int ,char*,struct nfp_net*) ;
 int FUNC_5 (char*,size_t,char const*,int ) ;

__attribute__((used)) static int
FUNC_6(struct nfp_net *VAR_0, u32 VAR_1,
   const char *VAR_2, char *VAR_3, size_t VAR_4,
   unsigned int VAR_5, irq_handler_t VAR_6)
{
 struct msix_entry *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_0->irq_entries[VAR_5];

 FUNC_5(VAR_3, VAR_4, VAR_2, FUNC_1(VAR_0));
 VAR_8 = FUNC_4(VAR_7->vector, VAR_6, 0, VAR_3, VAR_0);
 if (VAR_8) {
  FUNC_2(VAR_0, "Failed to request IRQ %d (err=%d).\n",
         VAR_7->vector, VAR_8);
  return VAR_8;
 }
 FUNC_3(VAR_0, VAR_1, VAR_7->entry);
 FUNC_0(VAR_0, VAR_7->entry);

 return 0;
}
