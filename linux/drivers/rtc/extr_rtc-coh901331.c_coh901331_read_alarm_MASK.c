
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {unsigned int pending; unsigned int enabled; int time; } ;
struct device {int dummy; } ;
struct coh901331_port {int clk; scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct coh901331_port* FUNC_2 (struct device*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct coh901331_port *VAR_5 = FUNC_2(VAR_3);

 FUNC_1(VAR_5->clk);
 FUNC_4(FUNC_3(VAR_5->virtbase + VAR_0), &VAR_4->time);
 VAR_4->pending = FUNC_3(VAR_5->virtbase + VAR_1) & 1U;
 VAR_4->enabled = FUNC_3(VAR_5->virtbase + VAR_2) & 1U;
 FUNC_0(VAR_5->clk);

 return 0;
}
