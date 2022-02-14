
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gfs2_inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct gfs2_inode*,int ,struct buffer_head**) ;
 int FUNC_1 (struct gfs2_inode*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct gfs2_inode *VAR_0, u32 VAR_1,
     struct buffer_head **VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);

 return VAR_4;
}
