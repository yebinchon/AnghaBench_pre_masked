
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcmm_dec {int count; void* state; int bits; } ;
struct rc_dev {int enabled_protocols; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct rc_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_5, struct rcmm_dec *VAR_6)
{
 switch (VAR_6->count) {
 case 24:
  if (VAR_5->enabled_protocols & VAR_1) {
   FUNC_0(VAR_5, VAR_3, VAR_6->bits, 0);
   VAR_6->state = VAR_4;
   return 0;
  }
  return -1;

 case 12:
  if (VAR_5->enabled_protocols & VAR_0) {
   FUNC_0(VAR_5, VAR_2, VAR_6->bits, 0);
   VAR_6->state = VAR_4;
   return 0;
  }
  return -1;
 }

 return -1;
}
