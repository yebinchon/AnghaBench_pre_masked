
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file {int private_data; } ;
struct coda_dev {int ida; int dev; int clk_per; int clk_ahb; int workqueue; } ;
struct TYPE_9__ {int m2m_ctx; } ;
struct coda_ctx {scalar_t__ inst_type; int debugfs_entry; TYPE_3__* ops; int idx; TYPE_4__ fh; int ctrls; int workbuf; TYPE_2__* dev; int seq_end_work; scalar_t__ vdoa; scalar_t__ use_bit; } ;
struct TYPE_8__ {int (* release ) (struct coda_ctx*) ;scalar_t__ seq_end_work; } ;
struct TYPE_7__ {TYPE_1__* devtype; } ;
struct TYPE_6__ {scalar_t__ product; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct coda_ctx*) ;
 int FUNC_2 (int,struct coda_ctx*,char*,struct coda_ctx*) ;
 int FUNC_3 (struct coda_dev*,int *) ;
 int FUNC_4 (int ) ;
 struct coda_ctx* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct coda_ctx*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct coda_ctx*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__) ;
 struct coda_dev* FUNC_17 (struct file*) ;

__attribute__((used)) static int FUNC_18(struct file *VAR_2)
{
 struct coda_dev *VAR_3 = FUNC_17(VAR_2);
 struct coda_ctx *VAR_4 = FUNC_5(VAR_2->private_data);

 FUNC_2(1, VAR_4, "release instance (%p)\n", VAR_4);

 if (VAR_4->inst_type == VAR_1 && VAR_4->use_bit)
  FUNC_1(VAR_4);


 FUNC_15(VAR_4->fh.m2m_ctx);

 if (VAR_4->vdoa)
  FUNC_16(VAR_4->vdoa);


 if (VAR_4->ops->seq_end_work) {
  FUNC_10(VAR_3->workqueue, &VAR_4->seq_end_work);
  FUNC_6(&VAR_4->seq_end_work);
 }

 if (VAR_4->dev->devtype->product == VAR_0)
  FUNC_3(VAR_3, &VAR_4->workbuf);

 FUNC_12(&VAR_4->ctrls);
 FUNC_0(VAR_3->clk_ahb);
 FUNC_0(VAR_3->clk_per);
 FUNC_9(VAR_3->dev);
 FUNC_13(&VAR_4->fh);
 FUNC_14(&VAR_4->fh);
 FUNC_7(&VAR_3->ida, VAR_4->idx);
 if (VAR_4->ops->release)
  VAR_4->ops->release(VAR_4);
 FUNC_4(VAR_4->debugfs_entry);
 FUNC_8(VAR_4);

 return 0;
}
