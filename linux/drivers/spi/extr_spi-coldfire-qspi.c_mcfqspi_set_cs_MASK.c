
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int chip_select; int master; } ;
struct mcfqspi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mcfqspi*,int ,int) ;
 int FUNC_1 (struct mcfqspi*,int ,int) ;
 struct mcfqspi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_1, bool VAR_2)
{
 struct mcfqspi *VAR_3 = FUNC_2(VAR_1->master);
 bool VAR_4 = VAR_1->mode & VAR_0;

 if (VAR_2)
  FUNC_1(VAR_3, VAR_1->chip_select, VAR_4);
 else
  FUNC_0(VAR_3, VAR_1->chip_select, VAR_4);
}
