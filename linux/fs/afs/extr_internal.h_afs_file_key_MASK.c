
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct file {struct afs_file* private_data; } ;
struct afs_file {struct key* key; } ;



__attribute__((used)) static inline struct key *FUNC_0(struct file *VAR_0)
{
 struct afs_file *VAR_1 = VAR_0->private_data;

 return VAR_1->key;
}
