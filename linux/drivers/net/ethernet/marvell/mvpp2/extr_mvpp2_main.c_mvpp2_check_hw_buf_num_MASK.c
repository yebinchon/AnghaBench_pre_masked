
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_bm_pool {int id; } ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mvpp2*,int ) ;

__attribute__((used)) static int FUNC_3(struct mvpp2 *VAR_2, struct mvpp2_bm_pool *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 += FUNC_2(VAR_2, FUNC_1(VAR_3->id)) &
        VAR_0;
 VAR_4 += FUNC_2(VAR_2, FUNC_0(VAR_3->id)) &
        VAR_1;


 if (VAR_4)
  VAR_4 += 1;

 return VAR_4;
}
