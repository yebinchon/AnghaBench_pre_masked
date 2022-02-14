
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_mem_entry {int rsc_offset; int flags; } ;
struct device {int dummy; } ;
struct rproc {struct device dev; } ;
struct fw_rsc_carveout {int flags; int name; int da; int len; int pa; scalar_t__ reserved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct rproc*,struct rproc_mem_entry*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct rproc*,struct rproc_mem_entry*,int ,int ) ;
 struct rproc_mem_entry* FUNC_4 (struct rproc*,int ) ;
 struct rproc_mem_entry* FUNC_5 (struct device*,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct rproc *VAR_5,
     struct fw_rsc_carveout *VAR_6,
     int VAR_7, int VAR_8)
{
 struct rproc_mem_entry *VAR_9;
 struct device *VAR_10 = &VAR_5->dev;

 if (sizeof(*VAR_6) > VAR_8) {
  FUNC_1(VAR_10, "carveout rsc is truncated\n");
  return -VAR_0;
 }


 if (VAR_6->reserved) {
  FUNC_1(VAR_10, "carveout rsc has non zero reserved bytes\n");
  return -VAR_0;
 }

 FUNC_0(VAR_10, "carveout rsc: name: %s, da 0x%x, pa 0x%x, len 0x%x, flags 0x%x\n",
  VAR_6->name, VAR_6->da, VAR_6->pa, VAR_6->len, VAR_6->flags);





 VAR_9 = FUNC_4(VAR_5, VAR_6->name);

 if (VAR_9) {
  if (VAR_9->rsc_offset != VAR_2) {
   FUNC_1(VAR_10,
    "Carveout already associated to resource table\n");
   return -VAR_1;
  }

  if (FUNC_3(VAR_5, VAR_9, VAR_6->da, VAR_6->len))
   return -VAR_1;


  VAR_9->rsc_offset = VAR_7;
  VAR_9->flags = VAR_6->flags;

  return 0;
 }


 VAR_9 = FUNC_5(VAR_10, 0, 0, VAR_6->len, VAR_6->da,
     VAR_3,
     VAR_4, VAR_6->name);
 if (!VAR_9) {
  FUNC_1(VAR_10, "Can't allocate memory entry structure\n");
  return -VAR_1;
 }

 VAR_9->flags = VAR_6->flags;
 VAR_9->rsc_offset = VAR_7;
 FUNC_2(VAR_5, VAR_9);

 return 0;
}
