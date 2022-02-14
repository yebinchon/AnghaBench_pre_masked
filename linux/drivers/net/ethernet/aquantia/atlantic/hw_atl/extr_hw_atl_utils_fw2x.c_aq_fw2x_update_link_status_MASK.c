
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_link_status_s {int mbps; } ;
struct aq_hw_s {struct aq_hw_link_status_s aq_link_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aq_hw_s*,int ) ;

__attribute__((used)) static int FUNC_1(struct aq_hw_s *VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_6, VAR_5);
 u32 VAR_8 = VAR_7 & (VAR_0 | VAR_2 |
     VAR_3 | VAR_4 | VAR_1);
 struct aq_hw_link_status_s *VAR_9 = &VAR_6->aq_link_status;

 if (VAR_8) {
  if (VAR_8 & VAR_1)
   VAR_9->mbps = 10000;
  else if (VAR_8 & VAR_4)
   VAR_9->mbps = 5000;
  else if (VAR_8 & VAR_3)
   VAR_9->mbps = 2500;
  else if (VAR_8 & VAR_2)
   VAR_9->mbps = 1000;
  else if (VAR_8 & VAR_0)
   VAR_9->mbps = 100;
  else
   VAR_9->mbps = 10000;
 } else {
  VAR_9->mbps = 0;
 }

 return 0;
}
