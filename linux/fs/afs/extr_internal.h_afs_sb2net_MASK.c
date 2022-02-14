
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct afs_net {int dummy; } ;
struct TYPE_2__ {int net_ns; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 struct afs_net* FUNC_1 (int ) ;

__attribute__((used)) static inline struct afs_net *FUNC_2(struct super_block *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0)->net_ns);
}
