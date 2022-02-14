
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int dummy; } ;
struct nilfs_dev_attr {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct the_nilfs*,scalar_t__*) ;
 int FUNC_1 (char*,int ,char*,unsigned long long) ;

__attribute__((used)) static
ssize_t FUNC_2(struct nilfs_dev_attr *VAR_1,
       struct the_nilfs *VAR_2,
       char *VAR_3)
{
 sector_t VAR_4 = 0;

 FUNC_0(VAR_2, &VAR_4);
 return FUNC_1(VAR_3, VAR_0, "%llu\n",
   (unsigned long long)VAR_4);
}
