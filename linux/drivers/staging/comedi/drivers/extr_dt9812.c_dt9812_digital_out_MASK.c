
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dt9812_private {int mut; } ;
struct comedi_device {struct dt9812_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1, u8 VAR_2)
{
 struct dt9812_private *VAR_3 = VAR_1->private;
 u8 VAR_4[1] = { VAR_0 };
 u8 VAR_5[1] = { VAR_2 };
 int VAR_6;

 FUNC_1(&VAR_3->mut);
 VAR_6 = FUNC_0(VAR_1, 1, VAR_4, VAR_5);
 FUNC_2(&VAR_3->mut);

 return VAR_6;
}
