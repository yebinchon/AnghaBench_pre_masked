
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_dir_entry {int rec_len; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct nilfs_dir_entry *FUNC_1(struct nilfs_dir_entry *VAR_0)
{
 return (struct nilfs_dir_entry *)((char *)VAR_0 +
       FUNC_0(VAR_0->rec_len));
}
