
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct comedi_device {scalar_t__ mmio; int class_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
         const u8 *VAR_5, size_t VAR_6,
         unsigned long VAR_7)
{
 static const int VAR_8 = 1000;
 int VAR_9 = VAR_7;
 int VAR_10;
 size_t VAR_11;

 FUNC_5(0x80 | VAR_9, VAR_4->mmio + VAR_1);
 FUNC_5(0xc0 | VAR_9, VAR_4->mmio + VAR_1);
 for (VAR_10 = 0;
      (FUNC_2(VAR_4->mmio + VAR_3) & 0x2) == 0 &&
      VAR_10 < VAR_8; ++VAR_10) {
  FUNC_4(1);
 }
 if (VAR_10 == VAR_8) {
  FUNC_0(VAR_4->class_dev,
    "ni_pcidio: failed to load fpga %i, waiting for status 0x2\n",
    VAR_9);
  return -VAR_0;
 }
 FUNC_5(0x80 | VAR_9, VAR_4->mmio + VAR_1);
 for (VAR_10 = 0;
      FUNC_2(VAR_4->mmio + VAR_3) != 0x3 &&
      VAR_10 < VAR_8; ++VAR_10) {
  FUNC_4(1);
 }
 if (VAR_10 == VAR_8) {
  FUNC_0(VAR_4->class_dev,
    "ni_pcidio: failed to load fpga %i, waiting for status 0x3\n",
    VAR_9);
  return -VAR_0;
 }
 for (VAR_11 = 0; VAR_11 + 1 < VAR_6;) {
  unsigned int VAR_12 = VAR_5[VAR_11++];

  VAR_12 |= VAR_5[VAR_11++] << 8;
  FUNC_5(VAR_12, VAR_4->mmio + VAR_2);
  for (VAR_10 = 0;
       (FUNC_2(VAR_4->mmio + VAR_3) & 0x2) == 0
       && VAR_10 < VAR_8; ++VAR_10) {
   FUNC_4(1);
  }
  if (VAR_10 == VAR_8) {
   FUNC_0(VAR_4->class_dev,
     "ni_pcidio: failed to load word into fpga %i\n",
     VAR_9);
   return -VAR_0;
  }
  if (FUNC_1())
   FUNC_3();
 }
 FUNC_5(0x0, VAR_4->mmio + VAR_1);
 return 0;
}
