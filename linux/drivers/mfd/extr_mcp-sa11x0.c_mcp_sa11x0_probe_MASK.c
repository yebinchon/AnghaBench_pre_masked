
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct mcp_sa11x0 {int mccr0; int mccr1; void* base0; void* base1; } ;
struct mcp_plat_data {int sclk_rate; int mccr0; int mccr1; int codec_pdata; } ;
struct mcp {int sclk_rate; int rw_timeout; int * ops; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mcp_sa11x0*) ;
 int FUNC_1 (struct mcp_sa11x0*) ;
 int FUNC_2 (struct mcp_sa11x0*) ;
 int VAR_6 ;
 struct mcp_plat_data* FUNC_3 (int *) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct mcp*,int ) ;
 struct mcp* FUNC_7 (int *,int) ;
 int FUNC_8 (struct mcp*) ;
 int VAR_7 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int) ;
 int FUNC_10 (struct platform_device*,struct mcp*) ;
 struct mcp_sa11x0* FUNC_11 (struct mcp*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (int,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_8)
{
 struct mcp_plat_data *VAR_9 = FUNC_3(&VAR_8->dev);
 struct resource *VAR_10, *VAR_11;
 struct mcp_sa11x0 *VAR_12;
 struct mcp *VAR_13;
 int VAR_14;

 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_9(VAR_8, VAR_5, 0);
 VAR_11 = FUNC_9(VAR_8, VAR_5, 1);
 if (!VAR_10 || !VAR_11)
  return -VAR_4;

 if (!FUNC_13(VAR_10->start, FUNC_14(VAR_10),
    VAR_0)) {
  VAR_14 = -VAR_1;
  goto err_mem0;
 }

 if (!FUNC_13(VAR_11->start, FUNC_14(VAR_11),
    VAR_0)) {
  VAR_14 = -VAR_1;
  goto err_mem1;
 }

 VAR_13 = FUNC_7(&VAR_8->dev, sizeof(struct mcp_sa11x0));
 if (!VAR_13) {
  VAR_14 = -VAR_3;
  goto err_alloc;
 }

 VAR_13->owner = VAR_6;
 VAR_13->ops = &VAR_7;
 VAR_13->sclk_rate = VAR_9->sclk_rate;

 VAR_12 = FUNC_11(VAR_13);
 VAR_12->mccr0 = VAR_9->mccr0 | 0x7f7f;
 VAR_12->mccr1 = VAR_9->mccr1;

 VAR_12->base0 = FUNC_4(VAR_10->start, FUNC_14(VAR_10));
 VAR_12->base1 = FUNC_4(VAR_11->start, FUNC_14(VAR_11));
 if (!VAR_12->base0 || !VAR_12->base1) {
  VAR_14 = -VAR_3;
  goto err_ioremap;
 }

 FUNC_10(VAR_8, VAR_13);





 FUNC_15(-1, FUNC_2(VAR_12));
 FUNC_15(VAR_12->mccr1, FUNC_1(VAR_12));
 FUNC_15(VAR_12->mccr0, FUNC_0(VAR_12));






 VAR_13->rw_timeout = (64 * 3 * 1000000 + VAR_13->sclk_rate - 1) /
     VAR_13->sclk_rate;

 VAR_14 = FUNC_6(VAR_13, VAR_9->codec_pdata);
 if (VAR_14 == 0)
  return 0;

 err_ioremap:
 FUNC_5(VAR_12->base1);
 FUNC_5(VAR_12->base0);
 FUNC_8(VAR_13);
 err_alloc:
 FUNC_12(VAR_11->start, FUNC_14(VAR_11));
 err_mem1:
 FUNC_12(VAR_10->start, FUNC_14(VAR_10));
 err_mem0:
 return VAR_14;
}
