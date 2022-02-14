
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mmc_host {int dummy; } ;
typedef enum mmc_issue_type { ____Placeholder_mmc_issue_type } mmc_issue_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct request*) ;

__attribute__((used)) static enum mmc_issue_type FUNC_2(struct mmc_host *VAR_3,
           struct request *VAR_4)
{
 switch (FUNC_1(VAR_4)) {
 case 131:
 case 130:
 case 132:
 case 128:
  return VAR_2;
 case 129:
  return FUNC_0(VAR_3) ? VAR_1 : VAR_2;
 default:
  return VAR_0;
 }
}
