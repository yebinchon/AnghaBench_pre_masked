
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4, u16 VAR_5, bool VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7)
   return VAR_7;
 } else {
  FUNC_2(10, 20);
 }
 FUNC_3(VAR_5, VAR_4->mmio + VAR_2);
 if (!(FUNC_1(VAR_4->mmio + VAR_1) & VAR_0))
  VAR_7 = -VAR_3;

 return VAR_7;
}
