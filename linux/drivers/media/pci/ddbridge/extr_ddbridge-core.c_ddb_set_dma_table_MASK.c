
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct ddb_io {struct ddb_dma* dma; TYPE_1__* port; } ;
struct ddb_dma {size_t num; int* pbuf; int bufval; int div; int size; scalar_t__ bufregs; } ;
struct ddb {int dummy; } ;
struct TYPE_2__ {struct ddb* dev; } ;


 int FUNC_0 (struct ddb*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ddb_io *VAR_0)
{
 struct ddb *VAR_1 = VAR_0->port->dev;
 struct ddb_dma *VAR_2 = VAR_0->dma;
 u32 VAR_3;
 u64 VAR_4;

 if (!VAR_2)
  return;
 for (VAR_3 = 0; VAR_3 < VAR_2->num; VAR_3++) {
  VAR_4 = VAR_2->pbuf[VAR_3];
  FUNC_0(VAR_1, VAR_4 & 0xffffffff, VAR_2->bufregs + VAR_3 * 8);
  FUNC_0(VAR_1, VAR_4 >> 32, VAR_2->bufregs + VAR_3 * 8 + 4);
 }
 VAR_2->bufval = ((VAR_2->div & 0x0f) << 16) |
  ((VAR_2->num & 0x1f) << 11) |
  ((VAR_2->size >> 7) & 0x7ff);
}
