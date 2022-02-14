
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_canfd_channel {int base; } ;
struct canfd_frame {scalar_t__ data; int len; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct rcar_canfd_channel *VAR_0,
    struct canfd_frame *VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_4 = FUNC_0(VAR_1->len, sizeof(u32));
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_1(VAR_0->base, VAR_2 + (VAR_3 * sizeof(u32)),
     *((u32 *)VAR_1->data + VAR_3));
}
