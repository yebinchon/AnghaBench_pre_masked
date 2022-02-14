
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ena_adapter {int num_queues; int ena_dev; TYPE_2__* ena_napi; } ;
struct TYPE_3__ {int work; } ;
struct TYPE_4__ {TYPE_1__ dim; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ena_adapter *VAR_0)
{
 u16 VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++) {
  VAR_1 = FUNC_0(VAR_2);
  FUNC_1(&VAR_0->ena_napi[VAR_2].dim.work);
  FUNC_2(VAR_0->ena_dev, VAR_1);
 }
}
