
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct gspca_dev {int qlock; int buf_list; } ;
struct gspca_buffer {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct gspca_buffer* FUNC_3 (struct vb2_buffer*) ;
 struct gspca_dev* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct vb2_buffer *VAR_0)
{
 struct gspca_dev *VAR_1 = FUNC_4(VAR_0->vb2_queue);
 struct gspca_buffer *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;

 FUNC_1(&VAR_1->qlock, VAR_3);
 FUNC_0(&VAR_2->list, &VAR_1->buf_list);
 FUNC_2(&VAR_1->qlock, VAR_3);
}
