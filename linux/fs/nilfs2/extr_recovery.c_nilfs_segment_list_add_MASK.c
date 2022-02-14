
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_segment_entry {int list; int segnum; } ;
struct list_head {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct nilfs_segment_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct list_head *VAR_2, __u64 VAR_3)
{
 struct nilfs_segment_entry *VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);

 if (FUNC_3(!VAR_4))
  return -VAR_0;

 VAR_4->segnum = VAR_3;
 FUNC_0(&VAR_4->list);
 FUNC_2(&VAR_4->list, VAR_2);
 return 0;
}
