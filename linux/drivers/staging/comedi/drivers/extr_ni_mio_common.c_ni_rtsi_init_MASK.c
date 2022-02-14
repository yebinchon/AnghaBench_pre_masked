
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ rgout0_usage; int rtsi_shared_mux_usage; scalar_t__ rtsi_shared_mux_reg; int clock_and_fout2; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;
 int FUNC_4 (struct comedi_device*,int,int ) ;
 int FUNC_5 (int,int ,struct comedi_device*) ;
 int FUNC_6 (int ,struct comedi_device*) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_4)
{
 struct ni_private *VAR_5 = VAR_4->private;
 int VAR_6;
 VAR_5->clock_and_fout2 = VAR_2;

 if (FUNC_2(VAR_4, VAR_1, 0) < 0)
  FUNC_0(VAR_4->class_dev, "ni_set_master_clock failed, bug?\n");


 for (VAR_6 = 0; VAR_6 < 8; ++VAR_6) {
  FUNC_3(VAR_4, VAR_6, VAR_0);
  FUNC_4(VAR_4, VAR_6, VAR_3[VAR_6]);
 }
 VAR_5->rtsi_shared_mux_reg = 0;
 for (VAR_6 = 0; VAR_6 < 4; ++VAR_6)
  FUNC_5(VAR_6, 0, VAR_4);
 FUNC_1(VAR_5->rtsi_shared_mux_usage, 0,
        sizeof(VAR_5->rtsi_shared_mux_usage));


 VAR_5->rgout0_usage = 0;
 FUNC_6(0, VAR_4);
}
