
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rvu*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rvu *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 u64 VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = VAR_3 & VAR_1;


 VAR_6 = FUNC_2(VAR_2, VAR_0, FUNC_0(VAR_4));

 return ((VAR_6 & 0xFFF) + VAR_5 - 1);
}
