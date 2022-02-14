
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_cil_ctx {int discard_endio_work; } ;
struct bio {struct xfs_cil_ctx* bi_private; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(
 struct bio *VAR_2)
{
 struct xfs_cil_ctx *VAR_3 = VAR_2->bi_private;

 FUNC_0(&VAR_3->discard_endio_work, VAR_1);
 FUNC_2(VAR_0, &VAR_3->discard_endio_work);
 FUNC_1(VAR_2);
}
