
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c_rtc {int rtc_clk; int rtc_src_clk; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ needs_src_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct s3c_rtc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->rtc_clk);
 if (VAR_1)
  return VAR_1;

 if (VAR_0->data->needs_src_clk) {
  VAR_1 = FUNC_1(VAR_0->rtc_src_clk);
  if (VAR_1) {
   FUNC_0(VAR_0->rtc_clk);
   return VAR_1;
  }
 }
 return 0;
}
