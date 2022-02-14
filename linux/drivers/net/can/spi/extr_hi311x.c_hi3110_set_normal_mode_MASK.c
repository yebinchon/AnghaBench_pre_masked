
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode; int state; } ;
struct hi3110_priv {TYPE_1__ can; } ;


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
 int FUNC_0 (struct spi_device*,int ) ;
 int FUNC_1 (struct spi_device*,int ,int) ;
 int FUNC_2 (int ) ;
 struct hi3110_priv* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_17)
{
 struct hi3110_priv *VAR_18 = FUNC_3(VAR_17);
 u8 VAR_19 = 0;

 FUNC_1(VAR_17, VAR_16, VAR_9 |
       VAR_10 | VAR_11);


 FUNC_1(VAR_17, VAR_15, VAR_8);

 if (VAR_18->can.ctrlmode & VAR_1)
  VAR_19 = VAR_4;
 else if (VAR_18->can.ctrlmode & VAR_0)
  VAR_19 = VAR_6;
 else
  VAR_19 = VAR_7;

 FUNC_1(VAR_17, VAR_14, VAR_19);


 FUNC_2(VAR_12);
 VAR_19 = FUNC_0(VAR_17, VAR_13);
 if ((VAR_19 & VAR_5) != VAR_19)
  return -VAR_3;

 VAR_18->can.state = VAR_2;
 return 0;
}
