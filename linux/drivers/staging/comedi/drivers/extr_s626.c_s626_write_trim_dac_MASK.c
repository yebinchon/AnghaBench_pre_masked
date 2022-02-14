
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct s626_private {size_t* trim_setpoint; } ;
struct comedi_device {scalar_t__ mmio; struct s626_private* private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int* VAR_8 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_9,
          u8 VAR_10, u8 VAR_11)
{
 struct s626_private *VAR_12 = VAR_9->private;
 u32 VAR_13;





 VAR_12->trim_setpoint[VAR_10] = VAR_11;


 VAR_13 = VAR_8[VAR_10];
 FUNC_2(VAR_7 | VAR_4 | VAR_2,
        VAR_9->mmio + FUNC_0(2));

 FUNC_2(VAR_7 | VAR_3 | VAR_2,
        VAR_9->mmio + FUNC_0(3));

 FUNC_2(VAR_7 | VAR_6 | VAR_1,
        VAR_9->mmio + FUNC_0(4));

 FUNC_2(VAR_7 | VAR_5 | VAR_1 | VAR_0,
        VAR_9->mmio + FUNC_0(5));
 return FUNC_1(VAR_9, (VAR_13 << 8) | VAR_11);
}
