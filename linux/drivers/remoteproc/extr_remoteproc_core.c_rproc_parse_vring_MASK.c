
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_vring {struct rproc_vdev* rvdev; scalar_t__ align; scalar_t__ len; } ;
struct rproc_vdev {struct rproc_vring* vring; struct rproc* rproc; } ;
struct device {int dummy; } ;
struct rproc {struct device dev; } ;
struct fw_rsc_vdev_vring {scalar_t__ align; scalar_t__ num; int da; } ;
struct fw_rsc_vdev {struct fw_rsc_vdev_vring* vring; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct device*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct rproc_vdev *VAR_1, struct fw_rsc_vdev *VAR_2, int VAR_3)
{
 struct rproc *VAR_4 = VAR_1->rproc;
 struct device *VAR_5 = &VAR_4->dev;
 struct fw_rsc_vdev_vring *VAR_6 = &VAR_2->vring[VAR_3];
 struct rproc_vring *VAR_7 = &VAR_1->vring[VAR_3];

 FUNC_0(VAR_5, "vdev rsc: vring%d: da 0x%x, qsz %d, align %d\n",
  VAR_3, VAR_6->da, VAR_6->num, VAR_6->align);


 if (!VAR_6->num || !VAR_6->align) {
  FUNC_1(VAR_5, "invalid qsz (%d) or alignment (%d)\n",
   VAR_6->num, VAR_6->align);
  return -VAR_0;
 }

 VAR_7->len = VAR_6->num;
 VAR_7->align = VAR_6->align;
 VAR_7->rvdev = VAR_1;

 return 0;
}
