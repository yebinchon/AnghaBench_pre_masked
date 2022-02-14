
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ir_raw_event {int dummy; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct ir_raw_event**,unsigned int,int *,int,int) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_1(enum rc_proto VAR_5, u32 VAR_6,
    struct ir_raw_event *VAR_7, unsigned int VAR_8)
{
 int VAR_9;
 struct ir_raw_event *VAR_10 = VAR_7;

 if (VAR_5 == VAR_3) {

  VAR_9 = FUNC_0(&VAR_10, VAR_8 - (VAR_10 - VAR_7),
         &VAR_4[0],
         VAR_2, (1 << 3));
  if (VAR_9 < 0)
   return VAR_9;


  VAR_9 = FUNC_0(&VAR_10, VAR_8 - (VAR_10 - VAR_7),
         &VAR_4[1], 1, 0);
  if (VAR_9 < 0)
   return VAR_9;


  VAR_9 = FUNC_0(&VAR_10, VAR_8 - (VAR_10 - VAR_7),
         &VAR_4[2], VAR_1,
         VAR_6);
  if (VAR_9 < 0)
   return VAR_9;

 } else {
  int VAR_11;

  switch (VAR_5) {
  case 128:
  case 129:
   VAR_11 = 32;
   break;
  case 130:
   VAR_11 = 24;
   break;
  case 131:
   VAR_11 = 20;
   break;
  default:
   return -VAR_0;
  }


  VAR_9 = FUNC_0(&VAR_10, VAR_8 - (VAR_10 - VAR_7),
         &VAR_4[0],
         VAR_2, (1 << 3 | 6));
  if (VAR_9 < 0)
   return VAR_9;


  VAR_9 = FUNC_0(&VAR_10, VAR_8 - (VAR_10 - VAR_7),
         &VAR_4[1], 1, 0);
  if (VAR_9 < 0)
   return VAR_9;


  VAR_9 = FUNC_0(&VAR_10, VAR_8 - (VAR_10 - VAR_7),
         &VAR_4[2],
         VAR_11,
         VAR_6);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return VAR_10 - VAR_7;
}
