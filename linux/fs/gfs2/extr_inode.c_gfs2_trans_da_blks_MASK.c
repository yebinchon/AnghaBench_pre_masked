
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int dummy; } ;
struct gfs2_diradd {int nr_blocks; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gfs2_inode const*,int) ;

__attribute__((used)) static unsigned FUNC_1(const struct gfs2_inode *VAR_3,
       const struct gfs2_diradd *VAR_4,
       unsigned VAR_5)
{
 return VAR_4->nr_blocks + FUNC_0(VAR_3, VAR_4->nr_blocks) +
        (VAR_5 * VAR_0) + VAR_1 + VAR_2;
}
