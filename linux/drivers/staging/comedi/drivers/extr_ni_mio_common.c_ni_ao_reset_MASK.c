
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_6xxx; scalar_t__ ao_mode3; scalar_t__ is_m_series; scalar_t__ ao_mode2; scalar_t__ ao_mode1; scalar_t__ ao_cmd2; scalar_t__ ao_cmd1; } ;
struct comedi_subdevice {unsigned int n_chan; } ;
struct comedi_device {struct ni_private* private; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int ,int ,int ) ;
 int FUNC_3 (struct comedi_device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_22, struct comedi_subdevice *VAR_23)
{
 struct ni_private *VAR_24 = VAR_22->private;

 FUNC_1(VAR_22);


 if (VAR_24->is_m_series)

  FUNC_3(VAR_22, VAR_18, VAR_21);


 FUNC_3(VAR_22, VAR_20, VAR_21);


 FUNC_3(VAR_22, VAR_3, VAR_4);






 VAR_24->ao_cmd1 = 0;
 VAR_24->ao_cmd2 = 0;
 VAR_24->ao_mode1 = 0;
 VAR_24->ao_mode2 = 0;
 if (VAR_24->is_m_series)
  VAR_24->ao_mode3 = VAR_8;
 else
  VAR_24->ao_mode3 = 0;

 FUNC_3(VAR_22, 0, VAR_12);
 FUNC_3(VAR_22, 0, VAR_4);
 FUNC_3(VAR_22, 0, VAR_5);
 FUNC_3(VAR_22, 0, VAR_6);
 FUNC_3(VAR_22, 0, VAR_7);
 FUNC_3(VAR_22, 0, VAR_10);
 FUNC_3(VAR_22, VAR_24->ao_mode3, VAR_9);
 FUNC_3(VAR_22, 0, VAR_13);
 FUNC_3(VAR_22, 0, VAR_14);


 FUNC_2(VAR_22, VAR_17, ~0, 0);


 FUNC_3(VAR_22, VAR_11, VAR_12);
 FUNC_3(VAR_22, VAR_15, VAR_16);


 if (VAR_24->is_6xxx) {
  FUNC_0(VAR_22, (1u << VAR_23->n_chan) - 1u,
          VAR_2);
  FUNC_0(VAR_22, VAR_0,
          VAR_1);
 }
 FUNC_3(VAR_22, VAR_19, VAR_21);


 return 0;
}
