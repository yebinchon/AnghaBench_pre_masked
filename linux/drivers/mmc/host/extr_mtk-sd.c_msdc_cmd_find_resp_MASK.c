
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msdc_host {int dummy; } ;
struct mmc_request {int dummy; } ;
struct mmc_command {int dummy; } ;







 int FUNC_0 (struct mmc_command*) ;

__attribute__((used)) static inline u32 FUNC_1(struct msdc_host *VAR_0,
  struct mmc_request *VAR_1, struct mmc_command *VAR_2)
{
 u32 VAR_3;

 switch (FUNC_0(VAR_2)) {

 case 131:
  VAR_3 = 0x1;
  break;
 case 130:
  VAR_3 = 0x7;
  break;
 case 129:
  VAR_3 = 0x2;
  break;
 case 128:
  VAR_3 = 0x3;
  break;
 case 132:
 default:
  VAR_3 = 0x0;
  break;
 }

 return VAR_3;
}
