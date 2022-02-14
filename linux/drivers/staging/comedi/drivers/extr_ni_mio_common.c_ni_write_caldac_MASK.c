
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_private {int* caldacs; } ;
struct ni_board_struct {int* caldac; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;
struct TYPE_2__ {int n_chans; unsigned int (* packbits ) (int,int,unsigned int*) ;} ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ) ;
 unsigned int FUNC_2 (int,int,unsigned int*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_5, int VAR_6, int VAR_7)
{
 const struct ni_board_struct *VAR_8 = VAR_5->board_ptr;
 struct ni_private *VAR_9 = VAR_5->private;
 unsigned int VAR_10 = 0, VAR_11 = 0, VAR_12, VAR_13 = 0;
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_9->caldacs[VAR_6] == VAR_7)
  return;
 VAR_9->caldacs[VAR_6] = VAR_7;

 for (VAR_15 = 0; VAR_15 < 3; VAR_15++) {
  VAR_16 = VAR_8->caldac[VAR_15];
  if (VAR_16 == VAR_3)
   break;
  if (VAR_6 < VAR_4[VAR_16].n_chans) {
   VAR_11 = VAR_4[VAR_16].packbits(VAR_6, VAR_7, &VAR_13);
   VAR_10 = FUNC_0(VAR_15);
   break;
  }
  VAR_6 -= VAR_4[VAR_16].n_chans;
 }


 if (VAR_11 == 0)
  return;

 for (VAR_12 = 1 << (VAR_11 - 1); VAR_12; VAR_12 >>= 1) {
  VAR_14 = (VAR_12 & VAR_13) ? VAR_2 : 0;
  FUNC_1(VAR_5, VAR_14, VAR_0);
  FUNC_3(1);
  FUNC_1(VAR_5, VAR_1 | VAR_14, VAR_0);
  FUNC_3(1);
 }
 FUNC_1(VAR_5, VAR_10, VAR_0);
 FUNC_3(1);
 FUNC_1(VAR_5, 0, VAR_0);
}
