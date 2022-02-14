
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_rnode {int dummy; } ;
struct csio_lnode {int dummy; } ;
struct csio_hw {int rnode_mempool; } ;


 int FUNC_0 (struct csio_lnode*,int ) ;
 int VAR_0 ;
 struct csio_hw* FUNC_1 (struct csio_lnode*) ;
 scalar_t__ FUNC_2 (struct csio_rnode*,struct csio_lnode*) ;
 struct csio_rnode* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct csio_rnode*,int ) ;
 int FUNC_5 (struct csio_rnode*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct csio_rnode *
FUNC_6(struct csio_lnode *VAR_3)
{
 struct csio_hw *VAR_4 = FUNC_1(VAR_3);

 struct csio_rnode *VAR_5 = FUNC_3(VAR_4->rnode_mempool, VAR_0);
 if (!VAR_5)
  goto err;

 FUNC_5(VAR_5, 0, sizeof(struct csio_rnode));
 if (FUNC_2(VAR_5, VAR_3))
  goto err_free;

 FUNC_0(VAR_3, VAR_1);

 return VAR_5;

err_free:
 FUNC_4(VAR_5, VAR_4->rnode_mempool);
err:
 FUNC_0(VAR_3, VAR_2);
 return ((void*)0);
}
