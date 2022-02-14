
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_rga {int cmdbuf_phy; int dev; int dst_mmu_pages; int src_mmu_pages; int cmdbuf_virt; } ;
struct rga_ctx {struct rockchip_rga* rga; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct rga_ctx*,int ) ;
 int FUNC_3 (struct rga_ctx*) ;
 int FUNC_4 (struct rga_ctx*,int ) ;
 int FUNC_5 (struct rga_ctx*,int ) ;
 int FUNC_6 (struct rga_ctx*) ;
 int FUNC_7 (struct rockchip_rga*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct rga_ctx *VAR_4)
{
 struct rockchip_rga *VAR_5 = VAR_4->rga;

 FUNC_1(VAR_5->cmdbuf_virt, 0, VAR_2 * 4);

 FUNC_5(VAR_4, VAR_5->src_mmu_pages);




 FUNC_4(VAR_4, VAR_5->dst_mmu_pages);

 FUNC_2(VAR_4, VAR_5->dst_mmu_pages);
 FUNC_3(VAR_4);

 FUNC_6(VAR_4);

 FUNC_7(VAR_5, VAR_3, VAR_5->cmdbuf_phy);


 FUNC_0(VAR_5->dev, VAR_5->cmdbuf_phy,
  VAR_1, VAR_0);
}
