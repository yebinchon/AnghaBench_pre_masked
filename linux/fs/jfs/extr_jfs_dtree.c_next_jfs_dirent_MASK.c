
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jfs_dirent {int name_len; } ;
typedef int loff_t ;



__attribute__((used)) static inline struct jfs_dirent *FUNC_0(struct jfs_dirent *VAR_0)
{
 return (struct jfs_dirent *)
  ((char *)VAR_0 +
   ((sizeof (struct jfs_dirent) + VAR_0->name_len + 1 +
     sizeof (loff_t) - 1) &
    ~(sizeof (loff_t) - 1)));
}
