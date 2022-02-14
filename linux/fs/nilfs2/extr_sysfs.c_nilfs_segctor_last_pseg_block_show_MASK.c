
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_last_segment_lock; scalar_t__ ns_last_pseg; } ;
struct nilfs_segctor_attr {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,unsigned long long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t
FUNC_3(struct nilfs_segctor_attr *VAR_1,
        struct the_nilfs *VAR_2,
        char *VAR_3)
{
 sector_t VAR_4;

 FUNC_1(&VAR_2->ns_last_segment_lock);
 VAR_4 = VAR_2->ns_last_pseg;
 FUNC_2(&VAR_2->ns_last_segment_lock);

 return FUNC_0(VAR_3, VAR_0, "%llu\n",
   (unsigned long long)VAR_4);
}
