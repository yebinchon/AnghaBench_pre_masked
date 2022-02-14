
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
typedef int __u8 ;


 int FUNC_0 (struct dasd_device*,int) ;
 int FUNC_1 (struct dasd_device*,int) ;
 int FUNC_2 (struct dasd_device*,int) ;
 int FUNC_3 (struct dasd_device*,int) ;
 int FUNC_4 (struct dasd_device*,int) ;
 int FUNC_5 (struct dasd_device*,int) ;

__attribute__((used)) static inline void FUNC_6(struct dasd_device *VAR_0, __u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  FUNC_4(VAR_0, VAR_2);
  if (VAR_1 & (0x80 >> VAR_2)) {
   FUNC_5(VAR_0, VAR_2);




   FUNC_3(VAR_0, VAR_2);
   FUNC_1(VAR_0, VAR_2);
   FUNC_0(VAR_0, VAR_2);
   FUNC_2(VAR_0, VAR_2);
  }
 }
}
