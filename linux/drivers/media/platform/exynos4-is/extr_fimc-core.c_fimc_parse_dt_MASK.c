
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct of_device_id {int data; } ;
struct fimc_variant {int min_inp_pixsize; int min_out_pixsize; int min_vsize_align; int hor_offs_align; int has_inp_rot; int has_out_rot; void* has_cam_if; void* has_isp_wb; void* has_mainscaler_ext; struct fimc_pix_limit* pix_limit; } ;
struct fimc_pix_limit {int scaler_en_w; int scaler_dis_w; int out_rot_en_w; int out_rot_dis_w; } ;
struct fimc_dev {struct fimc_variant* variant; int id; int drv_data; TYPE_1__* pdev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct fimc_variant* FUNC_0 (struct device*,int,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct device_node*,char*) ;
 struct of_device_id* FUNC_2 (int ,struct device_node*) ;
 void* FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,int*) ;
 int FUNC_5 (struct device_node*,char*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct fimc_dev *VAR_9, u32 *VAR_10)
{
 struct device *VAR_11 = &VAR_9->pdev->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 const struct of_device_id *VAR_13;
 struct fimc_variant *VAR_14;
 struct fimc_pix_limit *VAR_15;
 u32 VAR_16[VAR_6];
 int VAR_17;

 if (FUNC_3(VAR_12, "samsung,lcd-wb"))
  return -VAR_1;

 VAR_14 = FUNC_0(VAR_11, sizeof(*VAR_14) + sizeof(*VAR_15), VAR_7);
 if (!VAR_14)
  return -VAR_2;

 VAR_13 = FUNC_2(VAR_8, VAR_12);
 if (!VAR_13)
  return -VAR_0;
 VAR_9->drv_data = VAR_13->data;
 VAR_17 = FUNC_5(VAR_12, "samsung,pix-limits",
      VAR_16, VAR_6);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_15 = (struct fimc_pix_limit *)&VAR_14[1];

 VAR_15->scaler_en_w = VAR_16[0];
 VAR_15->scaler_dis_w = VAR_16[1];
 VAR_15->out_rot_en_w = VAR_16[2];
 VAR_15->out_rot_dis_w = VAR_16[3];
 VAR_14->pix_limit = VAR_15;

 VAR_17 = FUNC_5(VAR_12, "samsung,min-pix-sizes",
        VAR_16, 2);
 VAR_14->min_inp_pixsize = VAR_17 ? VAR_5 : VAR_16[0];
 VAR_14->min_out_pixsize = VAR_17 ? VAR_5 : VAR_16[1];
 VAR_17 = FUNC_5(VAR_12, "samsung,min-pix-alignment",
        VAR_16, 2);
 VAR_14->min_vsize_align = VAR_17 ? VAR_3 : VAR_16[0];
 VAR_14->hor_offs_align = VAR_17 ? VAR_4 : VAR_16[1];

 VAR_17 = FUNC_4(VAR_12, "samsung,rotators", &VAR_16[1]);
 VAR_14->has_inp_rot = VAR_17 ? 1 : VAR_16[1] & 0x01;
 VAR_14->has_out_rot = VAR_17 ? 1 : VAR_16[1] & 0x10;
 VAR_14->has_mainscaler_ext = FUNC_3(VAR_12,
     "samsung,mainscaler-ext");

 VAR_14->has_isp_wb = FUNC_3(VAR_12, "samsung,isp-wb");
 VAR_14->has_cam_if = FUNC_3(VAR_12, "samsung,cam-if");
 FUNC_4(VAR_12, "clock-frequency", VAR_10);
 VAR_9->id = FUNC_1(VAR_12, "fimc");

 VAR_9->variant = VAR_14;
 return 0;
}
