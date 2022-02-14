
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_object {int event_mask; int events; int debug_id; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct fscache_object*) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (unsigned int,int *) ;
 scalar_t__ FUNC_4 (unsigned int,int *) ;

__attribute__((used)) static inline void FUNC_5(struct fscache_object *VAR_1,
           unsigned VAR_2)
{
 FUNC_0(VAR_2 >= VAR_0);




 if (!FUNC_3(VAR_2, &VAR_1->events) &&
     FUNC_4(VAR_2, &VAR_1->event_mask))
  FUNC_1(VAR_1);
}
