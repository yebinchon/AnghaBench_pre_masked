
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pcf50633 {int onkey1s_held; int* mask_regs; int* resume_reason; TYPE_1__* pdata; scalar_t__ is_suspended; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int* resumers; int (* force_shutdown ) (struct pcf50633*) ;} ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,char*,int,int,int,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct pcf50633*,int) ;
 int FUNC_5 (struct pcf50633*,int ,int,int*) ;
 int FUNC_6 (struct pcf50633*,int ,int) ;
 int FUNC_7 (struct pcf50633*,int ) ;
 int FUNC_8 (struct pcf50633*,int ,int,int) ;
 int FUNC_9 (struct pcf50633*,int ,int) ;
 int FUNC_10 (struct pcf50633*) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_15, void *VAR_16)
{
 struct pcf50633 *VAR_17 = VAR_16;
 int VAR_18, VAR_19, VAR_20;
 u8 VAR_21[5], VAR_22;


 VAR_18 = FUNC_5(VAR_17, VAR_10,
      FUNC_0(VAR_21), VAR_21);
 if (VAR_18 != FUNC_0(VAR_21)) {
  FUNC_2(VAR_17->dev, "Error reading INT registers\n");





  goto out;
 }


 FUNC_9(VAR_17, VAR_14, 0x04);



 if (VAR_21[0] & (VAR_4 | VAR_5)) {
  VAR_22 = FUNC_7(VAR_17, VAR_13);
  if (VAR_22 & (0x3 << 4))
   VAR_21[0] &= ~VAR_5;
  else
   VAR_21[0] &= ~VAR_4;
 }


 if (VAR_21[0] & (VAR_1 | VAR_2)) {
  VAR_22 = FUNC_7(VAR_17, VAR_13);
  if (VAR_22 & (0x3 << 4))
   VAR_21[0] &= ~VAR_2;
  else
   VAR_21[0] &= ~VAR_1;
 }

 FUNC_1(VAR_17->dev, "INT1=0x%02x INT2=0x%02x INT3=0x%02x "
   "INT4=0x%02x INT5=0x%02x\n", VAR_21[0],
   VAR_21[1], VAR_21[2], VAR_21[3], VAR_21[4]);



 if ((VAR_21[0] & VAR_3) && VAR_17->onkey1s_held) {
  FUNC_3(VAR_17->dev, "ONKEY1S held for %d secs\n",
       VAR_17->onkey1s_held);
  if (VAR_17->onkey1s_held++ == VAR_9)
   if (VAR_17->pdata->force_shutdown)
    VAR_17->pdata->force_shutdown(VAR_17);
 }

 if (VAR_21[2] & VAR_8) {
  FUNC_3(VAR_17->dev, "ONKEY1S held\n");
  VAR_17->onkey1s_held = 1 ;


  FUNC_6(VAR_17, VAR_11,
      VAR_3);


  FUNC_6(VAR_17, VAR_12,
      VAR_7);
 }

 if ((VAR_21[1] & VAR_7) && VAR_17->onkey1s_held) {
  VAR_17->onkey1s_held = 0;


  if (VAR_17->mask_regs[0] & VAR_3)
   FUNC_8(VAR_17,
     VAR_11,
     VAR_3,
     VAR_3);

  if (VAR_17->mask_regs[1] & VAR_7)
   FUNC_8(VAR_17,
     VAR_12,
     VAR_7,
     VAR_7);
 }


 if (VAR_17->is_suspended) {
  VAR_17->is_suspended = 0;


  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_21); VAR_19++)
   VAR_17->resume_reason[VAR_19] = VAR_21[VAR_19] &
      VAR_17->pdata->resumers[VAR_19];



  VAR_21[1] &= ~(VAR_7 | VAR_6);
 }

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_21); VAR_19++) {

  VAR_21[VAR_19] &= ~VAR_17->mask_regs[VAR_19];

  for (VAR_20 = 0; VAR_20 < 8 ; VAR_20++)
   if (VAR_21[VAR_19] & (1 << VAR_20))
    FUNC_4(VAR_17, (VAR_19 * 8) + VAR_20);
 }

out:
 return VAR_0;
}
