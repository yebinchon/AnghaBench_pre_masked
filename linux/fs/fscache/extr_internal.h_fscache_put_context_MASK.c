
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_cookie {int netfs_data; TYPE_1__* def; } ;
struct TYPE_2__ {int (* put_context ) (int ,void*) ;} ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static inline
void FUNC_1(struct fscache_cookie *VAR_0, void *VAR_1)
{
 if (VAR_0->def->put_context)
  VAR_0->def->put_context(VAR_0->netfs_data, VAR_1);
}
