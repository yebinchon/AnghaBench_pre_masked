
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rproc_vring {int notifyid; int align; int len; } ;
struct rproc_vdev {int rsc_offset; int index; struct rproc_vring* vring; struct rproc* rproc; } ;
struct rproc_mem_entry {int dummy; } ;
struct device {int dummy; } ;
struct rproc {int max_notifyid; int notifyids; scalar_t__ table_ptr; struct device dev; } ;
struct fw_rsc_vdev {TYPE_1__* vring; } ;
struct TYPE_2__ {int notifyid; int da; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int *,struct rproc_vring*,int ,int ,int ) ;
 int FUNC_3 (struct rproc*,struct rproc_mem_entry*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct rproc*,struct rproc_mem_entry*,int ,int) ;
 struct rproc_mem_entry* FUNC_5 (struct rproc*,char*,int ,int) ;
 struct rproc_mem_entry* FUNC_6 (struct device*,int ,int ,int,int ,int ,int ,char*,int ,int) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct rproc_vdev *VAR_4, int VAR_5)
{
 struct rproc *VAR_6 = VAR_4->rproc;
 struct device *VAR_7 = &VAR_6->dev;
 struct rproc_vring *VAR_8 = &VAR_4->vring[VAR_5];
 struct fw_rsc_vdev *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 struct rproc_mem_entry *VAR_13;


 VAR_11 = FUNC_0(FUNC_7(VAR_8->len, VAR_8->align));

 VAR_9 = (void *)VAR_6->table_ptr + VAR_4->rsc_offset;


 VAR_13 = FUNC_5(VAR_6, "vdev%dvring%d", VAR_4->index,
       VAR_5);
 if (VAR_13) {
  if (FUNC_4(VAR_6, VAR_13, VAR_9->vring[VAR_5].da, VAR_11))
   return -VAR_0;
 } else {

  VAR_13 = FUNC_6(VAR_7, 0, 0, VAR_11, VAR_9->vring[VAR_5].da,
        VAR_2,
        VAR_3,
        "vdev%dvring%d",
        VAR_4->index, VAR_5);
  if (!VAR_13) {
   FUNC_1(VAR_7, "Can't allocate memory entry structure\n");
   return -VAR_0;
  }

  FUNC_3(VAR_6, VAR_13);
 }






 VAR_10 = FUNC_2(&VAR_6->notifyids, VAR_8, 0, 0, VAR_1);
 if (VAR_10 < 0) {
  FUNC_1(VAR_7, "idr_alloc failed: %d\n", VAR_10);
  return VAR_10;
 }
 VAR_12 = VAR_10;


 if (VAR_12 > VAR_6->max_notifyid)
  VAR_6->max_notifyid = VAR_12;

 VAR_8->notifyid = VAR_12;


 VAR_9->vring[VAR_5].notifyid = VAR_12;
 return 0;
}
