
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct twl6030_irq {int * irq_mapping_tbl; int irq_domain; } ;
typedef int irqreturn_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int*,int ,int) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;
 union {
  u8 bytes[4];
  __le32 int_sts;
 } VAR_7;
 u32 VAR_8;
 struct twl6030_irq *VAR_9 = VAR_4;


 VAR_6 = FUNC_6(VAR_2, VAR_7.bytes, VAR_1, 3);
 if (VAR_6) {
  FUNC_5("twl6030_irq: I2C error %d reading PIH ISR\n", VAR_6);
  return VAR_0;
 }

 VAR_7.bytes[3] = 0;





 if (VAR_7.bytes[2] & 0x10)
  VAR_7.bytes[2] |= 0x08;

 VAR_8 = FUNC_2(VAR_7.int_sts);
 for (VAR_5 = 0; VAR_8; VAR_8 >>= 1, VAR_5++)
  if (VAR_8 & 0x1) {
   int VAR_10 =
    FUNC_1(VAR_9->irq_domain,
       VAR_9->irq_mapping_tbl[VAR_5]);
   if (VAR_10)
    FUNC_0(VAR_10);
   else
    FUNC_4("twl6030_irq: Unmapped PIH ISR %u detected\n",
           VAR_5);
   FUNC_3("twl6030_irq: PIH ISR %u, virq%u\n",
     VAR_5, VAR_10);
  }
 VAR_6 = FUNC_7(VAR_2, 0x00, VAR_1);
 if (VAR_6)
  FUNC_5("twl6030_irq: I2C error in clearing PIH ISR\n");

 return VAR_0;
}
