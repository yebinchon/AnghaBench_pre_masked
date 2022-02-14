
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_rnode {int lnp; } ;
struct csio_hw {int rnode_mempool; } ;


 int FUNC_0 (int ,int ) ;
 struct csio_hw* FUNC_1 (int ) ;
 int FUNC_2 (struct csio_rnode*) ;
 int FUNC_3 (struct csio_rnode*) ;
 int FUNC_4 (struct csio_rnode*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct csio_rnode *VAR_1)
{
 struct csio_hw *VAR_2 = FUNC_1(FUNC_3(VAR_1));

 FUNC_2(VAR_1);
 FUNC_0(VAR_1->lnp, VAR_0);
 FUNC_4(VAR_1, VAR_2->rnode_mempool);
}
