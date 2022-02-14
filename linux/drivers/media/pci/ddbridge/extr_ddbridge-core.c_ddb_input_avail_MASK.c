
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ddb_input {TYPE_2__* dma; TYPE_1__* port; } ;
struct ddb {int dev; } ;
struct TYPE_5__ {int stat; int cbuf; } ;
struct TYPE_4__ {struct ddb* dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ddb*,int ) ;
 int FUNC_3 (struct ddb*,int,int ) ;
 int FUNC_4 (int ,char*,int,int,int) ;

__attribute__((used)) static u32 FUNC_5(struct ddb_input *VAR_0)
{
 struct ddb *VAR_1 = VAR_0->port->dev;
 u32 VAR_2, VAR_3, VAR_4 = VAR_0->dma->stat;
 u32 VAR_5 = FUNC_2(VAR_1, FUNC_1(VAR_0->dma));

 VAR_2 = (VAR_4 >> 11) & 0x1f;
 VAR_3 = (VAR_4 & 0x7ff) << 7;

 if (VAR_5 & 4) {
  FUNC_4(VAR_1->dev, "IA %d %d %08x\n", VAR_2, VAR_3, VAR_5);
  FUNC_3(VAR_1, VAR_4, FUNC_0(VAR_0->dma));
  return 0;
 }
 if (VAR_0->dma->cbuf != VAR_2)
  return 188;
 return 0;
}
