
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct dt3155_priv {int width; int height; } ;


 struct dt3155_priv* FUNC_0 (int ) ;
 int FUNC_1 (struct vb2_buffer*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct vb2_buffer *VAR_0)
{
 struct dt3155_priv *VAR_1 = FUNC_0(VAR_0->vb2_queue);

 FUNC_1(VAR_0, 0, VAR_1->width * VAR_1->height);
 return 0;
}
