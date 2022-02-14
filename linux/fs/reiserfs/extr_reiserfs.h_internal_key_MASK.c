
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int dummy; } ;
struct buffer_head {int dummy; } ;


 struct reiserfs_key* FUNC_0 (struct buffer_head*) ;

__attribute__((used)) static inline struct reiserfs_key *FUNC_1(struct buffer_head *VAR_0,
      int VAR_1)
{
 struct reiserfs_key *VAR_2 = FUNC_0(VAR_0);

 return &VAR_2[VAR_1];
}
