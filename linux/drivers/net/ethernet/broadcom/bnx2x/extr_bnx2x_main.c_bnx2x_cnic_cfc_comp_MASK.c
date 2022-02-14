
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int cid; int error; } ;
struct TYPE_4__ {TYPE_1__ comp; } ;
struct cnic_ctl_info {TYPE_2__ data; int cmd; int member_0; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*,struct cnic_ctl_info*) ;
 int FUNC_1 (struct bnx2x*,int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_1, int VAR_2, u8 VAR_3)
{
 struct cnic_ctl_info VAR_4 = {0};


 VAR_4.cmd = VAR_0;
 VAR_4.data.comp.cid = VAR_2;
 VAR_4.data.comp.error = VAR_3;

 FUNC_0(VAR_1, &VAR_4);
 FUNC_1(VAR_1, 0);
}
