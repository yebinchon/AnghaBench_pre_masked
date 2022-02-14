
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct a2150_private* private; struct a2150_board* board_ptr; } ;
struct a2150_private {int config_bits; } ;
struct a2150_board {int* clock; int num_clocks; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

 unsigned int VAR_1 ;



__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2, unsigned int *VAR_3,
       unsigned int VAR_4)
{
 const struct a2150_board *VAR_5 = VAR_2->board_ptr;
 struct a2150_private *VAR_6 = VAR_2->private;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;


 VAR_10 = 3;
 VAR_11 = 0;
 VAR_7 = VAR_5->clock[VAR_11] * (1 << VAR_10);
 VAR_12 = 0;
 VAR_13 = VAR_5->num_clocks - 1;
 VAR_8 = VAR_5->clock[VAR_13] * (1 << VAR_12);


 if (*VAR_3 < VAR_8)
  *VAR_3 = VAR_8;
 if (*VAR_3 > VAR_7)
  *VAR_3 = VAR_7;


 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {

  for (VAR_15 = 0; VAR_15 < VAR_5->num_clocks; VAR_15++) {

   VAR_9 = VAR_5->clock[VAR_15] * (1 << VAR_14);

   if (VAR_9 < VAR_7 && VAR_9 >= *VAR_3) {
    VAR_10 = VAR_14;
    VAR_11 = VAR_15;
    VAR_7 = VAR_9;
   }
   if (VAR_9 > VAR_8 && VAR_9 <= *VAR_3) {
    VAR_12 = VAR_14;
    VAR_13 = VAR_15;
    VAR_8 = VAR_9;
   }
  }
 }
 switch (VAR_4 & VAR_1) {
 case 129:
 default:

  if (VAR_7 - *VAR_3 < *VAR_3 - VAR_8)
   *VAR_3 = VAR_7;
  else
   *VAR_3 = VAR_8;
  break;
 case 128:
  *VAR_3 = VAR_7;
  break;
 case 130:
  *VAR_3 = VAR_8;
  break;
 }


 VAR_6->config_bits &= ~VAR_0;
 if (*VAR_3 == VAR_7) {
  VAR_6->config_bits |=
      FUNC_1(VAR_11) |
      FUNC_0(VAR_10);
 } else {
  VAR_6->config_bits |=
      FUNC_1(VAR_13) |
      FUNC_0(VAR_12);
 }

 return 0;
}
