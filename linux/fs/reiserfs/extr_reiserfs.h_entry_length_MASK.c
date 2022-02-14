
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_de_head {int dummy; } ;
struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;


 struct reiserfs_de_head* FUNC_0 (struct buffer_head const*,struct item_head const*) ;
 int FUNC_1 (struct reiserfs_de_head*) ;
 int FUNC_2 (struct item_head const*) ;

__attribute__((used)) static inline int FUNC_3(const struct buffer_head *VAR_0,
          const struct item_head *VAR_1, int VAR_2)
{
 struct reiserfs_de_head *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1) + VAR_2;
 if (VAR_2)
  return FUNC_1(VAR_3 - 1) - FUNC_1(VAR_3);

 return FUNC_2(VAR_1) - FUNC_1(VAR_3);
}
