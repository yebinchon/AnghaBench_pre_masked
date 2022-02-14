
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tee_ioctl_version_data {int gen_caps; int impl_caps; int impl_id; } ;
struct tee_device {int dummy; } ;
struct optee {int sec_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct optee* FUNC_0 (struct tee_device*) ;

__attribute__((used)) static void FUNC_1(struct tee_device *VAR_5,
         struct tee_ioctl_version_data *VAR_6)
{
 struct tee_ioctl_version_data VAR_7 = {
  .impl_id = VAR_3,
  .impl_caps = VAR_4,
  .gen_caps = VAR_1,
 };
 struct optee *VAR_8 = FUNC_0(VAR_5);

 if (VAR_8->sec_caps & VAR_0)
  VAR_7.gen_caps |= VAR_2;
 *VAR_6 = VAR_7;
}
