
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_tty {scalar_t__ credits; TYPE_1__* gbphy_dev; int credits_complete; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct gb_tty *VAR_3)
{
 int VAR_4;

 if (VAR_3->credits == VAR_2)
  return 0;

 VAR_4 = FUNC_2(&VAR_3->credits_complete,
   FUNC_1(VAR_1));
 if (!VAR_4) {
  FUNC_0(&VAR_3->gbphy_dev->dev,
   "time out waiting for credits\n");
  return -VAR_0;
 }

 return 0;
}
