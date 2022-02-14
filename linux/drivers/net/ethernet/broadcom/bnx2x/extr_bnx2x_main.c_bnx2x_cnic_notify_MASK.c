
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_ctl_info {int cmd; int member_0; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct cnic_ctl_info*) ;

int FUNC_1(struct bnx2x *VAR_0, int VAR_1)
{
 struct cnic_ctl_info VAR_2 = {0};

 VAR_2.cmd = VAR_1;

 return FUNC_0(VAR_0, &VAR_2);
}
