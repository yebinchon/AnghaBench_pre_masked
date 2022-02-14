
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dt9812_rmw_byte {int address; int and_mask; int or_value; } ;
struct dt9812_private {int device; int mut; } ;
struct comedi_device {struct dt9812_private* private; } ;
typedef enum dt9812_gain { ____Placeholder_dt9812_gain } dt9812_gain ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,struct dt9812_rmw_byte*,int) ;
 int FUNC_1 (struct comedi_device*,struct dt9812_rmw_byte*,int) ;
 int FUNC_2 (struct comedi_device*,int,int*,int*) ;
 int FUNC_3 (struct comedi_device*,int,struct dt9812_rmw_byte*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_6,
       int VAR_7, u16 *VAR_8, enum dt9812_gain VAR_9)
{
 struct dt9812_private *VAR_10 = VAR_6->private;
 struct dt9812_rmw_byte VAR_11[3];
 u8 VAR_12[3] = {
  VAR_3,
  VAR_4,
  VAR_5
 };
 u8 VAR_13[3];
 int VAR_14;

 FUNC_4(&VAR_10->mut);


 FUNC_0(VAR_6, &VAR_11[0], VAR_9);


 FUNC_1(VAR_6, &VAR_11[1], VAR_7);


 VAR_11[2].address = VAR_3;
 VAR_11[2].and_mask = 0xff;
 VAR_11[2].or_value = VAR_1 | VAR_0;

 VAR_14 = FUNC_3(VAR_6, 3, VAR_11);
 if (VAR_14)
  goto exit;


 VAR_14 = FUNC_2(VAR_6, 3, VAR_12, VAR_13);
 if (VAR_14)
  goto exit;
 if ((VAR_13[0] & (VAR_2 | VAR_0)) ==
     VAR_2) {
  switch (VAR_10->device) {
  case 129:





   *VAR_8 = ((VAR_13[1] << 8) | VAR_13[2]) + 0x800;
   break;
  case 128:
   *VAR_8 = (VAR_13[1] << 8) | VAR_13[2];
   break;
  }
 }

exit:
 FUNC_5(&VAR_10->mut);

 return VAR_14;
}
