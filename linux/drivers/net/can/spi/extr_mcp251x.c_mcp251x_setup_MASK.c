
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct spi_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct spi_device *VAR_4)
{
 FUNC_1(VAR_3);

 FUNC_2(VAR_4, FUNC_0(0),
     VAR_0 | VAR_1 | VAR_2);
 FUNC_2(VAR_4, FUNC_0(1),
     VAR_1 | VAR_2);
 return 0;
}
