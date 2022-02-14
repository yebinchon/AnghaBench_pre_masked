
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int is_selfpowered; } ;
struct ast_vhub_dev {int ep0; scalar_t__ wakeup_en; TYPE_1__ gadget; } ;


 int FUNC_0 (struct ast_vhub_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ast_vhub_dev *VAR_2,
          u16 VAR_3, u16 VAR_4)
{
 u8 VAR_5;

 FUNC_0(VAR_2, "GET_STATUS(dev)\n");

 VAR_5 = VAR_2->gadget.is_selfpowered << VAR_1;
 if (VAR_2->wakeup_en)
  VAR_5 |= 1 << VAR_0;

 return FUNC_1(&VAR_2->ep0, VAR_5, 0);
}
