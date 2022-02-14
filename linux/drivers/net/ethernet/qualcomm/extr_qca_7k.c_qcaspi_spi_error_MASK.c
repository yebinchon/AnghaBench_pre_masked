
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int spi_err; } ;
struct qcaspi {scalar_t__ sync; TYPE_1__ stats; int net_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(struct qcaspi *VAR_2)
{
 if (VAR_2->sync != VAR_0)
  return;

 FUNC_0(VAR_2->net_dev, "spi error\n");
 VAR_2->sync = VAR_1;
 VAR_2->stats.spi_err++;
}
