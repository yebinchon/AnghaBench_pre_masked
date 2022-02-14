
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_bm_pool {int buf_size; int id; } ;
struct mvpp2 {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mvpp2*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mvpp2 *VAR_1,
          struct mvpp2_bm_pool *VAR_2,
          int VAR_3)
{
 u32 VAR_4;

 VAR_2->buf_size = VAR_3;

 VAR_4 = FUNC_0(VAR_3, 1 << VAR_0);
 FUNC_2(VAR_1, FUNC_1(VAR_2->id), VAR_4);
}
