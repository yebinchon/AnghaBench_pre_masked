
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_qspi {int refclk; } ;
struct spi_device {int max_speed_hz; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct zynq_qspi*,int ) ;
 int FUNC_2 (struct zynq_qspi*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct zynq_qspi *VAR_8, struct spi_device *VAR_9)
{
 u32 VAR_10, VAR_11 = 0;
 while ((VAR_11 < VAR_2) &&
        (FUNC_0(VAR_8->refclk) / (2 << VAR_11)) >
  VAR_9->max_speed_hz)
  VAR_11++;

 VAR_10 = FUNC_1(VAR_8, VAR_7);


 VAR_10 &= (~VAR_5) &
        (~VAR_6);
 if (VAR_9->mode & VAR_0)
  VAR_10 |= VAR_5;
 if (VAR_9->mode & VAR_1)
  VAR_10 |= VAR_6;

 VAR_10 &= ~VAR_4;
 VAR_10 |= (VAR_11 << VAR_3);
 FUNC_2(VAR_8, VAR_7, VAR_10);

 return 0;
}
