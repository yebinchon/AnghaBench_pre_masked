
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_mport {int dummy; } ;
struct cm_dev {int rx_work; int rx_wq; int mport; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rio_mport *VAR_0, void *VAR_1,
    int VAR_2, int VAR_3)
{
 struct cm_dev *VAR_4 = VAR_1;

 if (FUNC_1(VAR_4->mport) && !FUNC_2(&VAR_4->rx_work))
  FUNC_0(VAR_4->rx_wq, &VAR_4->rx_work);
}
