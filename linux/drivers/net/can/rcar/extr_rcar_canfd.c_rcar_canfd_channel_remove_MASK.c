
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rcar_canfd_global {struct rcar_canfd_channel** ch; } ;
struct rcar_canfd_channel {int ndev; int napi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rcar_canfd_global *VAR_0, u32 VAR_1)
{
 struct rcar_canfd_channel *VAR_2 = VAR_0->ch[VAR_1];

 if (VAR_2) {
  FUNC_2(VAR_2->ndev);
  FUNC_1(&VAR_2->napi);
  FUNC_0(VAR_2->ndev);
 }
}
