
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {TYPE_1__* parent; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct net* data; } ;



__attribute__((used)) static inline struct net *FUNC_0(struct proc_dir_entry *VAR_0)
{
 return VAR_0->parent->data;
}
