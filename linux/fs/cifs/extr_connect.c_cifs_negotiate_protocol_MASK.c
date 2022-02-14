
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_ses {struct TCP_Server_Info* server; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* negotiate ) (unsigned int const,struct cifs_ses*) ;int (* need_neg ) (struct TCP_Server_Info*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct TCP_Server_Info*) ;
 int FUNC_3 (unsigned int const,struct cifs_ses*) ;

int
FUNC_4(const unsigned int VAR_5, struct cifs_ses *VAR_6)
{
 int VAR_7 = 0;
 struct TCP_Server_Info *VAR_8 = VAR_6->server;

 if (!VAR_8->ops->need_neg || !VAR_8->ops->negotiate)
  return -VAR_3;


 if (!VAR_8->ops->need_neg(VAR_8))
  return 0;

 VAR_7 = VAR_8->ops->negotiate(VAR_5, VAR_6);
 if (VAR_7 == 0) {
  FUNC_0(&VAR_4);
  if (VAR_8->tcpStatus == VAR_1)
   VAR_8->tcpStatus = VAR_0;
  else
   VAR_7 = -VAR_2;
  FUNC_1(&VAR_4);
 }

 return VAR_7;
}
