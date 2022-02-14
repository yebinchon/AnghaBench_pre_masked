
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {scalar_t__ tv_sec; unsigned int tv_nsec; } ;
struct super_block {unsigned int s_time_gran; scalar_t__ s_time_min; scalar_t__ s_time_max; } ;
struct inode {struct super_block* i_sb; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*,unsigned int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

struct timespec64 FUNC_3(struct timespec64 VAR_1, struct inode *VAR_2)
{
 struct super_block *VAR_3 = VAR_2->i_sb;
 unsigned int VAR_4 = VAR_3->s_time_gran;

 VAR_1.tv_sec = FUNC_1(VAR_1.tv_sec, VAR_3->s_time_min, VAR_3->s_time_max);
 if (FUNC_2(VAR_1.tv_sec == VAR_3->s_time_max || VAR_1.tv_sec == VAR_3->s_time_min))
  VAR_1.tv_nsec = 0;


 if (VAR_4 == 1)
  ;
 else if (VAR_4 == VAR_0)
  VAR_1.tv_nsec = 0;
 else if (VAR_4 > 1 && VAR_4 < VAR_0)
  VAR_1.tv_nsec -= VAR_1.tv_nsec % VAR_4;
 else
  FUNC_0(1, "invalid file time granularity: %u", VAR_4);
 return VAR_1;
}
