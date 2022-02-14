
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_output {int pending_bufs; } ;
struct camss_buffer {int queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct vfe_output *VAR_0,
    struct camss_buffer *VAR_1)
{
 FUNC_0(&VAR_1->queue);
 FUNC_1(&VAR_1->queue, &VAR_0->pending_bufs);
}
