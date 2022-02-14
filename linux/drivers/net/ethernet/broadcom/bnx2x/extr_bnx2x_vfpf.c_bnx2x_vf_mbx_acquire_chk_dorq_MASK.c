
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_virtf {int dummy; } ;
struct bnx2x_vf_mbx {TYPE_1__* msg; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {int acquire; } ;
struct TYPE_3__ {TYPE_2__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (struct bnx2x*,int *) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_2,
      struct bnx2x_virtf *VAR_3,
      struct bnx2x_vf_mbx *VAR_4)
{



 if (FUNC_0(VAR_2, &VAR_4->msg->req,
      VAR_0))
  return 0;


 if (FUNC_1(VAR_2, &VAR_4->msg->req.acquire))
  return 0;

 return -VAR_1;
}
