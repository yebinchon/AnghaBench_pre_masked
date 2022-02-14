
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kwqe {int dummy; } ;
struct TYPE_2__ {scalar_t__ pg_arr; } ;
struct cnic_local {int kcq1; TYPE_1__ kwq_info; struct kwqe** kwq; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct cnic_dev*) ;
 int FUNC_1 (struct cnic_dev*,TYPE_1__*,int ,int) ;
 int FUNC_2 (struct cnic_dev*,int *,int) ;
 int FUNC_3 (struct cnic_dev*,int) ;
 int FUNC_4 (struct cnic_dev*) ;
 int FUNC_5 (struct cnic_dev*) ;

__attribute__((used)) static int FUNC_6(struct cnic_dev *VAR_1)
{
 struct cnic_local *VAR_2 = VAR_1->cnic_priv;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2->kwq_info, VAR_0, 1);
 if (VAR_3)
  goto error;
 VAR_2->kwq = (struct kwqe **) VAR_2->kwq_info.pg_arr;

 VAR_3 = FUNC_2(VAR_1, &VAR_2->kcq1, 1);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_3(VAR_1, 2);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  goto error;

 return 0;

error:
 FUNC_4(VAR_1);
 return VAR_3;
}
