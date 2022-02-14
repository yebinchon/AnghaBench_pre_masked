
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {int dummy; } ;
struct esas2r_adapter {int queue_lock; } ;


 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct esas2r_adapter *VAR_0,
        struct esas2r_request *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(VAR_0, VAR_1);

 FUNC_2(&VAR_0->queue_lock, VAR_2);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_0->queue_lock, VAR_2);
}
