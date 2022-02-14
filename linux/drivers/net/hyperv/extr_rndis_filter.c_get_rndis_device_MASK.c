
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {int state; int mcast_work; int req_list; int request_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 struct rndis_device* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct rndis_device *FUNC_4(void)
{
 struct rndis_device *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct rndis_device), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_3(&VAR_3->request_lock);

 FUNC_0(&VAR_3->req_list);
 FUNC_1(&VAR_3->mcast_work, VAR_2);

 VAR_3->state = VAR_1;

 return VAR_3;
}
