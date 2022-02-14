
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_req {size_t len; int node; void* buffer; struct rio_dev* rdev; } ;
struct rio_dev {int dummy; } ;
struct cm_dev {int tx_lock; int tx_reqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tx_req* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct cm_dev *VAR_2, struct rio_dev *VAR_3,
      void *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 struct tx_req *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->rdev = VAR_3;
 VAR_7->buffer = VAR_4;
 VAR_7->len = VAR_5;

 FUNC_2(&VAR_2->tx_lock, VAR_6);
 FUNC_1(&VAR_7->node, &VAR_2->tx_reqs);
 FUNC_3(&VAR_2->tx_lock, VAR_6);
 return 0;
}
