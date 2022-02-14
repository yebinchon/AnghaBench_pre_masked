
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct geni_se {int dummy; } ;
struct spi_geni_master {int dev; int xfer_done; int cur_mcmd; struct geni_se se; } ;
struct spi_device {int mode; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct spi_master* FUNC_0 (int ) ;
 int FUNC_1 (struct geni_se*,int ,int ) ;
 int FUNC_2 (struct spi_master*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct spi_geni_master* FUNC_6 (int ) ;
 unsigned long FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct spi_device *VAR_5, bool VAR_6)
{
 struct spi_geni_master *VAR_7 = FUNC_6(VAR_5->master);
 struct spi_master *VAR_8 = FUNC_0(VAR_7->dev);
 struct geni_se *VAR_9 = &VAR_7->se;
 unsigned long VAR_10;

 FUNC_5(&VAR_7->xfer_done);
 FUNC_3(VAR_7->dev);
 if (!(VAR_5->mode & VAR_4))
  VAR_6 = !VAR_6;

 VAR_7->cur_mcmd = VAR_0;
 if (VAR_6)
  FUNC_1(VAR_9, VAR_2, 0);
 else
  FUNC_1(VAR_9, VAR_3, 0);

 VAR_10 = FUNC_7(&VAR_7->xfer_done, VAR_1);
 if (!VAR_10)
  FUNC_2(VAR_8, ((void*)0));

 FUNC_4(VAR_7->dev);
}
