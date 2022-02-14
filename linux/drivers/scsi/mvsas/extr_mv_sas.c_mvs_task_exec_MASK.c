
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sas_task {TYPE_1__* dev; } ;
struct mvs_tmf_task {int dummy; } ;
struct mvs_info {int tx_prod; int lock; int dev; } ;
struct mvs_device {struct mvs_info* mvi_info; } ;
struct completion {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {int (* start_delivery ) (struct mvs_info*,int) ;} ;
struct TYPE_3__ {scalar_t__ lldd_dev; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sas_task*,struct mvs_info*,int,struct mvs_tmf_task*,int*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct mvs_info*,int) ;

__attribute__((used)) static int FUNC_6(struct sas_task *VAR_3, gfp_t VAR_4,
    struct completion *VAR_5, int VAR_6,
    struct mvs_tmf_task *VAR_7)
{
 struct mvs_info *VAR_8 = ((void*)0);
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 unsigned long VAR_11 = 0;

 VAR_8 = ((struct mvs_device *)VAR_3->dev->lldd_dev)->mvi_info;

 FUNC_3(&VAR_8->lock, VAR_11);
 VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_6, VAR_7, &VAR_10);
 if (VAR_9)
  FUNC_0(VAR_0, VAR_8->dev, "mvsas exec failed[%d]!\n", VAR_9);

 if (FUNC_1(VAR_10))
   VAR_1->start_delivery(VAR_8, (VAR_8->tx_prod - 1) &
    (VAR_2 - 1));
 FUNC_4(&VAR_8->lock, VAR_11);

 return VAR_9;
}
