
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*,int ,size_t,int ) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_2, dma_addr_t *VAR_3,
        u64 VAR_4, u64 VAR_5)
{
 dma_addr_t VAR_6;
 u64 VAR_7;

 for (VAR_7 = VAR_4; VAR_7 < VAR_4 + VAR_5;
      VAR_7 += VAR_1) {
  VAR_6 = VAR_3[VAR_7 / VAR_1];
  FUNC_0(VAR_2, VAR_6, VAR_1, VAR_0);
 }
}
