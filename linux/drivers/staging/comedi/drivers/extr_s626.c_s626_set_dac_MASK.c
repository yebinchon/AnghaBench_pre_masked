
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct s626_private {int dacpol; } ;
struct comedi_device {scalar_t__ mmio; struct s626_private* private; } ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_9,
   u16 VAR_10, int16_t VAR_11)
{
 struct s626_private *VAR_12 = VAR_9->private;
 u16 VAR_13;
 u32 VAR_14;
 u32 VAR_15;




 VAR_13 = 1 << VAR_10;
 if (VAR_11 < 0) {
  VAR_11 = -VAR_11;
  VAR_12->dacpol |= VAR_13;
 } else {
  VAR_12->dacpol &= ~VAR_13;
 }


 if ((u16)VAR_11 > 0x1FFF)
  VAR_11 = 0x1FFF;
 VAR_14 = (VAR_10 & 2) ? VAR_1 : VAR_2;

 FUNC_2(VAR_8 | VAR_5 | VAR_14,
        VAR_9->mmio + FUNC_0(2));

 FUNC_2(VAR_8 | VAR_4 | VAR_14,
        VAR_9->mmio + FUNC_0(3));

 FUNC_2(VAR_8 | VAR_7 | VAR_3,
        VAR_9->mmio + FUNC_0(4));

 FUNC_2(VAR_8 | VAR_6 | VAR_3 | VAR_0,
        VAR_9->mmio + FUNC_0(5));
 VAR_15 = 0x0F000000;


 VAR_15 |= 0x00004000;


 VAR_15 |= ((u32)(VAR_10 & 1) << 15);


 VAR_15 |= (u32)VAR_11;
 return FUNC_1(VAR_9, VAR_15);
}
