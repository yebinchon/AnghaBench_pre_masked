
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rave_sp_status {int bootloader_version; int firmware_version; } ;
struct rave_sp {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rave_sp*,int*,int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct rave_sp *VAR_2,
           struct rave_sp_status *VAR_3)
{
 u8 VAR_4[] = {
  [0] = VAR_1,
  [1] = 0,
 };
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_4, sizeof(VAR_4), &VAR_3->firmware_version,
      sizeof(VAR_3->firmware_version));
 if (VAR_5)
  return VAR_5;

 VAR_4[0] = VAR_0;
 return FUNC_0(VAR_2, VAR_4, sizeof(VAR_4), &VAR_3->bootloader_version,
       sizeof(VAR_3->bootloader_version));
}
