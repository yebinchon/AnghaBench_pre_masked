
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int link_up; int duplex; int line_speed; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bnx2*,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct bnx2 *VAR_9)
{
 u32 VAR_10;

 VAR_9->link_up = 1;
 FUNC_0(VAR_9, VAR_0, &VAR_10);
 switch (VAR_10 & VAR_2) {
  case 131:
   VAR_9->line_speed = VAR_5;
   break;
  case 130:
   VAR_9->line_speed = VAR_6;
   break;
  case 129:
   VAR_9->line_speed = VAR_7;
   break;
  case 128:
   VAR_9->line_speed = VAR_8;
   break;
 }
 if (VAR_10 & VAR_1)
  VAR_9->duplex = VAR_3;
 else
  VAR_9->duplex = VAR_4;

 return 0;
}
