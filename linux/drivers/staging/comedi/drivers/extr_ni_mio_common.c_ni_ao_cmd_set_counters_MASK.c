
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_m_series; int ao_mode2; int ao_mode1; } ;
struct comedi_device {struct ni_private* private; } ;
struct comedi_cmd {int stop_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_12,
       const struct comedi_cmd *VAR_13)
{
 struct ni_private *VAR_14 = VAR_12->private;


 FUNC_1(VAR_12, VAR_10, VAR_11);







 FUNC_1(VAR_12, VAR_14->ao_mode1, VAR_4);



 VAR_14->ao_mode2 &= ~VAR_5;
 FUNC_1(VAR_12, VAR_14->ao_mode2, VAR_6);






 FUNC_0(VAR_12, 0, VAR_0);


 FUNC_1(VAR_12, VAR_1, VAR_2);



 VAR_14->ao_mode2 &= ~VAR_7;
 FUNC_1(VAR_12, VAR_14->ao_mode2, VAR_6);
 {
  unsigned int VAR_15 = VAR_13->stop_arg > 0 ?
   (VAR_13->stop_arg & 0xffffff) : 0xffffff;

  if (VAR_14->is_m_series) {




   FUNC_0(VAR_12, VAR_15 - 1, VAR_8);


   FUNC_1(VAR_12, VAR_3,
          VAR_2);
  } else {
   FUNC_0(VAR_12, VAR_15, VAR_8);


   FUNC_1(VAR_12, VAR_3,
          VAR_2);





   FUNC_0(VAR_12, VAR_15 - 1, VAR_8);
  }
 }

 FUNC_1(VAR_12, VAR_9, VAR_11);
}
