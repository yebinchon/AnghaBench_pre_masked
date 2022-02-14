
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_node {int dummy; } ;
struct virtual_item {int dummy; } ;
struct super_block {unsigned long s_blocksize; } ;
struct direntry_uarea {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u16 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_5, struct buffer_head *VAR_6)
{
 int VAR_7;
 int VAR_8;
 unsigned long VAR_9 = VAR_5->s_blocksize;



 VAR_7 = (VAR_9 - VAR_0) / (VAR_2 + VAR_3);
 VAR_8 = (VAR_9 - VAR_0 - VAR_2) /
     (VAR_1 + 1);

 return sizeof(struct virtual_node) +
     FUNC_0(VAR_7 * sizeof(struct virtual_item),
  sizeof(struct virtual_item) + sizeof(struct direntry_uarea) +
  (VAR_8 - 1) * sizeof(__u16));
}
