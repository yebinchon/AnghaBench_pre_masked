
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt3k_private {int ai_front; int ai_rear; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ mmio; struct dt3k_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4,
          struct comedi_subdevice *VAR_5)
{
 struct dt3k_private *VAR_6 = VAR_4->private;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 unsigned short VAR_11;

 VAR_7 = FUNC_1(VAR_4->mmio + VAR_1);
 VAR_9 = VAR_7 - VAR_6->ai_front;
 if (VAR_9 < 0)
  VAR_9 += VAR_3;

 VAR_8 = VAR_6->ai_rear;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_11 = FUNC_1(VAR_4->mmio + VAR_0 + VAR_8);
  FUNC_0(VAR_5, &VAR_11, 1);
  VAR_8++;
  if (VAR_8 >= VAR_3)
   VAR_8 = 0;
 }

 VAR_6->ai_rear = VAR_8;
 FUNC_2(VAR_8, VAR_4->mmio + VAR_2);
}
