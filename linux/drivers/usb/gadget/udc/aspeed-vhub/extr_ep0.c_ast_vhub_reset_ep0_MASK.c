
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct ast_vhub_ep {TYPE_1__ ep0; } ;
struct ast_vhub_dev {struct ast_vhub_ep ep0; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_vhub_ep*,int ) ;
 int VAR_1 ;

void FUNC_1(struct ast_vhub_dev *VAR_2)
{
 struct ast_vhub_ep *VAR_3 = &VAR_2->ep0;

 FUNC_0(VAR_3, -VAR_0);
 VAR_3->ep0.state = VAR_1;
}
