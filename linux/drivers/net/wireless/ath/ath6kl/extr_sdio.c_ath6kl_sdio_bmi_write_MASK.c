
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int htc_addr; } ;
struct ath6kl {TYPE_1__ mbox_info; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ath6kl*) ;
 int FUNC_2 (struct ath6kl*,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ath6kl *VAR_1, u8 *VAR_2, u32 VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_5 = VAR_1->mbox_info.htc_addr;

 VAR_4 = FUNC_2(VAR_1, VAR_5, VAR_2, VAR_3,
       VAR_0);
 if (VAR_4) {
  FUNC_0("unable to send the bmi data to the device\n");
  return VAR_4;
 }

 return 0;
}
