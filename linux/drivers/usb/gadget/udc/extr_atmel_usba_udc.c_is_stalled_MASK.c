
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_udc {int dummy; } ;
struct usba_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usba_ep*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct usba_udc *VAR_2, struct usba_ep *VAR_3)
{
 if (FUNC_0(VAR_3, VAR_0) & VAR_1)
  return 1;
 return 0;
}
