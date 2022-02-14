
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int dummy; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int __be64 ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_2 (int *,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_0, __be64 *VAR_1,
     unsigned int VAR_2)
{
 struct buffer_head *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_3);
 if (!VAR_4) {
  FUNC_2(VAR_1, VAR_3->b_data + sizeof(struct gfs2_dinode), VAR_2);
  FUNC_0(VAR_3);
 }

 return (VAR_4) ? VAR_4 : VAR_2;
}
