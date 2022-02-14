
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_6143; scalar_t__ is_611x; } ;
struct ni_board_struct {unsigned int ai_speed; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;



__attribute__((used)) static unsigned int FUNC_0(struct comedi_device *VAR_0,
          unsigned int VAR_1)
{
 const struct ni_board_struct *VAR_2 = VAR_0->board_ptr;
 struct ni_private *VAR_3 = VAR_0->private;


 if (VAR_3->is_611x || VAR_3->is_6143)
  return VAR_2->ai_speed;


 return VAR_2->ai_speed * VAR_1;
}
