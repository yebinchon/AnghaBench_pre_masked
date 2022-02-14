
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb300_ep {scalar_t__ epnum; struct fusb300* fusb300; } ;
struct fusb300 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct fusb300*,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct fusb300_ep *VAR_2)
{
 struct fusb300 *VAR_3 = VAR_2->fusb300;

 if (VAR_2->epnum) {
  FUNC_1(VAR_3, VAR_1,
   FUNC_0(VAR_2->epnum));
 } else {
  FUNC_2("can't disable_fifo_int ep0\n");
  return -VAR_0;
 }

 return 0;
}
