
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct me_private_data {scalar_t__ ctrl2; scalar_t__ ctrl1; scalar_t__ dac_ctrl; } ;
struct comedi_device {scalar_t__ mmio; struct me_private_data* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_4)
{
 struct me_private_data *VAR_5 = VAR_4->private;


 FUNC_0(0x00, VAR_4->mmio + VAR_0);
 FUNC_0(0x00, VAR_4->mmio + VAR_1);
 FUNC_0(0x00, VAR_4->mmio + VAR_3);
 FUNC_0(0x00, VAR_4->mmio + VAR_2);


 VAR_5->dac_ctrl = 0;
 VAR_5->ctrl1 = 0;
 VAR_5->ctrl2 = 0;

 return 0;
}
