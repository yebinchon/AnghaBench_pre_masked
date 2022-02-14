
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct team {struct list_head* qom_lists; } ;
struct list_head {int dummy; } ;



__attribute__((used)) static struct list_head *FUNC_0(struct team *VAR_0, u16 VAR_1)
{
 return &VAR_0->qom_lists[VAR_1 - 1];
}
