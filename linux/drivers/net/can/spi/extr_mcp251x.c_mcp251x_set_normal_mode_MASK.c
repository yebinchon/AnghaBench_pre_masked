
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct TYPE_2__ {int ctrlmode; int state; } ;
struct mcp251x_priv {TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_18 ;
 int FUNC_1 (struct spi_device*,int ) ;
 int FUNC_2 (struct spi_device*,int ,int) ;
 int FUNC_3 () ;
 struct mcp251x_priv* FUNC_4 (struct spi_device*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_19)
{
 struct mcp251x_priv *VAR_20 = FUNC_4(VAR_19);
 unsigned long VAR_21;


 FUNC_2(VAR_19, VAR_5,
     VAR_6 | VAR_11 | VAR_10 |
     VAR_9 | VAR_8 | VAR_7);

 if (VAR_20->can.ctrlmode & VAR_14) {

  FUNC_2(VAR_19, VAR_0, VAR_2);
 } else if (VAR_20->can.ctrlmode & VAR_13) {

  FUNC_2(VAR_19, VAR_0, VAR_1);
 } else {

  FUNC_2(VAR_19, VAR_0, VAR_4);


  VAR_21 = VAR_18 + VAR_17;
  while (FUNC_1(VAR_19, VAR_12) & VAR_3) {
   FUNC_3();
   if (FUNC_5(VAR_18, VAR_21)) {
    FUNC_0(&VAR_19->dev, "MCP251x didn't enter in normal mode\n");
    return -VAR_16;
   }
  }
 }
 VAR_20->can.state = VAR_15;
 return 0;
}
