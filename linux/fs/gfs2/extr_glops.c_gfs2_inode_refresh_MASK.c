
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_flags; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct gfs2_inode*,int ) ;
 int FUNC_3 (struct gfs2_inode*,struct buffer_head**) ;

int FUNC_4(struct gfs2_inode *VAR_1)
{
 struct buffer_head *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2->b_data);
 FUNC_0(VAR_2);
 FUNC_1(VAR_0, &VAR_1->i_flags);

 return VAR_3;
}
