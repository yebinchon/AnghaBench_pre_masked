
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct udf_inode_info {struct timespec64 i_crtime; } ;



__attribute__((used)) static void FUNC_0(struct udf_inode_info *VAR_0, struct timespec64 VAR_1)
{
 if (VAR_0->i_crtime.tv_sec > VAR_1.tv_sec ||
     (VAR_0->i_crtime.tv_sec == VAR_1.tv_sec &&
      VAR_0->i_crtime.tv_nsec > VAR_1.tv_nsec))
  VAR_0->i_crtime = VAR_1;
}
