
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {int private_data; } ;
struct delta_dev {int lock; int dev; scalar_t__ clk_flash_promip; scalar_t__ clk_st231; } ;
struct delta_dec {int dummy; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct delta_ctx {int name; TYPE_1__ fh; struct delta_dec* dec; struct delta_dev* dev; } ;


 int FUNC_0 (struct delta_dec const*,int ,struct delta_ctx*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (struct delta_ctx*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct delta_ctx*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct delta_ctx* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_1)
{
 struct delta_ctx *VAR_2 = FUNC_7(VAR_1->private_data);
 struct delta_dev *VAR_3 = VAR_2->dev;
 const struct delta_dec *VAR_4 = VAR_2->dec;

 FUNC_5(&VAR_3->lock);


 FUNC_0(VAR_4, VAR_0, VAR_2);





 FUNC_2(VAR_2);

 FUNC_10(VAR_2->fh.m2m_ctx);

 FUNC_8(&VAR_2->fh);
 FUNC_9(&VAR_2->fh);


 if (VAR_3->clk_st231)
  FUNC_1(VAR_3->clk_st231);


 if (VAR_3->clk_flash_promip)
  FUNC_1(VAR_3->clk_flash_promip);

 FUNC_3(VAR_3->dev, "%s decoder instance released\n", VAR_2->name);

 FUNC_4(VAR_2);

 FUNC_6(&VAR_3->lock);
 return 0;
}
