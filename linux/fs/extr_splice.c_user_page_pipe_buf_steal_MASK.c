
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pipe_inode_info*,struct pipe_buffer*) ;

__attribute__((used)) static int FUNC_1(struct pipe_inode_info *VAR_2,
        struct pipe_buffer *VAR_3)
{
 if (!(VAR_3->flags & VAR_0))
  return 1;

 VAR_3->flags |= VAR_1;
 return FUNC_0(VAR_2, VAR_3);
}
