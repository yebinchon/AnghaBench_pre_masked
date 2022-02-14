
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_link_status_s {unsigned int mbps; } ;
struct aq_hw_s {struct aq_hw_link_status_s aq_link_status; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (struct aq_hw_s*) ;

int FUNC_1(struct aq_hw_s *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = VAR_3 >> VAR_1;
 struct aq_hw_link_status_s *VAR_5 = &VAR_2->aq_link_status;

 if (!VAR_4) {
  VAR_5->mbps = 0U;
 } else {
  switch (VAR_4) {
  case 132:
   VAR_5->mbps = 10000U;
   break;

  case 129:
  case 128:
   VAR_5->mbps = 5000U;
   break;

  case 130:
   VAR_5->mbps = 2500U;
   break;

  case 131:
   VAR_5->mbps = 1000U;
   break;

  case 133:
   VAR_5->mbps = 100U;
   break;

  default:
   return -VAR_0;
  }
 }

 return 0;
}
