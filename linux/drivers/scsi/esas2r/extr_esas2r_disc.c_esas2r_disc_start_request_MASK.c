
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {scalar_t__ timeout; int req_list; int req_type; } ;
struct esas2r_adapter {int queue_lock; int defer_list; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static bool FUNC_5(struct esas2r_adapter *VAR_4,
          struct esas2r_request *VAR_5)
{
 unsigned long VAR_6;


 if (VAR_5->timeout < VAR_2)
  VAR_5->timeout = VAR_2;






 VAR_5->req_type = VAR_3;

 FUNC_2(&VAR_4->queue_lock, VAR_6);

 if (!FUNC_4(VAR_0, &VAR_4->flags) &&
     !FUNC_4(VAR_1, &VAR_4->flags))
  FUNC_0(VAR_4, VAR_5);
 else
  FUNC_1(&VAR_5->req_list, &VAR_4->defer_list);

 FUNC_3(&VAR_4->queue_lock, VAR_6);

 return 1;
}
