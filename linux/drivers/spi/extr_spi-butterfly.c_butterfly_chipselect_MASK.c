
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; } ;
struct butterfly {int port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct spi_device*,int) ;
 scalar_t__ VAR_3 ;
 struct butterfly* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_4, int VAR_5)
{
 struct butterfly *VAR_6 = FUNC_2(VAR_4);


 if (VAR_5 != VAR_0)
  FUNC_1(VAR_4, VAR_4->mode & VAR_2);





 if (VAR_3 == VAR_1)
  VAR_5 = !VAR_5;

 FUNC_0(VAR_6->port, VAR_3, VAR_5 ? VAR_3 : 0);
}
