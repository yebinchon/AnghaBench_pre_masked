
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_inode {int i_inode; int i_gl; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ,struct buffer_head**) ;
 scalar_t__ FUNC_2 (int ,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_3, u64 VAR_4,
      struct buffer_head **VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->i_gl, VAR_4, VAR_0, 0, VAR_5);
 if (!VAR_6 && FUNC_2(FUNC_0(&VAR_3->i_inode), *VAR_5, VAR_2)) {

  VAR_6 = -VAR_1;
 }

 return VAR_6;
}
