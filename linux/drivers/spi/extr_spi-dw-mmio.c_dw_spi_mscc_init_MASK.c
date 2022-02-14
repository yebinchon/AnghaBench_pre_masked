
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct dw_spi_mscc {scalar_t__ syscon; scalar_t__ spi_mst; } ;
struct TYPE_2__ {int set_cs; } ;
struct dw_spi_mmio {struct dw_spi_mscc* priv; TYPE_1__ dws; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 struct dw_spi_mscc* FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (struct platform_device*,int) ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7,
       struct dw_spi_mmio *VAR_8,
       const char *VAR_9, u32 VAR_10)
{
 struct dw_spi_mscc *VAR_11;

 VAR_11 = FUNC_3(&VAR_7->dev, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->spi_mst = FUNC_4(VAR_7, 1);
 if (FUNC_0(VAR_11->spi_mst)) {
  FUNC_2(&VAR_7->dev, "SPI_MST region map failed\n");
  return FUNC_1(VAR_11->spi_mst);
 }

 VAR_11->syscon = FUNC_6(VAR_9);
 if (FUNC_0(VAR_11->syscon))
  return FUNC_1(VAR_11->syscon);


 FUNC_7(0, VAR_11->spi_mst + VAR_5);


 FUNC_5(VAR_11->syscon, VAR_2,
      VAR_3 << VAR_10,
      VAR_4 << VAR_10);

 VAR_8->dws.set_cs = VAR_6;
 VAR_8->priv = VAR_11;

 return 0;
}
