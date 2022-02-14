
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_mem_entry {int node; int len; int da; } ;
struct device {int dummy; } ;
struct rproc {int mappings; int domain; struct device dev; } ;
struct fw_rsc_devmem {int len; int da; int pa; int flags; scalar_t__ reserved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,int ,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct rproc_mem_entry*) ;
 struct rproc_mem_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct rproc *VAR_3, struct fw_rsc_devmem *VAR_4,
          int VAR_5, int VAR_6)
{
 struct rproc_mem_entry *VAR_7;
 struct device *VAR_8 = &VAR_3->dev;
 int VAR_9;


 if (!VAR_3->domain)
  return -VAR_0;

 if (sizeof(*VAR_4) > VAR_6) {
  FUNC_1(VAR_8, "devmem rsc is truncated\n");
  return -VAR_0;
 }


 if (VAR_4->reserved) {
  FUNC_1(VAR_8, "devmem rsc has non zero reserved bytes\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_3->domain, VAR_4->da, VAR_4->pa, VAR_4->len, VAR_4->flags);
 if (VAR_9) {
  FUNC_1(VAR_8, "failed to map devmem: %d\n", VAR_9);
  goto out;
 }
 VAR_7->da = VAR_4->da;
 VAR_7->len = VAR_4->len;
 FUNC_5(&VAR_7->node, &VAR_3->mappings);

 FUNC_0(VAR_8, "mapped devmem pa 0x%x, da 0x%x, len 0x%x\n",
  VAR_4->pa, VAR_4->da, VAR_4->len);

 return 0;

out:
 FUNC_3(VAR_7);
 return VAR_9;
}
