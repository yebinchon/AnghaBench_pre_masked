
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_network {int work_go_offline; int work_go_online; struct ipw_hardware* hardware; int close_lock; int lock; } ;
struct ipw_hardware {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_hardware*,struct ipw_network*) ;
 struct ipw_network* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct ipw_network *FUNC_5(struct ipw_hardware *VAR_3)
{
 struct ipw_network *VAR_4 =
  FUNC_2(sizeof(struct ipw_network), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 FUNC_4(&VAR_4->lock);
 FUNC_3(&VAR_4->close_lock);

 VAR_4->hardware = VAR_3;

 FUNC_0(&VAR_4->work_go_online, VAR_2);
 FUNC_0(&VAR_4->work_go_offline, VAR_1);

 FUNC_1(VAR_3, VAR_4);

 return VAR_4;
}
