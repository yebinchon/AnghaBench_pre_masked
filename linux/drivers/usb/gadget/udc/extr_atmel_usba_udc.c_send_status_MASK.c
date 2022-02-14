
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_udc {int dummy; } ;
struct usba_ep {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usba_ep*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct usba_udc *VAR_5, struct usba_ep *VAR_6)
{
 VAR_6->state = VAR_2;
 FUNC_0(VAR_6, VAR_1, VAR_4);
 FUNC_0(VAR_6, VAR_0, VAR_3);
}
