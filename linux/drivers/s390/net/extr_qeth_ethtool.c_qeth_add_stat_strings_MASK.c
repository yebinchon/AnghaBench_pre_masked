
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qeth_stats {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char const*,int ) ;

__attribute__((used)) static void FUNC_1(u8 **VAR_1, const char *VAR_2,
      const struct qeth_stats VAR_3[],
      unsigned int VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_0(*VAR_1, VAR_0, "%s%s", VAR_2, VAR_3[VAR_5].name);
  *VAR_1 += VAR_0;
 }
}
