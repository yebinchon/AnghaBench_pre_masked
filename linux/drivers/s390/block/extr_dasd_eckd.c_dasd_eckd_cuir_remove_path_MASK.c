
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int dummy; } ;
struct dasd_cuir_message {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct dasd_device*,int ,struct dasd_cuir_message*) ;
 int FUNC_1 (struct dasd_device*,unsigned long) ;
 unsigned long FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct dasd_device *VAR_1, __u8 VAR_2,
          struct dasd_cuir_message *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (!(FUNC_2(VAR_1) & VAR_4))
  return 0;
 if (!(FUNC_2(VAR_1) & ~VAR_4)) {


  return -VAR_0;
 }

 FUNC_3(VAR_1, VAR_4);
 FUNC_1(VAR_1, VAR_4);
 return VAR_4;
}
