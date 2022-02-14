
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_vid_cap {int pending_buf_q; } ;
struct fimc_vid_buffer {int list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct fimc_vid_cap *VAR_0,
       struct fimc_vid_buffer *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->pending_buf_q);
}
