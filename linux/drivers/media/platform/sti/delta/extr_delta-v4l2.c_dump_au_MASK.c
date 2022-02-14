
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; struct delta_dev* dev; } ;
struct TYPE_3__ {int index; } ;
struct TYPE_4__ {TYPE_1__ vb2_buf; } ;
struct delta_au {int size; int dts; TYPE_2__ vbuf; scalar_t__ vaddr; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int,int,int *,...) ;

__attribute__((used)) static void FUNC_1(struct delta_ctx *VAR_0, struct delta_au *VAR_1)
{
 struct delta_dev *VAR_2 = VAR_0->dev;
 u32 VAR_3 = 10;
 u8 *VAR_4 = (u8 *)(VAR_1->vaddr);

 if (VAR_1->size <= (VAR_3 * 2))
  FUNC_0(VAR_2->dev, "%s dump au[%d] dts=%lld size=%d data=%*ph\n",
   VAR_0->name, VAR_1->vbuf.vb2_buf.index, VAR_1->dts, VAR_1->size,
   VAR_1->size, VAR_4);
 else
  FUNC_0(VAR_2->dev, "%s dump au[%d] dts=%lld size=%d data=%*ph..%*ph\n",
   VAR_0->name, VAR_1->vbuf.vb2_buf.index, VAR_1->dts, VAR_1->size,
   VAR_3, VAR_4, VAR_3, VAR_4 + VAR_1->size - VAR_3);
}
