
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv7180_state {TYPE_1__* chip_info; } ;
typedef enum adv7182_input_type { ____Placeholder_adv7182_input_type } adv7182_input_type ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;


 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (struct adv7180_state*,scalar_t__,int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int** VAR_10 ;
 unsigned int** VAR_11 ;

__attribute__((used)) static int FUNC_3(struct adv7180_state *VAR_12, unsigned int VAR_13)
{
 enum adv7182_input_type VAR_14;
 unsigned int *VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 VAR_17 = FUNC_1(VAR_12, VAR_6, VAR_13);
 if (VAR_17)
  return VAR_17;


 FUNC_1(VAR_12, VAR_8, 0x00);
 FUNC_1(VAR_12, VAR_8, 0xff);

 VAR_14 = FUNC_2(VAR_13);

 switch (VAR_14) {
 case 129:
 case 128:

  FUNC_1(VAR_12, VAR_9, 0x41);
  break;
 default:
  FUNC_1(VAR_12, VAR_9, 0x01);
  break;
 }

 if (VAR_12->chip_info->flags & VAR_0)
  VAR_15 = VAR_11[VAR_14];
 else
  VAR_15 = VAR_10[VAR_14];

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_10[0]); VAR_16++)
  FUNC_1(VAR_12, VAR_4 + VAR_16, VAR_15[VAR_16]);

 if (VAR_14 == 128) {

  FUNC_1(VAR_12, VAR_7, 0xa8);
  FUNC_1(VAR_12, VAR_3, 0x90);
  FUNC_1(VAR_12, VAR_5, 0xb0);
  FUNC_1(VAR_12, VAR_1, 0x08);
  FUNC_1(VAR_12, VAR_2, 0xa0);
 } else {
  FUNC_1(VAR_12, VAR_7, 0xf0);
  FUNC_1(VAR_12, VAR_3, 0xd0);
  FUNC_1(VAR_12, VAR_5, 0x10);
  FUNC_1(VAR_12, VAR_1, 0x9c);
  FUNC_1(VAR_12, VAR_2, 0x00);
 }

 return 0;
}
