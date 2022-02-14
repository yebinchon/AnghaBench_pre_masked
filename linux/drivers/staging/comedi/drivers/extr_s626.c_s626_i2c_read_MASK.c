
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s626_private {int i2c_adrs; } ;
struct comedi_device {scalar_t__ mmio; struct s626_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct comedi_device*,int) ;

__attribute__((used)) static u8 FUNC_5(struct comedi_device *VAR_4, u8 VAR_5)
{
 struct s626_private *VAR_6 = VAR_4->private;







 if (FUNC_4(VAR_4, FUNC_2(VAR_1,
      VAR_6->i2c_adrs) |
        FUNC_1(VAR_2, VAR_5) |
        FUNC_0(VAR_0, 0)))

  return 0;







 if (FUNC_4(VAR_4, FUNC_2(VAR_1,
      (VAR_6->i2c_adrs | 1)) |
        FUNC_1(VAR_2, 0) |
        FUNC_0(VAR_0, 0)))

  return 0;

 return (FUNC_3(VAR_4->mmio + VAR_3) >> 16) & 0xff;
}
