
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {scalar_t__ sequence; } ;
struct delta_ctx {int au_num; } ;
struct delta_au {struct vb2_v4l2_buffer vbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vb2_v4l2_buffer*,int ) ;

__attribute__((used)) static void FUNC_1(struct delta_ctx *VAR_2, struct delta_au *VAR_3, int VAR_4)
{
 struct vb2_v4l2_buffer *VAR_5;

 VAR_5 = &VAR_3->vbuf;
 VAR_5->sequence = VAR_2->au_num++;
 FUNC_0(VAR_5, VAR_4 ? VAR_1 : VAR_0);
}
