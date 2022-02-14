
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct coh901331_port {int clk; scalar_t__ virtbase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct coh901331_port* FUNC_2 (struct device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, unsigned int VAR_2)
{
 struct coh901331_port *VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_3->clk);
 if (VAR_2)
  FUNC_3(1, VAR_3->virtbase + VAR_0);
 else
  FUNC_3(0, VAR_3->virtbase + VAR_0);
 FUNC_0(VAR_3->clk);

 return 0;
}
