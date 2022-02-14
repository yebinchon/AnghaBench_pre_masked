
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct lantiq_ssc_spi {int fpi_clk; int spi_clk; int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lantiq_ssc_spi*) ;
 int FUNC_4 (struct lantiq_ssc_spi*,int ,int ) ;
 struct lantiq_ssc_spi* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct lantiq_ssc_spi*) ;
 int FUNC_7 (struct lantiq_ssc_spi*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct lantiq_ssc_spi *VAR_3 = FUNC_5(VAR_2);

 FUNC_4(VAR_3, 0, VAR_1);
 FUNC_4(VAR_3, 0, VAR_0);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3);
 FUNC_3(VAR_3);

 FUNC_2(VAR_3->wq);
 FUNC_0(VAR_3->spi_clk);
 FUNC_1(VAR_3->fpi_clk);

 return 0;
}
