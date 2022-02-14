
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct notifier_block {int dummy; } ;
struct in_ifaddr {int ifa_local; } ;
struct TYPE_4__ {int rq_server; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (int ,struct sockaddr*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_6,
 unsigned long VAR_7, void *VAR_8)
{
 struct in_ifaddr *VAR_9 = (struct in_ifaddr *)VAR_8;
 struct sockaddr_in VAR_10;

 if ((VAR_7 != VAR_1) ||
     !FUNC_1(&VAR_3))
  goto out;

 if (VAR_5) {
  FUNC_2("lockd_inetaddr_event: removed %pI4\n",
   &VAR_9->ifa_local);
  VAR_10.sin_family = VAR_0;
  VAR_10.sin_addr.s_addr = VAR_9->ifa_local;
  FUNC_3(VAR_5->rq_server,
   (struct sockaddr *)&VAR_10);
 }
 FUNC_0(&VAR_3);
 FUNC_4(&VAR_4);

out:
 return VAR_2;
}
