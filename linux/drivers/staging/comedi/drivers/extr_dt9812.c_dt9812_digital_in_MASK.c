
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dt9812_private {int mut; } ;
struct comedi_device {struct dt9812_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,int,int*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, u8 *VAR_3)
{
 struct dt9812_private *VAR_4 = VAR_2->private;
 u8 VAR_5[2] = { VAR_1, VAR_0 };
 u8 VAR_6[2];
 int VAR_7;

 FUNC_1(&VAR_4->mut);
 VAR_7 = FUNC_0(VAR_2, 2, VAR_5, VAR_6);
 if (VAR_7 == 0) {





  *VAR_3 = (VAR_6[0] & 0x7f) | ((VAR_6[1] & 0x08) << 4);
 }
 FUNC_2(&VAR_4->mut);

 return VAR_7;
}
