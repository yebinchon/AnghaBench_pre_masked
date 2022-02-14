
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_dev {int mem_bitmap; int mem_base; int mem_virt; int mem_size; TYPE_1__* plat_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct s5p_mfc_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->plat_dev->dev;

 FUNC_0(VAR_1, VAR_0->mem_size, VAR_0->mem_virt,
     VAR_0->mem_base);
 FUNC_1(VAR_0->mem_bitmap);
 FUNC_2(VAR_1);
}
