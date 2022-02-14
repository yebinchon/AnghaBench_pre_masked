
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cgroup {int flags; } ;
struct TYPE_5__ {int frozen; int jobctl; TYPE_1__* sighand; } ;
struct TYPE_4__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cgroup*) ;
 int FUNC_2 (struct cgroup*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct cgroup* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int *) ;

void FUNC_10(bool VAR_5)
{
 struct cgroup *VAR_6;

 FUNC_5(&VAR_3);
 VAR_6 = FUNC_8(VAR_4);
 if (VAR_5 || !FUNC_9(VAR_0, &VAR_6->flags)) {
  FUNC_1(VAR_6);
  FUNC_2(VAR_6);
  FUNC_0(!VAR_4->frozen);
  VAR_4->frozen = 0;
 } else if (!(VAR_4->jobctl & VAR_1)) {
  FUNC_4(&VAR_4->sighand->siglock);
  VAR_4->jobctl |= VAR_1;
  FUNC_3(VAR_2);
  FUNC_6(&VAR_4->sighand->siglock);
 }
 FUNC_7(&VAR_3);
}
