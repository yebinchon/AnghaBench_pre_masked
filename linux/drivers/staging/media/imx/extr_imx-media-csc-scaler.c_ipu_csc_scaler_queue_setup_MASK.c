
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct TYPE_3__ {unsigned int sizeimage; } ;
struct ipu_csc_scaler_q_data {TYPE_1__ cur_fmt; } ;
struct ipu_csc_scaler_ctx {TYPE_2__* priv; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 struct ipu_csc_scaler_q_data* FUNC_1 (struct ipu_csc_scaler_ctx*,int ) ;
 struct ipu_csc_scaler_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_1,
          unsigned int *VAR_2,
          unsigned int *VAR_3,
          unsigned int VAR_4[],
          struct device *VAR_5[])
{
 struct ipu_csc_scaler_ctx *VAR_6 = FUNC_2(VAR_1);
 struct ipu_csc_scaler_q_data *VAR_7;
 unsigned int VAR_8, VAR_9 = *VAR_2;

 VAR_7 = FUNC_1(VAR_6, VAR_1->type);

 VAR_8 = VAR_7->cur_fmt.sizeimage;

 *VAR_2 = VAR_9;

 if (*VAR_3)
  return VAR_4[0] < VAR_8 ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_8;

 FUNC_0(VAR_6->priv->dev, "get %d buffer(s) of size %d each.\n",
  VAR_9, VAR_8);

 return 0;
}
