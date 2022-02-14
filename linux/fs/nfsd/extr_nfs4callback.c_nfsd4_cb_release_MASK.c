
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd4_callback {TYPE_1__* cb_ops; scalar_t__ cb_need_restart; } ;
struct TYPE_2__ {int (* release ) (struct nfsd4_callback*) ;} ;


 int FUNC_0 (struct nfsd4_callback*) ;
 int FUNC_1 (struct nfsd4_callback*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct nfsd4_callback *VAR_1 = VAR_0;

 if (VAR_1->cb_need_restart)
  FUNC_0(VAR_1);
 else
  VAR_1->cb_ops->release(VAR_1);

}
