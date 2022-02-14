
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_spi_card {int packet_work; int workqueue; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct if_spi_card *VAR_3 = VAR_2;

 FUNC_0(VAR_3->workqueue, &VAR_3->packet_work);

 return VAR_0;
}
