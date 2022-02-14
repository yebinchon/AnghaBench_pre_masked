
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int changain_state; unsigned int changain_spec; int ai_calib_source_enabled; unsigned int ai_calib_source; unsigned int* ai_offset; scalar_t__ is_6143; scalar_t__ is_611x; scalar_t__ is_m_series; } ;
struct ni_board_struct {size_t gainlkup; } ;
struct comedi_subdevice {int maxdata; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_3 (unsigned int) ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int) ;
 unsigned int** VAR_14 ;
 int FUNC_6 (struct comedi_device*,unsigned int,unsigned int*) ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (struct comedi_device*,int,int ) ;
 int FUNC_9 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_10(struct comedi_device *VAR_15,
         struct comedi_subdevice *VAR_16,
         unsigned int VAR_17, unsigned int *VAR_18)
{
 const struct ni_board_struct *VAR_19 = VAR_15->board_ptr;
 struct ni_private *VAR_20 = VAR_15->private;
 unsigned int VAR_21 = (VAR_16->maxdata + 1) >> 1;
 unsigned int VAR_22, VAR_23, VAR_24;
 unsigned int VAR_25;
 unsigned int VAR_26, VAR_27;
 unsigned int VAR_28;

 if (VAR_20->is_m_series) {
  FUNC_6(VAR_15, VAR_17, VAR_18);
  return;
 }
 if (VAR_17 == 1 && !VAR_20->is_611x && !VAR_20->is_6143) {
  if (VAR_20->changain_state &&
      VAR_20->changain_spec == VAR_18[0]) {

   return;
  }
  VAR_20->changain_state = 1;
  VAR_20->changain_spec = VAR_18[0];
 } else {
  VAR_20->changain_state = 0;
 }

 FUNC_8(VAR_15, 1, VAR_6);


 if (VAR_20->is_6143) {
  if ((VAR_18[0] & VAR_1) &&
      !VAR_20->ai_calib_source_enabled) {

   FUNC_9(VAR_15, VAR_20->ai_calib_source |
           VAR_5,
      VAR_3);
   FUNC_9(VAR_15, VAR_20->ai_calib_source,
      VAR_3);
   VAR_20->ai_calib_source_enabled = 1;

   FUNC_5(100);
  } else if (!(VAR_18[0] & VAR_1) &&
      VAR_20->ai_calib_source_enabled) {

   FUNC_9(VAR_15, VAR_20->ai_calib_source |
           VAR_4,
      VAR_3);
   FUNC_9(VAR_15, VAR_20->ai_calib_source,
      VAR_3);
   VAR_20->ai_calib_source_enabled = 0;

   FUNC_5(100);
  }
 }

 for (VAR_25 = 0; VAR_25 < VAR_17; VAR_25++) {
  if (!VAR_20->is_6143 && (VAR_18[VAR_25] & VAR_1))
   VAR_22 = VAR_20->ai_calib_source;
  else
   VAR_22 = FUNC_1(VAR_18[VAR_25]);
  VAR_24 = FUNC_0(VAR_18[VAR_25]);
  VAR_23 = FUNC_2(VAR_18[VAR_25]);
  VAR_28 = (VAR_18[VAR_25] & VAR_0) != 0;


  VAR_23 = VAR_14[VAR_19->gainlkup][VAR_23];
  if (VAR_20->is_611x)
   VAR_20->ai_offset[VAR_25] = VAR_21;
  else
   VAR_20->ai_offset[VAR_25] = (VAR_23 & 0x100) ? 0 : VAR_21;

  VAR_26 = 0;
  if ((VAR_18[VAR_25] & VAR_1)) {
   if (VAR_20->is_611x)
    FUNC_9(VAR_15, FUNC_1(VAR_18[VAR_25]) & 0x0003,
       VAR_2);
  } else {
   if (VAR_20->is_611x)
    VAR_24 = 130;
   else if (VAR_20->is_6143)
    VAR_24 = 128;
   switch (VAR_24) {
   case 130:
    VAR_26 |= VAR_9;
    break;
   case 131:
    VAR_26 |= VAR_8;
    break;
   case 129:
    VAR_26 |= VAR_10;
    break;
   case 128:
    break;
   }
  }
  VAR_26 |= FUNC_3(VAR_22);

  FUNC_9(VAR_15, VAR_26, VAR_7);

  if (!VAR_20->is_6143) {
   VAR_27 = FUNC_4(VAR_23);

   if (VAR_25 == VAR_17 - 1)
    VAR_27 |= VAR_12;
   if (VAR_28)
    VAR_27 |= VAR_11;

   FUNC_9(VAR_15, VAR_27, VAR_13);
  }
 }


 if (!VAR_20->is_611x && !VAR_20->is_6143)
  FUNC_7(VAR_15);
}
