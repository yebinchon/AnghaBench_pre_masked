
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct delta_frame {int field; int flags; int dts; int index; scalar_t__ vaddr; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; struct delta_dev* dev; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct delta_ctx *VAR_0, struct delta_frame *VAR_1)
{
 struct delta_dev *VAR_2 = VAR_0->dev;
 u32 VAR_3 = 10;
 u8 *VAR_4 = (u8 *)(VAR_1->vaddr);

 FUNC_0(VAR_2->dev, "%s dump frame[%d] dts=%lld type=%s field=%s data=%*ph\n",
  VAR_0->name, VAR_1->index, VAR_1->dts,
  FUNC_2(VAR_1->flags),
  FUNC_1(VAR_1->field),
  VAR_3, VAR_4);
}
