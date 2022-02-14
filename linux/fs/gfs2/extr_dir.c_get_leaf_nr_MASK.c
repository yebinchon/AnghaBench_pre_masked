
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct gfs2_inode {int dummy; } ;
typedef int __be64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct gfs2_inode*) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_0, u32 VAR_1,
         u64 *VAR_2)
{
 __be64 *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_0);
 VAR_4 = FUNC_0(VAR_3);

 if (!VAR_4)
  *VAR_2 = FUNC_1(*(VAR_3 + VAR_1));

 return VAR_4;
}
