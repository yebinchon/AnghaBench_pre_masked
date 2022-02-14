
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {TYPE_1__* master; } ;
struct TYPE_2__ {scalar_t__ busy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct spi_device *VAR_1)
{
 if (VAR_1->master->busy)
  return -VAR_0;
 return 0;
}
