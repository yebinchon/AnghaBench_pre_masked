
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int req; } ;
struct f_uas {int flags; TYPE_1__ cmd; int ep_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct f_uas *VAR_2)
{
 int VAR_3;

 if (VAR_2->flags & VAR_1)
  return 0;

 VAR_3 = FUNC_0(VAR_2->ep_out, VAR_2->cmd.req, VAR_0);
 if (!VAR_3)
  VAR_2->flags |= VAR_1;
 return VAR_3;
}
