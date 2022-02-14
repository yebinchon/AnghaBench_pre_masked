
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct gfs2_glock {int gl_name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gfs2_glock *VAR_1)
{
 wait_queue_head_t *VAR_2 = FUNC_1(&VAR_1->gl_name);

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_2, VAR_0, 1, &VAR_1->gl_name);
}
