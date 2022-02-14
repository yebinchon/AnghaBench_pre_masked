
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsi721_device {scalar_t__ regs; } ;
struct rio_mport_attr {int link_speed; int link_width; int flags; scalar_t__ dma_align; int dma_max_size; scalar_t__ dma_max_sge; } ;
struct rio_mport {struct tsi721_device* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct rio_mport *VAR_7,
         struct rio_mport_attr *VAR_8)
{
 struct tsi721_device *VAR_9 = VAR_7->priv;
 u32 VAR_10;

 VAR_10 = FUNC_3(VAR_9->regs + 0x100 + FUNC_2(0, 0));
 if (VAR_10 & VAR_5) {
  VAR_10 = FUNC_3(VAR_9->regs + 0x100 + FUNC_0(0, 0));
  VAR_8->link_speed = (VAR_10 & VAR_3) >> 28;
  VAR_10 = FUNC_3(VAR_9->regs + 0x100 + FUNC_1(0, 0));
  VAR_8->link_width = (VAR_10 & VAR_4) >> 27;
 } else
  VAR_8->link_speed = VAR_0;







 VAR_8->flags = 0;

 return 0;
}
