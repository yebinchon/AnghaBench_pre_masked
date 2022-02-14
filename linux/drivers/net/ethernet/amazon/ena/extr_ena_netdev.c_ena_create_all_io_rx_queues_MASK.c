
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ena_com_dev {int dummy; } ;
struct ena_adapter {int num_queues; TYPE_2__* ena_napi; struct ena_com_dev* ena_dev; } ;
struct TYPE_3__ {int work; } ;
struct TYPE_4__ {TYPE_1__ dim; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ena_com_dev*,int ) ;
 int FUNC_4 (struct ena_adapter*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct ena_adapter *VAR_1)
{
 struct ena_com_dev *VAR_2 = VAR_1->ena_dev;
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_queues; VAR_4++) {
  VAR_3 = FUNC_4(VAR_1, VAR_4);
  if (VAR_3)
   goto create_err;
  FUNC_1(&VAR_1->ena_napi[VAR_4].dim.work, VAR_0);
 }

 return 0;

create_err:
 while (VAR_4--) {
  FUNC_2(&VAR_1->ena_napi[VAR_4].dim.work);
  FUNC_3(VAR_2, FUNC_0(VAR_4));
 }

 return VAR_3;
}
