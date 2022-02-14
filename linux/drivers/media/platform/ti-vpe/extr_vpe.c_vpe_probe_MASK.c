
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpe_dev {int v4l2_dev; int m2m_dev; int * vpdma; int vpdma_data; int csc; int sc; int base; TYPE_1__* res; int dev_mutex; int num_instances; int lock; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct platform_device*,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 struct vpe_dev* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int ,int ,int ,struct vpe_dev*) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,int ) ;
 TYPE_1__* FUNC_9 (struct platform_device*,int ,char*) ;
 int FUNC_10 (struct platform_device*,struct vpe_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct vpe_dev*,int ,int ,int ) ;
 int FUNC_14 (struct platform_device*,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct platform_device*,int *,int ) ;
 int FUNC_21 (struct vpe_dev*,char*,int) ;
 int FUNC_22 (struct vpe_dev*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_23 (struct platform_device*) ;
 int FUNC_24 (struct platform_device*) ;
 int FUNC_25 (struct vpe_dev*,int) ;
 int FUNC_26 (struct vpe_dev*) ;
 int FUNC_27 (struct vpe_dev*) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_11)
{
 struct vpe_dev *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 VAR_12 = FUNC_5(&VAR_11->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_15(&VAR_12->lock);

 VAR_13 = FUNC_16(&VAR_11->dev, &VAR_12->v4l2_dev);
 if (VAR_13)
  return VAR_13;

 FUNC_2(&VAR_12->num_instances, 0);
 FUNC_7(&VAR_12->dev_mutex);

 VAR_12->res = FUNC_9(VAR_11, VAR_2,
   "vpe_top");






 VAR_12->base = FUNC_4(&VAR_11->dev, VAR_12->res->start, VAR_3);
 if (!VAR_12->base) {
  VAR_13 = -VAR_0;
  goto v4l2_dev_unreg;
 }

 VAR_14 = FUNC_8(VAR_11, 0);
 VAR_13 = FUNC_6(&VAR_11->dev, VAR_14, VAR_10, 0, VAR_4,
   VAR_12);
 if (VAR_13)
  goto v4l2_dev_unreg;

 FUNC_10(VAR_11, VAR_12);

 VAR_12->m2m_dev = FUNC_18(&VAR_8);
 if (FUNC_0(VAR_12->m2m_dev)) {
  FUNC_22(VAR_12, "Failed to init mem2mem device\n");
  VAR_13 = FUNC_1(VAR_12->m2m_dev);
  goto v4l2_dev_unreg;
 }

 FUNC_12(&VAR_11->dev);

 VAR_13 = FUNC_23(VAR_11);
 if (VAR_13)
  goto rel_m2m;


 FUNC_25(VAR_12, 1);

 FUNC_26(VAR_12);

 VAR_15 = FUNC_13(VAR_12, VAR_5, VAR_6,
  VAR_7);
 FUNC_21(VAR_12, "VPE PID function %x\n", VAR_15);

 FUNC_27(VAR_12);

 VAR_12->sc = FUNC_14(VAR_11, "sc");
 if (FUNC_0(VAR_12->sc)) {
  VAR_13 = FUNC_1(VAR_12->sc);
  goto runtime_put;
 }

 VAR_12->csc = FUNC_3(VAR_11, "csc");
 if (FUNC_0(VAR_12->csc)) {
  VAR_13 = FUNC_1(VAR_12->csc);
  goto runtime_put;
 }

 VAR_12->vpdma = &VAR_12->vpdma_data;
 VAR_13 = FUNC_20(VAR_11, VAR_12->vpdma, VAR_9);
 if (VAR_13)
  goto runtime_put;

 return 0;

runtime_put:
 FUNC_24(VAR_11);
rel_m2m:
 FUNC_11(&VAR_11->dev);
 FUNC_19(VAR_12->m2m_dev);
v4l2_dev_unreg:
 FUNC_17(&VAR_12->v4l2_dev);

 return VAR_13;
}
