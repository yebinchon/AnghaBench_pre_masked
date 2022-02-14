
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rc5t583_irq_data {size_t mask_reg_index; int int_en_bit; size_t master_bit; int grp_index; } ;
struct rc5t583 {int* group_irq_en; scalar_t__ irq_base; int dev; } ;
typedef int irqreturn_t ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int* VAR_7 ;
 struct rc5t583_irq_data* VAR_8 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct rc5t583 *VAR_11 = VAR_10;
 uint8_t VAR_12[VAR_2];
 uint8_t VAR_13 = 0;
 int VAR_14;
 int VAR_15;
 unsigned int VAR_16 = 0;


 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
  VAR_12[VAR_14] = 0;

 VAR_15 = FUNC_4(VAR_11->dev, VAR_1, &VAR_13);
 if (VAR_15 < 0) {
  FUNC_1(VAR_11->dev,
   "Error in reading reg 0x%02x error: %d\n",
   VAR_1, VAR_15);
  return VAR_0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_2; ++VAR_14) {
  if (!(VAR_13 & VAR_7[VAR_14]))
   continue;

  VAR_15 = FUNC_4(VAR_11->dev, VAR_6[VAR_14], &VAR_12[VAR_14]);
  if (VAR_15 < 0) {
   FUNC_2(VAR_11->dev,
    "Error in reading reg 0x%02x error: %d\n",
    VAR_6[VAR_14], VAR_15);
   VAR_12[VAR_14] = 0;
   continue;
  }

  if (VAR_7[VAR_14] & VAR_4) {
   VAR_16 = 0;
   if (VAR_12[VAR_14] & 0x1)
    VAR_16 |= FUNC_0(6);
   if (VAR_12[VAR_14] & 0x2)
    VAR_16 |= FUNC_0(7);
   if (VAR_12[VAR_14] & 0x4)
    VAR_16 |= FUNC_0(0);
   if (VAR_12[VAR_14] & 0x8)
    VAR_16 |= FUNC_0(5);
  }

  VAR_15 = FUNC_5(VAR_11->dev, VAR_5[VAR_14],
    ~VAR_12[VAR_14]);
  if (VAR_15 < 0)
   FUNC_2(VAR_11->dev,
    "Error in reading reg 0x%02x error: %d\n",
    VAR_5[VAR_14], VAR_15);

  if (VAR_7[VAR_14] & VAR_4)
   VAR_12[VAR_14] = VAR_16;
 }


 VAR_12[7] |= VAR_12[8];


 for (VAR_14 = 0; VAR_14 < VAR_3; ++VAR_14) {
  const struct rc5t583_irq_data *VAR_17 = &VAR_8[VAR_14];
  if ((VAR_12[VAR_17->mask_reg_index] & (1 << VAR_17->int_en_bit)) &&
   (VAR_11->group_irq_en[VAR_17->master_bit] &
     (1 << VAR_17->grp_index)))
   FUNC_3(VAR_11->irq_base + VAR_14);
 }

 return VAR_0;
}
