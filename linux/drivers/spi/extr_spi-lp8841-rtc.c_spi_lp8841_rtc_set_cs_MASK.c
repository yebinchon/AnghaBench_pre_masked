
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_lp8841_rtc {int iomem; int state; } ;
struct spi_device {int master; } ;


 int VAR_0 ;
 struct spi_lp8841_rtc* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct spi_device *VAR_1, bool VAR_2)
{
 struct spi_lp8841_rtc *VAR_3 = FUNC_0(VAR_1->master);

 VAR_3->state = 0;
 FUNC_2(VAR_3->state, VAR_3->iomem);
 if (VAR_2) {
  FUNC_1(4, 5);
  VAR_3->state |= VAR_0;
  FUNC_2(VAR_3->state, VAR_3->iomem);
  FUNC_1(4, 5);
 }
}
