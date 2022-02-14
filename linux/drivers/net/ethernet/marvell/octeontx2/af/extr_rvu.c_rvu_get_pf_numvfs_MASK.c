
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rvu*,int ,int ) ;

void FUNC_2(struct rvu *VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
 u64 VAR_5;


 VAR_5 = FUNC_1(VAR_1, VAR_0, FUNC_0(VAR_2));
 *VAR_3 = (VAR_5 >> 12) & 0xFF;
 *VAR_4 = VAR_5 & 0xFFF;
}
