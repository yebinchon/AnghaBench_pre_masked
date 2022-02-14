
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int defer; } ;
struct nfs_cache_defer_req {TYPE_1__ req; int count; int completion; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nfs_cache_defer_req* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;

struct nfs_cache_defer_req *FUNC_3(void)
{
 struct nfs_cache_defer_req *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_2->completion);
  FUNC_2(&VAR_2->count, 1);
  VAR_2->req.defer = VAR_1;
 }
 return VAR_2;
}
