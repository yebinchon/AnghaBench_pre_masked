
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct db2k_private {scalar_t__ plx; } ;
struct comedi_device {scalar_t__ mmio; int class_dev; struct db2k_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*,int,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_7, const u8 *VAR_8,
         size_t VAR_9, unsigned long VAR_10)
{
 struct db2k_private *VAR_11 = VAR_7->private;
 int VAR_12 = -VAR_4;
 u32 VAR_13;
 int VAR_14;
 size_t VAR_15;
 bool VAR_16;


 for (VAR_15 = 0; VAR_15 + 1 < VAR_9; VAR_15++) {
  if (VAR_8[VAR_15] == 0xff && VAR_8[VAR_15 + 1] == 0x20)
   break;
 }
 if (VAR_15 + 1 >= VAR_9) {
  FUNC_6(VAR_7->class_dev, "bad firmware - no start sequence\n");
  return -VAR_3;
 }

 if ((VAR_9 - VAR_15) & 1) {
  FUNC_6(VAR_7->class_dev,
   "bad firmware - odd length (%zu = %zu - %zu)\n",
   VAR_9 - VAR_15, VAR_9, VAR_15);
  return -VAR_3;
 }

 VAR_8 += VAR_15;
 VAR_9 -= VAR_15;


 VAR_13 = FUNC_7(VAR_11->plx + VAR_6);
 if (!(VAR_13 & VAR_5))
  return -VAR_4;

 for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
  FUNC_2(VAR_7);
  FUNC_1(VAR_7);
  FUNC_0(VAR_7);
  VAR_12 = FUNC_3(VAR_7);
  if (VAR_12)
   continue;

  VAR_16 = (FUNC_8(VAR_7->mmio + VAR_2) &
       VAR_0) == VAR_1;
  for (; VAR_15 < VAR_9; VAR_15 += 2) {
   u16 VAR_17 = (VAR_8[VAR_15] << 8) + VAR_8[VAR_15 + 1];

   VAR_12 = FUNC_5(VAR_7, VAR_17, VAR_16);
   if (VAR_12)
    break;
  }
  if (VAR_12 == 0)
   VAR_12 = FUNC_4(VAR_7);
  if (VAR_12 == 0) {
   FUNC_2(VAR_7);
   FUNC_1(VAR_7);
   break;
  }
 }
 return VAR_12;
}
