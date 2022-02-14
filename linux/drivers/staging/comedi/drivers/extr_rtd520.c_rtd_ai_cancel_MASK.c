
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtd_private {scalar_t__ ai_count; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ mmio; struct rtd_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{
 struct rtd_private *VAR_7 = VAR_5->private;


 FUNC_0(0, VAR_5->mmio + VAR_4);
 FUNC_0(0, VAR_5->mmio + VAR_3);
 FUNC_0(0, VAR_5->mmio + VAR_0);
 FUNC_1(0, VAR_5->mmio + VAR_2);
 VAR_7->ai_count = 0;
 FUNC_0(0, VAR_5->mmio + VAR_1);
 return 0;
}
