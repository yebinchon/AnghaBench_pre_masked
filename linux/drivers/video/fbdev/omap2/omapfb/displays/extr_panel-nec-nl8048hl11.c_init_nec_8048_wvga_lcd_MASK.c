
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct TYPE_3__ {int dat; int addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct spi_device*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_1)
{
 unsigned int VAR_2;


 for (VAR_2 = 0; VAR_2 < (FUNC_0(VAR_0) - 1); VAR_2++)
  FUNC_1(VAR_1, VAR_0[VAR_2].addr,
    VAR_0[VAR_2].dat);
 FUNC_2(20);
 FUNC_1(VAR_1, VAR_0[VAR_2].addr,
    VAR_0[VAR_2].dat);
 return 0;
}
