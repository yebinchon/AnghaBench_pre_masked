
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int conf; } ;
struct ucsi_dp {TYPE_2__* con; int offset; int override; TYPE_1__ data; } ;
struct ucsi_control {int raw_cmd; } ;
struct TYPE_4__ {int ucsi; int num; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ,struct ucsi_control*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct ucsi_dp *VAR_0)
{
 u32 VAR_1 = FUNC_0(VAR_0->data.conf);
 struct ucsi_control VAR_2;

 if (!VAR_0->override)
  return 0;

 VAR_2.raw_cmd = FUNC_1(VAR_0->con->num, 1, VAR_0->offset, VAR_1);

 return FUNC_2(VAR_0->con->ucsi, &VAR_2, ((void*)0), 0);
}
