
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {unsigned int ns_sb_update_freq; int ns_sem; int ns_sb; } ;
struct nilfs_superblock_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct nilfs_superblock_attr *VAR_3,
         struct the_nilfs *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(FUNC_3(VAR_5), 0, &VAR_7);
 if (VAR_8) {
  FUNC_2(VAR_4->ns_sb, VAR_0,
     "unable to convert string: err=%d", VAR_8);
  return VAR_8;
 }

 if (VAR_7 < VAR_2) {
  VAR_7 = VAR_2;
  FUNC_2(VAR_4->ns_sb, VAR_1,
     "superblock update frequency cannot be lesser than 10 seconds");
 }

 FUNC_0(&VAR_4->ns_sem);
 VAR_4->ns_sb_update_freq = VAR_7;
 FUNC_4(&VAR_4->ns_sem);

 return VAR_6;
}
