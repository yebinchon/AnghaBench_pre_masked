
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_message {int dummy; } ;
struct spi_master {int dummy; } ;
struct geni_se {scalar_t__ base; } ;
struct spi_geni_master {int dev; int xfer_done; int lock; int cur_mcmd; struct geni_se se; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct geni_se*) ;
 int FUNC_2 (struct geni_se*) ;
 int FUNC_3 (int *) ;
 struct spi_geni_master* FUNC_4 (struct spi_master*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 unsigned long FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct spi_master *VAR_3,
    struct spi_message *VAR_4)
{
 struct spi_geni_master *VAR_5 = FUNC_4(VAR_3);
 unsigned long VAR_6, VAR_7;
 struct geni_se *VAR_8 = &VAR_5->se;

 FUNC_5(&VAR_5->lock, VAR_7);
 FUNC_3(&VAR_5->xfer_done);
 VAR_5->cur_mcmd = VAR_0;
 FUNC_2(VAR_8);
 FUNC_8(0, VAR_8->base + VAR_2);
 FUNC_6(&VAR_5->lock, VAR_7);
 VAR_6 = FUNC_7(&VAR_5->xfer_done, VAR_1);
 if (VAR_6)
  return;

 FUNC_5(&VAR_5->lock, VAR_7);
 FUNC_3(&VAR_5->xfer_done);
 FUNC_1(VAR_8);
 FUNC_6(&VAR_5->lock, VAR_7);
 VAR_6 = FUNC_7(&VAR_5->xfer_done, VAR_1);
 if (!VAR_6)
  FUNC_0(VAR_5->dev, "Failed to cancel/abort m_cmd\n");
}
