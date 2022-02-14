
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_rga {int dev; int v4l2_dev; int vfd; int m2m_dev; scalar_t__ dst_mmu_pages; scalar_t__ src_mmu_pages; int cmdbuf_phy; int cmdbuf_virt; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (unsigned long,int) ;
 struct rockchip_rga* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct rockchip_rga *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3->dev, VAR_1, VAR_3->cmdbuf_virt,
         VAR_3->cmdbuf_phy, VAR_0);

 FUNC_1((unsigned long)VAR_3->src_mmu_pages, 3);
 FUNC_1((unsigned long)VAR_3->dst_mmu_pages, 3);

 FUNC_5(&VAR_3->v4l2_dev, "Removing\n");

 FUNC_6(VAR_3->m2m_dev);
 FUNC_7(VAR_3->vfd);
 FUNC_4(&VAR_3->v4l2_dev);

 FUNC_3(VAR_3->dev);

 return 0;
}
