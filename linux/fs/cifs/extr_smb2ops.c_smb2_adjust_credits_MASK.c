
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_credits {int value; scalar_t__ instance; } ;
struct TCP_Server_Info {scalar_t__ reconnect_instance; int request_q; int req_lock; int credits; } ;


 int FUNC_0 (unsigned int const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct TCP_Server_Info *VAR_4,
      struct cifs_credits *VAR_5,
      const unsigned int VAR_6)
{
 int VAR_7 = FUNC_0(VAR_6, VAR_2);

 if (!VAR_5->value || VAR_5->value == VAR_7)
  return 0;

 if (VAR_5->value < VAR_7) {
  FUNC_1(1, "request has less credits (%d) than required (%d)",
     VAR_5->value, VAR_7);
  return -VAR_1;
 }

 FUNC_3(&VAR_4->req_lock);

 if (VAR_4->reconnect_instance != VAR_5->instance) {
  FUNC_4(&VAR_4->req_lock);
  FUNC_2(VAR_3, "trying to return %d credits to old session\n",
    VAR_5->value - VAR_7);
  return -VAR_0;
 }

 VAR_4->credits += VAR_5->value - VAR_7;
 FUNC_4(&VAR_4->req_lock);
 FUNC_5(&VAR_4->request_q);
 VAR_5->value = VAR_7;
 return 0;
}
