
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct venc_state {scalar_t__ venc_type; TYPE_1__* pdev; int lock; void* vdaccfg_reg; void* venc_base; scalar_t__ pdata; } ;
struct resource {int dummy; } ;
struct platform_device_id {scalar_t__ driver_data; } ;
struct TYPE_5__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 void* FUNC_4 (TYPE_1__*,struct resource*) ;
 struct venc_state* FUNC_5 (TYPE_1__*,int,int ) ;
 struct platform_device_id* FUNC_6 (struct platform_device*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int) ;
 int FUNC_8 (struct platform_device*,struct venc_state*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 const struct platform_device_id *VAR_6;
 struct venc_state *VAR_7;
 struct resource *VAR_8;

 if (!VAR_5->dev.platform_data) {
  FUNC_2(&VAR_5->dev, "No platform data for VENC sub device");
  return -VAR_0;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(&VAR_5->dev, sizeof(struct venc_state), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_7->venc_type = VAR_6->driver_data;
 VAR_7->pdev = &VAR_5->dev;
 VAR_7->pdata = VAR_5->dev.platform_data;

 VAR_8 = FUNC_7(VAR_5, VAR_3, 0);

 VAR_7->venc_base = FUNC_4(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_7->venc_base))
  return FUNC_1(VAR_7->venc_base);

 if (VAR_7->venc_type != VAR_4) {
  VAR_8 = FUNC_7(VAR_5, VAR_3, 1);

  VAR_7->vdaccfg_reg = FUNC_4(&VAR_5->dev, VAR_8);
  if (FUNC_0(VAR_7->vdaccfg_reg))
   return FUNC_1(VAR_7->vdaccfg_reg);
 }
 FUNC_9(&VAR_7->lock);
 FUNC_8(VAR_5, VAR_7);
 FUNC_3(VAR_7->pdev, "VENC sub device probe success\n");

 return 0;
}
