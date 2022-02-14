
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entry; } ;
struct qede_dev {TYPE_1__ rdma_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qede_dev*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qede_dev*) ;
 int FUNC_6 (struct qede_dev*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_7(struct qede_dev *VAR_2, bool VAR_3)
{
 int VAR_4;

 if (!FUNC_6(VAR_2))
  return 0;


 if (VAR_3)
  return 0;

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_0(&VAR_2->rdma_info.entry);
 FUNC_3(&VAR_1);
 FUNC_2(&VAR_2->rdma_info.entry, &VAR_0);
 FUNC_1(VAR_2);
 FUNC_4(&VAR_1);

 return VAR_4;
}
