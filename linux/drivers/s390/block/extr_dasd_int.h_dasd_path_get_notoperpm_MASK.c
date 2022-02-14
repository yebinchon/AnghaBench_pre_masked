
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
typedef int __u8 ;


 scalar_t__ FUNC_0 (struct dasd_device*,int) ;
 scalar_t__ FUNC_1 (struct dasd_device*,int) ;
 scalar_t__ FUNC_2 (struct dasd_device*,int) ;
 scalar_t__ FUNC_3 (struct dasd_device*,int) ;

__attribute__((used)) static inline __u8 FUNC_4(struct dasd_device *VAR_0)
{
 int VAR_1;
 __u8 VAR_2 = 0x00;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
  if (FUNC_3(VAR_0, VAR_1) ||
      FUNC_1(VAR_0, VAR_1) ||
      FUNC_0(VAR_0, VAR_1) ||
      FUNC_2(VAR_0, VAR_1))
   VAR_2 |= 0x80 >> VAR_1;
 return VAR_2;
}
