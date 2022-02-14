
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpu_ipi_desc {char const* name; void* priv; scalar_t__ handler; } ;
struct platform_device {int dev; } ;
struct mtk_vpu {struct vpu_ipi_desc* ipi_desc; } ;
typedef scalar_t__ ipi_handler_t ;
typedef enum ipi_id { ____Placeholder_ipi_id } ipi_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 struct mtk_vpu* FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device *VAR_3,
       enum ipi_id VAR_4, ipi_handler_t VAR_5,
       const char *VAR_6, void *VAR_7)
{
 struct mtk_vpu *VAR_8 = FUNC_1(VAR_3);
 struct vpu_ipi_desc *VAR_9;

 if (!VAR_8) {
  FUNC_0(&VAR_3->dev, "vpu device in not ready\n");
  return -VAR_1;
 }

 if (VAR_4 >= 0 && VAR_4 < VAR_2 && VAR_5) {
  VAR_9 = VAR_8->ipi_desc;
  VAR_9[VAR_4].name = VAR_6;
  VAR_9[VAR_4].handler = VAR_5;
  VAR_9[VAR_4].priv = VAR_7;
  return 0;
 }

 FUNC_0(&VAR_3->dev, "register vpu ipi id %d with invalid arguments\n",
  VAR_4);
 return -VAR_0;
}
