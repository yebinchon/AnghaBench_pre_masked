
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rc_scancode_filter {int mask; int data; } ;
struct rc_dev {int wakeup_protocol; scalar_t__ encode_wakeup; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;
struct TYPE_3__ {int scancode_bits; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_2,
         struct rc_scancode_filter *VAR_3)
{
 u32 VAR_4, VAR_5 = VAR_3->data;
 enum rc_proto VAR_6 = VAR_2->wakeup_protocol;

 if (VAR_6 >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_4 = VAR_1[VAR_6].scancode_bits;

 if (!FUNC_1(VAR_6, VAR_5))
  return -VAR_0;

 VAR_3->data &= VAR_4;
 VAR_3->mask &= VAR_4;




 if (VAR_2->encode_wakeup && VAR_3->mask != 0 && VAR_3->mask != VAR_4)
  return -VAR_0;

 return 0;
}
