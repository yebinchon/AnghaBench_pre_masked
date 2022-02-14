
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;


 struct item_head* FUNC_0 (struct buffer_head const*) ;

__attribute__((used)) static inline struct item_head *FUNC_1(const struct buffer_head *VAR_0,
       int VAR_1)
{
 struct item_head *VAR_2 = FUNC_0(VAR_0);

 return &VAR_2[VAR_1];
}
