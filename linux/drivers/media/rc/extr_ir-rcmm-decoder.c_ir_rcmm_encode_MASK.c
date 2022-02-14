
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ir_raw_event {int dummy; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;



 int FUNC_0 (struct ir_raw_event**,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_1(enum rc_proto VAR_1, u32 VAR_2,
     struct ir_raw_event *VAR_3, unsigned int VAR_4)
{
 struct ir_raw_event *VAR_5 = VAR_3;
 int VAR_6;

 switch (VAR_1) {
 case 128:
  VAR_6 = FUNC_0(&VAR_5, VAR_4, 32, VAR_2);
  break;
 case 129:
  VAR_6 = FUNC_0(&VAR_5, VAR_4, 24, VAR_2);
  break;
 case 130:
  VAR_6 = FUNC_0(&VAR_5, VAR_4, 12, VAR_2);
  break;
 default:
  VAR_6 = -VAR_0;
 }

 if (VAR_6 < 0)
  return VAR_6;

 return VAR_5 - VAR_3;
}
