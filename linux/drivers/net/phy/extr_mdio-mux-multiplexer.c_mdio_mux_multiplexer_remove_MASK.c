
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mdio_mux_multiplexer_state {int muxc; scalar_t__ do_deselect; int mux_handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mdio_mux_multiplexer_state* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct mdio_mux_multiplexer_state *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->mux_handle);

 if (VAR_1->do_deselect)
  FUNC_1(VAR_1->muxc);

 return 0;
}
