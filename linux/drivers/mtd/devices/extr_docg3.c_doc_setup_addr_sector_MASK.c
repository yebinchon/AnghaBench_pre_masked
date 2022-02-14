
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct docg3 {int dummy; } ;


 int FUNC_0 (struct docg3*,int) ;
 int FUNC_1 (struct docg3*,int) ;

__attribute__((used)) static void FUNC_2(struct docg3 *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, 1);
 FUNC_1(VAR_0, VAR_1 & 0xff);
 FUNC_1(VAR_0, (VAR_1 >> 8) & 0xff);
 FUNC_1(VAR_0, (VAR_1 >> 16) & 0xff);
 FUNC_0(VAR_0, 1);
}
