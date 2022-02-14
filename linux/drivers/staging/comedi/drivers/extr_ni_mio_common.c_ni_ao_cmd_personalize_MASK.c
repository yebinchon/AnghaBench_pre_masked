
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ni_board_struct {scalar_t__ ao_fifo_depth; } ;
struct comedi_device {struct ni_board_struct* board_ptr; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_m_series; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_0 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_11,
      const struct comedi_cmd *VAR_12)
{
 const struct ni_board_struct *VAR_13 = VAR_11->board_ptr;
 unsigned int VAR_14;

 FUNC_0(VAR_11, VAR_8, VAR_9);

 VAR_14 =


   VAR_0 |
   0 |
   VAR_6 |

   VAR_5 |
   (VAR_13->ao_fifo_depth ?
     VAR_2 : VAR_1)
   ;
 FUNC_0(VAR_11, VAR_14, VAR_4);

 FUNC_0(VAR_11, VAR_7, VAR_9);
}
