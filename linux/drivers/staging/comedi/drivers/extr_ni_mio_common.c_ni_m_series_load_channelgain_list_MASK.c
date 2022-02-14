
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int ai_calib_source; scalar_t__* ai_offset; } ;
struct ni_board_struct {size_t gainlkup; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_6 (unsigned int) ;
 unsigned int VAR_10 ;
 unsigned int FUNC_7 (unsigned int) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 unsigned int** VAR_14 ;
 int FUNC_8 (struct comedi_device*) ;
 int FUNC_9 (struct comedi_device*,int,int ) ;
 int FUNC_10 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_11 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_12(struct comedi_device *VAR_15,
           unsigned int VAR_16,
           unsigned int *VAR_17)
{
 const struct ni_board_struct *VAR_18 = VAR_15->board_ptr;
 struct ni_private *VAR_19 = VAR_15->private;
 unsigned int VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25;

 FUNC_9(VAR_15, 1, VAR_2);

 if ((VAR_17[0] & VAR_1)) {
  unsigned int VAR_26;

  VAR_20 = FUNC_1(VAR_17[0]);
  VAR_21 = FUNC_2(VAR_17[0]);
  VAR_25 = VAR_14[VAR_18->gainlkup][VAR_21];
  VAR_24 = (VAR_17[0] & VAR_0) != 0;
  VAR_26 = VAR_12 |
         FUNC_6(VAR_20) |
         FUNC_7(VAR_25) |
         VAR_19->ai_calib_source;
  if (VAR_24)
   VAR_26 |= VAR_10;

  VAR_26 |= VAR_11;
  FUNC_10(VAR_15, VAR_26, VAR_13);
 } else {
  FUNC_10(VAR_15, 0, VAR_13);
 }
 for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
  unsigned int VAR_27 = 0;

  VAR_20 = FUNC_1(VAR_17[VAR_23]);
  VAR_22 = FUNC_0(VAR_17[VAR_23]);
  VAR_21 = FUNC_2(VAR_17[VAR_23]);
  VAR_24 = (VAR_17[VAR_23] & VAR_0) != 0;

  VAR_25 = VAR_14[VAR_18->gainlkup][VAR_21];
  VAR_19->ai_offset[VAR_23] = 0;
  switch (VAR_22) {
  case 130:
   VAR_27 |= VAR_4;
   break;
  case 131:
   VAR_27 |= VAR_3;
   break;
  case 129:
   VAR_27 |= VAR_5;
   break;
  case 128:
   break;
  }
  VAR_27 |= FUNC_4(VAR_20);
  VAR_27 |= FUNC_3(VAR_20);
  VAR_27 |= FUNC_5(VAR_25);
  if (VAR_23 == VAR_16 - 1)
   VAR_27 |= VAR_8;
  if (VAR_24)
   VAR_27 |= VAR_6;

  VAR_27 |= VAR_9;
  FUNC_11(VAR_15, VAR_27, VAR_7);
 }
 FUNC_8(VAR_15);
}
