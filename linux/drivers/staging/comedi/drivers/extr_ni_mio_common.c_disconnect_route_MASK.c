
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int counter_dev; int routing_tables; } ;
struct comedi_device {struct ni_private* private; } ;
typedef scalar_t__ s8 ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int,struct comedi_device*) ;
 int FUNC_7 (unsigned int,int,struct comedi_device*) ;
 scalar_t__* VAR_4 ;
 unsigned int FUNC_8 (unsigned int,struct comedi_device*) ;
 scalar_t__ FUNC_9 (unsigned int,struct comedi_device*) ;
 int FUNC_10 (int ,unsigned int,int *) ;
 int FUNC_11 (struct comedi_device*,unsigned int) ;
 scalar_t__ FUNC_12 (int ,unsigned int,int *) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_15 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_16 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_17 (struct comedi_device*,unsigned int,scalar_t__) ;
 int FUNC_18 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_19(unsigned int VAR_5, unsigned int VAR_6,
       struct comedi_device *VAR_7)
{
 struct ni_private *VAR_8 = VAR_7->private;
 s8 VAR_9 = FUNC_12(FUNC_0(VAR_5), VAR_6,
          &VAR_8->routing_tables);

 if (VAR_9 < 0)

  return -VAR_1;
 if (FUNC_8(VAR_6, VAR_7) != VAR_5)

  return -VAR_1;


 if (FUNC_4(VAR_6)) {

  FUNC_14(VAR_7, VAR_6, VAR_0);
  FUNC_15(VAR_7, VAR_6, VAR_2);
 } else if (FUNC_5(VAR_6)) {
  if (VAR_9 == VAR_3) {
   int VAR_10 = FUNC_6(VAR_5, VAR_7);

   if (VAR_10 < 0)
    return VAR_10;
  } else if (FUNC_13(VAR_9)) {

   int VAR_11 = FUNC_10(
    FUNC_11(VAR_7, VAR_6), VAR_6,
    &VAR_8->routing_tables);

   if (VAR_11 < 0)
    return VAR_11;


   FUNC_7(VAR_5, VAR_11, VAR_7);
  }


  VAR_9 = VAR_4[VAR_6 - FUNC_2(0)];
  FUNC_16(VAR_7, VAR_6, VAR_0);
  FUNC_17(VAR_7, VAR_6, VAR_9);
 } else if (VAR_6 >= FUNC_1(0) && VAR_6 <= FUNC_1(-1)) {




  VAR_6 -= FUNC_1(0);
  if (VAR_6 > 1)

   return -VAR_1;
  VAR_9 = FUNC_9(VAR_6, VAR_7);
 } else if (FUNC_3(VAR_6)) {
  FUNC_18(VAR_8->counter_dev, VAR_6);
 } else {
  return -VAR_1;
 }
 return 0;
}
