
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int buffers; struct pipe_inode_info* bufs; scalar_t__ tmp_page; scalar_t__ ops; int user; } ;
struct pipe_buffer {int buffers; struct pipe_buffer* bufs; scalar_t__ tmp_page; scalar_t__ ops; int user; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pipe_inode_info*) ;
 int FUNC_4 (struct pipe_inode_info*,struct pipe_inode_info*) ;

void FUNC_5(struct pipe_inode_info *VAR_0)
{
 int VAR_1;

 (void) FUNC_1(VAR_0->user, VAR_0->buffers, 0);
 FUNC_2(VAR_0->user);
 for (VAR_1 = 0; VAR_1 < VAR_0->buffers; VAR_1++) {
  struct pipe_buffer *VAR_2 = VAR_0->bufs + VAR_1;
  if (VAR_2->ops)
   FUNC_4(VAR_0, VAR_2);
 }
 if (VAR_0->tmp_page)
  FUNC_0(VAR_0->tmp_page);
 FUNC_3(VAR_0->bufs);
 FUNC_3(VAR_0);
}
