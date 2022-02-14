
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int committed; } ;
struct TYPE_4__ {int list; } ;
struct nfs_direct_req {int lock; int work; TYPE_1__ verf; TYPE_2__ mds_cinfo; int completion; int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 struct nfs_direct_req* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline struct nfs_direct_req *FUNC_7(void)
{
 struct nfs_direct_req *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_5(&VAR_4->kref);
 FUNC_4(&VAR_4->kref);
 FUNC_2(&VAR_4->completion);
 FUNC_0(&VAR_4->mds_cinfo.list);
 VAR_4->verf.committed = VAR_1;
 FUNC_1(&VAR_4->work, VAR_3);
 FUNC_6(&VAR_4->lock);

 return VAR_4;
}
