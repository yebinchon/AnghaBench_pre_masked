
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcaspi {TYPE_1__* spi_thread; int intr_req; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t
FUNC_1(int VAR_2, void *VAR_3)
{
 struct qcaspi *VAR_4 = VAR_3;

 VAR_4->intr_req++;
 if (VAR_4->spi_thread &&
     VAR_4->spi_thread->state != VAR_1)
  FUNC_0(VAR_4->spi_thread);

 return VAR_0;
}
