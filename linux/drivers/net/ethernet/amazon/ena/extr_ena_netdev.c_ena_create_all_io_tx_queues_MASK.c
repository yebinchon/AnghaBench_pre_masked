
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_dev {int dummy; } ;
struct ena_adapter {int num_queues; struct ena_com_dev* ena_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ena_com_dev*,int ) ;
 int FUNC_2 (struct ena_adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct ena_adapter *VAR_0)
{
 struct ena_com_dev *VAR_1 = VAR_0->ena_dev;
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_queues; VAR_3++) {
  VAR_2 = FUNC_2(VAR_0, VAR_3);
  if (VAR_2)
   goto create_err;
 }

 return 0;

create_err:
 while (VAR_3--)
  FUNC_1(VAR_1, FUNC_0(VAR_3));

 return VAR_2;
}
