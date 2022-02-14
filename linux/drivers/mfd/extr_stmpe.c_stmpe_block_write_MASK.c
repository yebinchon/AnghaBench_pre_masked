
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe {int lock; } ;


 int FUNC_0 (struct stmpe*,int ,int ,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct stmpe *VAR_0, u8 VAR_1, u8 VAR_2,
        const u8 *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->lock);

 return VAR_4;
}
