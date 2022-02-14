
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct ocelot {size_t** map; int * targets; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,size_t,size_t) ;

void FUNC_2(struct ocelot *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u16 VAR_6 = VAR_4 >> VAR_1;

 FUNC_0(!VAR_6);

 FUNC_1(VAR_2->targets[VAR_6],
       VAR_2->map[VAR_6][VAR_4 & VAR_0] + VAR_5, VAR_3);
}
