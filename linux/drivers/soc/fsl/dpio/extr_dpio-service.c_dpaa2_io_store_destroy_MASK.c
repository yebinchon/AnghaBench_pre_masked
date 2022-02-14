
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_io_store {int max; struct dpaa2_io_store* alloced_addr; int paddr; int dev; } ;
struct dpaa2_dq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct dpaa2_io_store*) ;

void FUNC_2(struct dpaa2_io_store *VAR_1)
{
 FUNC_0(VAR_1->dev, VAR_1->paddr, sizeof(struct dpaa2_dq) * VAR_1->max,
    VAR_0);
 FUNC_1(VAR_1->alloced_addr);
 FUNC_1(VAR_1);
}
