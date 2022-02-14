
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int dummy; } ;
struct fsl_lpspi_data {int dev; int xfer_done; scalar_t__ slave_aborted; scalar_t__ is_slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct fsl_lpspi_data* FUNC_1 (struct spi_controller*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct spi_controller *VAR_3)
{
 struct fsl_lpspi_data *VAR_4 =
    FUNC_1(VAR_3);

 if (VAR_4->is_slave) {
  if (FUNC_2(&VAR_4->xfer_done) ||
   VAR_4->slave_aborted) {
   FUNC_0(VAR_4->dev, "interrupted\n");
   return -VAR_0;
  }
 } else {
  if (!FUNC_3(&VAR_4->xfer_done, VAR_2)) {
   FUNC_0(VAR_4->dev, "wait for completion timeout\n");
   return -VAR_1;
  }
 }

 return 0;
}
