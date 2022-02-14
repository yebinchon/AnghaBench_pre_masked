
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfp_bar {int refcnt; int bitsize; } ;
struct nfp6000_pcie {int bars; struct nfp_bar* bar; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,int,int,int,int ,size_t,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfp6000_pcie const*,struct nfp_bar const*,int *,int *,int,int,int,int ,size_t,int) ;

__attribute__((used)) static int
FUNC_3(const struct nfp6000_pcie *VAR_2,
   int VAR_3, int VAR_4, int VAR_5,
   u64 VAR_6, size_t VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_2->bars; VAR_9++) {
  const struct nfp_bar *VAR_11 = &VAR_2->bar[VAR_9];
  int VAR_12;

  if (!VAR_11->bitsize)
   continue;


  VAR_12 = FUNC_2(VAR_2, VAR_11, ((void*)0), ((void*)0),
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_12)
   continue;

  if (!FUNC_1(&VAR_11->refcnt))
   return VAR_9;

  VAR_10++;
 }

 if (FUNC_0(!VAR_10, "No suitable BAR found for request tgt:0x%x act:0x%x tok:0x%x off:0x%llx size:%zd width:%d\n",
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8))
  return -VAR_1;

 return -VAR_0;
}
