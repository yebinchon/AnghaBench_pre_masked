
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct csi2rx_priv {int num_lanes; unsigned int* lanes; unsigned int max_lanes; unsigned int max_streams; int p_clk; int * pixel_clk; int sys_clk; scalar_t__ base; int source_subdev; } ;
typedef int lanes_used ;


 int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct csi2rx_priv*) ;
 unsigned int FUNC_8 (unsigned long*,int) ;
 int VAR_4 ;
 int FUNC_9 (unsigned int,unsigned long*) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct csi2rx_priv *VAR_6)
{
 unsigned int VAR_7;
 unsigned long VAR_8 = 0;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(VAR_6->p_clk);
 if (VAR_10)
  return VAR_10;

 FUNC_7(VAR_6);

 VAR_9 = VAR_6->num_lanes << 8;
 for (VAR_7 = 0; VAR_7 < VAR_6->num_lanes; VAR_7++) {
  VAR_9 |= FUNC_0(VAR_7, VAR_6->lanes[VAR_7]);
  FUNC_9(VAR_6->lanes[VAR_7], &VAR_8);
 }







 for (VAR_7 = VAR_6->num_lanes; VAR_7 < VAR_6->max_lanes; VAR_7++) {
  unsigned int VAR_11 = FUNC_8(&VAR_8,
             sizeof(VAR_8));
  FUNC_9(VAR_11, &VAR_8);
  VAR_9 |= FUNC_0(VAR_7, VAR_7 + 1);
 }

 FUNC_11(VAR_9, VAR_6->base + VAR_0);

 VAR_10 = FUNC_10(VAR_6->source_subdev, VAR_5, VAR_4, 1);
 if (VAR_10)
  goto err_disable_pclk;
 for (VAR_7 = 0; VAR_7 < VAR_6->max_streams; VAR_7++) {
  VAR_10 = FUNC_6(VAR_6->pixel_clk[VAR_7]);
  if (VAR_10)
   goto err_disable_pixclk;

  FUNC_11(VAR_1,
         VAR_6->base + FUNC_1(VAR_7));

  FUNC_11(VAR_3 |
         FUNC_4(VAR_7),
         VAR_6->base + FUNC_3(VAR_7));

  FUNC_11(VAR_2,
         VAR_6->base + FUNC_2(VAR_7));
 }

 VAR_10 = FUNC_6(VAR_6->sys_clk);
 if (VAR_10)
  goto err_disable_pixclk;

 FUNC_5(VAR_6->p_clk);

 return 0;

err_disable_pixclk:
 for (; VAR_7 > 0; VAR_7--)
  FUNC_5(VAR_6->pixel_clk[VAR_7 - 1]);

err_disable_pclk:
 FUNC_5(VAR_6->p_clk);

 return VAR_10;
}
