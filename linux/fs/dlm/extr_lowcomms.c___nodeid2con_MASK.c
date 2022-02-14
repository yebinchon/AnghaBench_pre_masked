
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int nodeid; int rx_action; int connect_action; int rwork; int swork; int writequeue_lock; int writequeue; int sock_mutex; int list; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct connection* FUNC_2 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_3 (int *,int *) ;
 struct connection* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct connection *FUNC_8(int VAR_4, gfp_t VAR_5)
{
 struct connection *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 || !VAR_5)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_0, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_6(VAR_4);
 FUNC_3(&VAR_6->list, &VAR_1[VAR_7]);

 VAR_6->nodeid = VAR_4;
 FUNC_5(&VAR_6->sock_mutex);
 FUNC_0(&VAR_6->writequeue);
 FUNC_7(&VAR_6->writequeue_lock);
 FUNC_1(&VAR_6->swork, VAR_3);
 FUNC_1(&VAR_6->rwork, VAR_2);


 if (VAR_6->nodeid) {
  struct connection *VAR_8 = FUNC_2(0);

  VAR_6->connect_action = VAR_8->connect_action;
  if (!VAR_6->rx_action)
   VAR_6->rx_action = VAR_8->rx_action;
 }

 return VAR_6;
}
