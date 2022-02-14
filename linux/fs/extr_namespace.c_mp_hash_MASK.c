
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;
struct dentry {int dummy; } ;


 unsigned long VAR_0 ;
 struct hlist_head* VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static inline struct hlist_head *FUNC_0(struct dentry *VAR_4)
{
 unsigned long VAR_5 = ((unsigned long)VAR_4 / VAR_0);
 VAR_5 = VAR_5 + (VAR_5 >> VAR_3);
 return &VAR_1[VAR_5 & VAR_2];
}
