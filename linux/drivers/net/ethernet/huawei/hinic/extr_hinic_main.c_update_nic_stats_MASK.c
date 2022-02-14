
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_dev {int * txqs; int * rxqs; int hwdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hinic_dev*,int *) ;
 int FUNC_2 (struct hinic_dev*,int *) ;

__attribute__((used)) static void FUNC_3(struct hinic_dev *VAR_0)
{
 int VAR_1, VAR_2 = FUNC_0(VAR_0->hwdev);

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  FUNC_1(VAR_0, &VAR_0->rxqs[VAR_1]);

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  FUNC_2(VAR_0, &VAR_0->txqs[VAR_1]);
}
