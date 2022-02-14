
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct rc_scancode_filter {int data; int mask; } ;
struct rc_dev {int wakeup_protocol; } ;
struct ir_raw_event {scalar_t__ pulse; int duration; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ,long) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,struct ir_raw_event*,int) ;
 int FUNC_2 (struct ir_raw_event*) ;
 struct ir_raw_event* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct rc_dev*,unsigned int*,int) ;

__attribute__((used)) static int FUNC_5(struct rc_dev *VAR_7,
     struct rc_scancode_filter *VAR_8)
{
 u8 VAR_9;
 int VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13;
 struct ir_raw_event *VAR_14;
 u8 VAR_15[VAR_6];
 bool VAR_16;


 if (!VAR_8->mask)
  return 0;

 VAR_14 = FUNC_3(VAR_6, sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_3;

 VAR_11 = FUNC_1(VAR_7->wakeup_protocol, VAR_8->data,
         VAR_14, VAR_6);
 VAR_16 = (VAR_11 != -VAR_2);
 if (!VAR_16)
  VAR_11 = VAR_6;
 else if (VAR_11 < 0)
  goto out_raw;


 for (VAR_10 = 0, VAR_12 = 0; VAR_10 < VAR_11 && VAR_12 < VAR_6; ++VAR_10) {

  VAR_13 = FUNC_0(VAR_14[VAR_10].duration, 1000L) / VAR_5;


  while (VAR_13 > 0 && VAR_12 < VAR_6) {

   if (VAR_16 && VAR_10 == VAR_11 - 1 && VAR_13 < VAR_0)
    break;


   VAR_9 = (VAR_13 > VAR_0) ? VAR_0 : VAR_13;

   VAR_15[VAR_12] = VAR_9;
   VAR_13 -= VAR_9;
   if ((VAR_14[VAR_10]).pulse)
    VAR_15[VAR_12] |= VAR_1;
   VAR_12++;
  }
 }

 FUNC_4(VAR_7, VAR_15, VAR_12);
 VAR_11 = 0;
out_raw:
 FUNC_2(VAR_14);

 return VAR_11;
}
