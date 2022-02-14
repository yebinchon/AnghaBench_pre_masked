
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int dummy; } ;


 int FUNC_0 (struct velocity_info*) ;
 int FUNC_1 (struct velocity_info*) ;
 int FUNC_2 (struct velocity_info*) ;
 int FUNC_3 (struct velocity_info*) ;
 int FUNC_4 (struct velocity_info*) ;
 int FUNC_5 (struct velocity_info*,int) ;

__attribute__((used)) static int FUNC_6(struct velocity_info *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_5(VAR_0, VAR_1);

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 < 0)
  goto out;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 < 0)
  goto err_free_dma_rings_0;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 < 0)
  goto err_free_rd_ring_1;
out:
 return VAR_2;

err_free_rd_ring_1:
 FUNC_1(VAR_0);
err_free_dma_rings_0:
 FUNC_0(VAR_0);
 goto out;
}
