
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int master; } ;
struct sh_sci_spi {TYPE_1__ bitbang; int membase; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct sh_sci_spi* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct sh_sci_spi*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct sh_sci_spi *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(&VAR_2->bitbang);
 FUNC_2(VAR_2, VAR_0, 0);
 FUNC_0(VAR_2->membase);
 FUNC_4(VAR_2->bitbang.master);
 return 0;
}
