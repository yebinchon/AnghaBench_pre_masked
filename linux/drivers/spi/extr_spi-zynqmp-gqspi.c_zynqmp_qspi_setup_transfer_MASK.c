
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u32 ;
struct zynqmp_qspi {int refclk; } ;
struct spi_transfer {int speed_hz; } ;
struct spi_device {int max_speed_hz; int mode; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct zynqmp_qspi* FUNC_1 (int ) ;
 int FUNC_2 (struct zynqmp_qspi*,int ) ;
 int FUNC_3 (struct zynqmp_qspi*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_9,
          struct spi_transfer *VAR_10)
{
 struct zynqmp_qspi *VAR_11 = FUNC_1(VAR_9->master);
 ulong VAR_12;
 u32 VAR_13, VAR_14, VAR_15 = 0;

 if (VAR_10)
  VAR_14 = VAR_10->speed_hz;
 else
  VAR_14 = VAR_9->max_speed_hz;



 VAR_12 = FUNC_0(VAR_11->refclk);

 while ((VAR_15 < VAR_0) &&
        (VAR_12 /
  (VAR_1 << VAR_15)) > VAR_14)
  VAR_15++;

 VAR_13 = FUNC_2(VAR_11, VAR_6);


 VAR_13 &= (~VAR_4) & (~VAR_5);

 if (VAR_9->mode & VAR_7)
  VAR_13 |= VAR_4;
 if (VAR_9->mode & VAR_8)
  VAR_13 |= VAR_5;

 VAR_13 &= ~VAR_2;
 VAR_13 |= (VAR_15 << VAR_3);
 FUNC_3(VAR_11, VAR_6, VAR_13);
 return 0;
}
