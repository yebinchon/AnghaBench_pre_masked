
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qeth_stats {int offset; } ;



__attribute__((used)) static void FUNC_0(u64 **VAR_0, void *VAR_1,
          const struct qeth_stats VAR_2[],
          unsigned int VAR_3)
{
 unsigned int VAR_4;
 char *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = (char *)VAR_1 + VAR_2[VAR_4].offset;
  **VAR_0 = *(u64 *)VAR_5;
  (*VAR_0)++;
 }
}
