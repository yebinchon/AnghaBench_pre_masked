
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camif_vp {int pending_buf_q; } ;
struct camif_buffer {int list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(struct camif_vp *VAR_0,
        struct camif_buffer *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->pending_buf_q);
}
