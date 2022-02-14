
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_rtc {int rtc_clk; int rtc_src_clk; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ needs_src_clk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct s3c_rtc *VAR_0)
{
 if (VAR_0->data->needs_src_clk)
  FUNC_0(VAR_0->rtc_src_clk);
 FUNC_0(VAR_0->rtc_clk);
}
