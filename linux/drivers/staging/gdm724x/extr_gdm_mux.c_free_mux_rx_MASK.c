
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_rx {struct mux_rx* buf; int urb; } ;


 int FUNC_0 (struct mux_rx*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mux_rx *VAR_0)
{
 if (VAR_0) {
  FUNC_1(VAR_0->urb);
  FUNC_0(VAR_0->buf);
  FUNC_0(VAR_0);
 }
}
