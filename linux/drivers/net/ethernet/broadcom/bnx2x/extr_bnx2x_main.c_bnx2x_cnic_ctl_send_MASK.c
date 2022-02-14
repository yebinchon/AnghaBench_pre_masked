
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_ops {int (* cnic_ctl ) (int ,struct cnic_ctl_info*) ;} ;
struct cnic_ctl_info {int dummy; } ;
struct bnx2x {int cnic_mutex; int cnic_data; int cnic_ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cnic_ops* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct cnic_ctl_info*) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_0, struct cnic_ctl_info *VAR_1)
{
 struct cnic_ops *VAR_2;
 int VAR_3 = 0;

 FUNC_1(&VAR_0->cnic_mutex);
 VAR_2 = FUNC_3(VAR_0->cnic_ops,
       FUNC_0(&VAR_0->cnic_mutex));
 if (VAR_2)
  VAR_3 = VAR_2->cnic_ctl(VAR_0->cnic_data, VAR_1);
 FUNC_2(&VAR_0->cnic_mutex);

 return VAR_3;
}
