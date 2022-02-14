
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int ai_calib_source; scalar_t__ ai_calib_source_enabled; } ;
struct ni_board_struct {int ai_fifo_depth; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct comedi_device*,int ,int ) ;
 int FUNC_1 (struct comedi_device*,int,int ) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_7)
{
 const struct ni_board_struct *VAR_8 = VAR_7->board_ptr;
 struct ni_private *VAR_9 = VAR_7->private;


 FUNC_0(VAR_7, 0, VAR_6);




 FUNC_1(VAR_7, 0x00, VAR_4);

 FUNC_1(VAR_7, 0x80, VAR_5);

 FUNC_1(VAR_7, 0x00, VAR_3);


 FUNC_2(VAR_7, VAR_8->ai_fifo_depth / 2, VAR_0);


 VAR_9->ai_calib_source_enabled = 0;
 FUNC_3(VAR_7, VAR_9->ai_calib_source | VAR_2,
    VAR_1);
 FUNC_3(VAR_7, VAR_9->ai_calib_source, VAR_1);
}
