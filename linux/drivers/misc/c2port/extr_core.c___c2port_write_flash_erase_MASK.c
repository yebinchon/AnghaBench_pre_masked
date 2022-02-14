
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct c2port_device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct c2port_device*) ;
 int FUNC_1 (struct c2port_device*) ;
 int FUNC_2 (struct c2port_device*,scalar_t__*) ;
 int FUNC_3 (struct c2port_device*,int ) ;
 int FUNC_4 (struct c2port_device*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct c2port_device *VAR_4)
{
 u8 VAR_5;
 int VAR_6;




 FUNC_3(VAR_4, VAR_2);


 FUNC_4(VAR_4, VAR_1);


 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;




 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_5 != VAR_0)
  return -VAR_3;






 FUNC_4(VAR_4, 0xde);
 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 FUNC_4(VAR_4, 0xad);
 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 FUNC_4(VAR_4, 0xa5);
 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
