
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int dummy; } ;
struct imx_media_buffer {int list; } ;


 int FUNC_0 (int *) ;
 struct imx_media_buffer* FUNC_1 (struct vb2_buffer*) ;

__attribute__((used)) static int FUNC_2(struct vb2_buffer *VAR_0)
{
 struct imx_media_buffer *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->list);

 return 0;
}
