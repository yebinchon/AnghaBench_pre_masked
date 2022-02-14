
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct sun4i_csi_buffer {int list; } ;
struct sun4i_csi {int qlock; int buf_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct sun4i_csi* FUNC_3 (int ) ;
 struct sun4i_csi_buffer* FUNC_4 (struct vb2_buffer*) ;

__attribute__((used)) static void FUNC_5(struct vb2_buffer *VAR_0)
{
 struct sun4i_csi *VAR_1 = FUNC_3(VAR_0->vb2_queue);
 struct sun4i_csi_buffer *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_1->qlock, VAR_3);
 FUNC_0(&VAR_2->list, &VAR_1->buf_list);
 FUNC_2(&VAR_1->qlock, VAR_3);
}
