
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct docg3 {int dummy; } ;


 int FUNC_0 (struct docg3*,int) ;
 int FUNC_1 (struct docg3*,int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct docg3 *VAR_0, int VAR_1, u_char *VAR_2,
      int VAR_3, int VAR_4)
{
 if (VAR_4 && VAR_1 > 0) {
  FUNC_1(VAR_0, VAR_2, 1, VAR_3);
  FUNC_1(VAR_0, VAR_2 ? VAR_2 + 1 : VAR_2, VAR_1 - 1, 0);
 } else {
  FUNC_1(VAR_0, VAR_2, VAR_1, VAR_3);
 }
 FUNC_0(VAR_0, 2);
 return VAR_1;
}
