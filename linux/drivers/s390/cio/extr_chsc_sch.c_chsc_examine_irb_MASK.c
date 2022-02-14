
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cstat; } ;
struct TYPE_7__ {TYPE_1__ cmd; } ;
struct TYPE_6__ {TYPE_3__ scsw; } ;
struct chsc_request {TYPE_2__ irb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct chsc_request *VAR_9)
{
 int VAR_10;

 if (!(FUNC_1(&VAR_9->irb.scsw) & VAR_8))
  return -VAR_1;
 VAR_10 = FUNC_0(&VAR_9->irb.scsw) & VAR_3;
 VAR_9->irb.scsw.cmd.cstat &= ~VAR_3;
 if (FUNC_0(&VAR_9->irb.scsw) == 0)
  return 0;
 if (!VAR_10)
  return 0;
 if (FUNC_0(&VAR_9->irb.scsw) & VAR_6)
  return -VAR_1;
 if (FUNC_0(&VAR_9->irb.scsw) & VAR_7)
  return -VAR_2;
 if (FUNC_0(&VAR_9->irb.scsw) & VAR_5)
  return -VAR_0;
 if (FUNC_0(&VAR_9->irb.scsw) & VAR_4)
  return -VAR_0;
 return -VAR_1;
}
