
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct ddb_dma {size_t bufregs; size_t num; int* pbuf; int bufval; } ;
struct ddb {int dummy; } ;


 int FUNC_0 (struct ddb*,int,size_t) ;

__attribute__((used)) static void FUNC_1(struct ddb *VAR_0,
        struct ddb_dma *VAR_1,
        struct ddb_dma *VAR_2)
{
 u32 VAR_3, VAR_4;
 u64 VAR_5;

 VAR_1->bufval = VAR_2->bufval;
 VAR_4 = VAR_1->bufregs;
 for (VAR_3 = 0; VAR_3 < VAR_2->num; VAR_3++) {
  VAR_5 = VAR_2->pbuf[VAR_3];
  FUNC_0(VAR_0, VAR_5 & 0xffffffff, VAR_4 + VAR_3 * 8);
  FUNC_0(VAR_0, VAR_5 >> 32, VAR_4 + VAR_3 * 8 + 4);
 }
}
