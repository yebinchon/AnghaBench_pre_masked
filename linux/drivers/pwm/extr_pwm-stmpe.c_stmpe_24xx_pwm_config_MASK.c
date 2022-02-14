
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct stmpe_pwm {int last_duty; TYPE_1__* stmpe; } ;
struct pwm_device {unsigned int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct TYPE_3__ {scalar_t__ partnum; } ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 unsigned long FUNC_2 (unsigned long,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int ,char*,int,unsigned int,...) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct pwm_device*) ;
 int FUNC_7 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_8 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 struct stmpe_pwm* FUNC_11 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_12(struct pwm_chip *VAR_17, struct pwm_device *VAR_18,
     int VAR_19, int VAR_20)
{
 struct stmpe_pwm *VAR_21 = FUNC_11(VAR_17);
 unsigned int VAR_22, VAR_23;
 u16 VAR_24[3] = {
  VAR_7,
  VAR_2,
  VAR_2,
 };
 u8 VAR_25;
 int VAR_26;


 if (FUNC_6(VAR_18)) {
  FUNC_7(VAR_17, VAR_18);
 } else {

  VAR_23 = VAR_18->hwpwm;


  if (VAR_21->stmpe->partnum == VAR_10 ||
      VAR_21->stmpe->partnum == VAR_11)
   VAR_23 += VAR_16;

  VAR_26 = FUNC_10(VAR_21->stmpe, FUNC_1(VAR_23),
     VAR_15);
  if (VAR_26) {
   FUNC_4(VAR_17->dev, "unable to connect PWM#%u to pin\n",
    VAR_18->hwpwm);
   return VAR_26;
  }
 }


 switch (VAR_18->hwpwm) {
 case 0:
  VAR_25 = VAR_12;
  break;

 case 1:
  VAR_25 = VAR_13;
  break;

 case 2:
  VAR_25 = VAR_14;
  break;

 default:

  return -VAR_1;
 }

 FUNC_3(VAR_17->dev, "PWM#%u: config duty %d ns, period %d ns\n",
  VAR_18->hwpwm, VAR_19, VAR_20);

 if (VAR_19 == 0) {
  if (VAR_21->stmpe->partnum == VAR_10)
   VAR_24[0] = VAR_7;

  if (VAR_21->stmpe->partnum == VAR_11)
   VAR_24[0] = VAR_3 | 0xff;

  VAR_21->last_duty = 0x00;
 } else if (VAR_19 == VAR_20) {
  if (VAR_21->stmpe->partnum == VAR_10)
   VAR_24[0] = VAR_8;

  if (VAR_21->stmpe->partnum == VAR_11)
   VAR_24[0] = VAR_3 | 0x00;

  VAR_21->last_duty = 0xff;
 } else {
  u8 VAR_27, VAR_28 = VAR_21->last_duty;
  unsigned long VAR_29;
  VAR_29 = VAR_19 * 256;
  VAR_29 = FUNC_2(VAR_29, VAR_20);
  VAR_27 = VAR_29;

  if (VAR_27 == VAR_28) {

   if (FUNC_6(VAR_18))
    FUNC_8(VAR_17, VAR_18);

   return 0;
  } else if (VAR_21->stmpe->partnum == VAR_11) {

   VAR_24[0] = VAR_3 | VAR_27;
   VAR_24[1] = 0x0000;
  } else if (VAR_21->stmpe->partnum == VAR_10) {

   u16 VAR_30 = 0x0000;

   if (VAR_28 < VAR_27)

    VAR_30 = VAR_6 | (VAR_27 - VAR_28);
   else

    VAR_30 = VAR_5 | (VAR_28 - VAR_27);


   VAR_24[0] = VAR_4 | VAR_9 | VAR_30;


   VAR_24[1] = VAR_0;
  }

  FUNC_3(VAR_17->dev,
   "PWM#%u: value = %02x, last_duty = %02x, program=%04x,%04x,%04x\n",
   VAR_18->hwpwm, VAR_27, VAR_28, VAR_24[0], VAR_24[1],
   VAR_24[2]);
  VAR_21->last_duty = VAR_27;
 }




 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_24); VAR_22++) {
  u8 VAR_31;

  VAR_31 = (VAR_24[VAR_22] >> 8) & 0xff;

  VAR_26 = FUNC_9(VAR_21->stmpe, VAR_25, VAR_31);
  if (VAR_26) {
   FUNC_4(VAR_17->dev, "error writing register %02x: %d\n",
    VAR_25, VAR_26);
   return VAR_26;
  }

  VAR_31 = VAR_24[VAR_22] & 0xff;

  VAR_26 = FUNC_9(VAR_21->stmpe, VAR_25, VAR_31);
  if (VAR_26) {
   FUNC_4(VAR_17->dev, "error writing register %02x: %d\n",
    VAR_25, VAR_26);
   return VAR_26;
  }
 }


 if (FUNC_6(VAR_18))
  FUNC_8(VAR_17, VAR_18);


 FUNC_5(200);

 FUNC_3(VAR_17->dev, "programmed PWM#%u, %u bytes\n", VAR_18->hwpwm, VAR_22);

 return 0;
}
