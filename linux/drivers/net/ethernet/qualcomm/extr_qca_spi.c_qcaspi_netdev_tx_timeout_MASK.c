
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcaspi {scalar_t__ spi_thread; int sync; TYPE_2__* net_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int tx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,scalar_t__,scalar_t__) ;
 struct qcaspi* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_2)
{
 struct qcaspi *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_3->net_dev, "Transmit timeout at %ld, latency %ld\n",
      VAR_1, VAR_1 - FUNC_0(VAR_2));
 VAR_3->net_dev->stats.tx_errors++;

 VAR_3->sync = VAR_0;

 if (VAR_3->spi_thread)
  FUNC_3(VAR_3->spi_thread);
}
