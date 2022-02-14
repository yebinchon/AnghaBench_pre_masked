
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_scancode_filter {int data; int mask; } ;
struct rc_dev {int wakeup_protocol; } ;
struct ir_raw_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct ir_raw_event*,unsigned int const) ;
 int FUNC_1 (struct rc_dev*) ;
 int FUNC_2 (struct rc_dev*,struct ir_raw_event*) ;
 int FUNC_3 (struct ir_raw_event*) ;
 struct ir_raw_event* FUNC_4 (unsigned int const,int,int ) ;

__attribute__((used)) static int FUNC_5(struct rc_dev *VAR_3,
      struct rc_scancode_filter *VAR_4)
{
 static const unsigned int VAR_5 = 512;
 struct ir_raw_event *VAR_6;
 int VAR_7;
 int VAR_8;


 if (!VAR_4->mask)
  return 0;


 VAR_6 = FUNC_4(VAR_5, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_3->wakeup_protocol, VAR_4->data, VAR_6, VAR_5);

 if (VAR_7 == -VAR_0)
  VAR_7 = VAR_5;
 if (VAR_7 >= 0) {

  for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
   FUNC_2(VAR_3, &VAR_6[VAR_8]);
  FUNC_1(VAR_3);

  VAR_7 = 0;
 }

 FUNC_3(VAR_6);

 return VAR_7;
}
