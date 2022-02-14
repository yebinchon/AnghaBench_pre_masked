
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct mmp_struct {int mmp_bdevname; int mmp_nodename; int mmp_time; } ;


 int FUNC_0 (struct super_block*,char const*,unsigned int,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct super_block *VAR_0, struct mmp_struct *VAR_1,
      const char *VAR_2, unsigned int VAR_3, const char *VAR_4)
{
 FUNC_0(VAR_0, VAR_2, VAR_3, "%s", VAR_4);
 FUNC_0(VAR_0, VAR_2, VAR_3,
         "MMP failure info: last update time: %llu, last update "
         "node: %s, last update device: %s",
         (long long unsigned int) FUNC_1(VAR_1->mmp_time),
         VAR_1->mmp_nodename, VAR_1->mmp_bdevname);
}
