
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dt9812_rmw_byte {int and_mask; int or_value; int address; } ;
struct dt9812_private {int mut; } ;
struct comedi_device {struct dt9812_private* private; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct comedi_device*,int,struct dt9812_rmw_byte*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7, int VAR_8, u16 VAR_9)
{
 struct dt9812_private *VAR_10 = VAR_7->private;
 struct dt9812_rmw_byte VAR_11[3];
 int VAR_12;

 FUNC_1(&VAR_10->mut);

 switch (VAR_8) {
 case 0:

  VAR_11[0].address = VAR_1;
  VAR_11[0].and_mask = 0xff;
  VAR_11[0].or_value = VAR_0;


  VAR_11[1].address = VAR_3;
  VAR_11[1].and_mask = 0xff;
  VAR_11[1].or_value = VAR_9 & 0xff;


  VAR_11[2].address = VAR_2;
  VAR_11[2].and_mask = 0xff;
  VAR_11[2].or_value = (VAR_9 >> 8) & 0xf;
  break;

 case 1:

  VAR_11[0].address = VAR_4;
  VAR_11[0].and_mask = 0xff;
  VAR_11[0].or_value = VAR_0;


  VAR_11[1].address = VAR_6;
  VAR_11[1].and_mask = 0xff;
  VAR_11[1].or_value = VAR_9 & 0xff;


  VAR_11[2].address = VAR_5;
  VAR_11[2].and_mask = 0xff;
  VAR_11[2].or_value = (VAR_9 >> 8) & 0xf;
  break;
 }
 VAR_12 = FUNC_0(VAR_7, 3, VAR_11);

 FUNC_2(&VAR_10->mut);

 return VAR_12;
}
