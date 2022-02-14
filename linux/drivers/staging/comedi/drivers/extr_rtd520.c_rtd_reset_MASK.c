
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtd_private {scalar_t__ lcfg; } ;
struct comedi_device {scalar_t__ mmio; struct rtd_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_4)
{
 struct rtd_private *VAR_5 = VAR_4->private;

 FUNC_2(0, VAR_4->mmio + VAR_0);
 FUNC_1(100, 1000);
 FUNC_2(0, VAR_5->lcfg + VAR_3);
 FUNC_3(0, VAR_4->mmio + VAR_2);
 FUNC_3(~0, VAR_4->mmio + VAR_1);
 FUNC_0(VAR_4->mmio + VAR_1);
}
