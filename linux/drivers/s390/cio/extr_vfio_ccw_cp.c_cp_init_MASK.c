
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cpa; int pfch; } ;
union orb {TYPE_2__ cmd; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int c64; } ;
struct TYPE_6__ {TYPE_1__ cmd; } ;
struct channel_program {int initialized; TYPE_3__ orb; struct device* mdev; int ccwchain_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct channel_program*) ;
 int FUNC_2 (TYPE_3__*,union orb*,int) ;

int FUNC_3(struct channel_program *VAR_1, struct device *VAR_2, union orb *VAR_3)
{
 int VAR_4;





 if (!VAR_3->cmd.pfch)
  return -VAR_0;

 FUNC_0(&VAR_1->ccwchain_list);
 FUNC_2(&VAR_1->orb, VAR_3, sizeof(*VAR_3));
 VAR_1->mdev = VAR_2;


 VAR_4 = FUNC_1(VAR_3->cmd.cpa, VAR_1);

 if (!VAR_4) {
  VAR_1->initialized = 1;




  VAR_1->orb.cmd.c64 = 1;
 }

 return VAR_4;
}
