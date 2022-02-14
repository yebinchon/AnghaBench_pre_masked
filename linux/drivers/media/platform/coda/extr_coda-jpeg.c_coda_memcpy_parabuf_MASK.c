
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct coda_memcpy_desc {int offset; int len; int * src; } ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
    const struct coda_memcpy_desc *VAR_1)
{
 u32 *VAR_2 = VAR_0 + VAR_1->offset;
 const u32 *VAR_3 = VAR_1->src;
 int VAR_4 = VAR_1->len / 4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += 2) {
  VAR_2[VAR_5 + 1] = FUNC_0(VAR_3[VAR_5]);
  VAR_2[VAR_5] = FUNC_0(VAR_3[VAR_5 + 1]);
 }
}
