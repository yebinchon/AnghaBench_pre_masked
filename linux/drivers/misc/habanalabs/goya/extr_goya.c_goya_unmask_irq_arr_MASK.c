
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hl_device {int dev; } ;
struct TYPE_2__ {void* ctl; } ;
struct armcp_unmask_irq_arr_packet {TYPE_1__ armcp_pkt; int irqs; void* length; } ;
typedef int irq_arr ;
typedef void* __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hl_device*,int*,size_t,int ,long*) ;
 int FUNC_3 (struct armcp_unmask_irq_arr_packet*) ;
 struct armcp_unmask_irq_arr_packet* FUNC_4 (size_t,int ) ;

__attribute__((used)) static int FUNC_5(struct hl_device *VAR_7, u32 *VAR_8,
  size_t VAR_9)
{
 struct armcp_unmask_irq_arr_packet *VAR_10;
 size_t VAR_11;
 long VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 __le32 *VAR_16;

 VAR_11 = sizeof(struct armcp_unmask_irq_arr_packet) +
   VAR_9;


 VAR_11 = (VAR_11 + 0x7) & ~0x7;


 if (VAR_11 > VAR_6) {
  FUNC_1(VAR_7->dev, "too many elements in IRQ array\n");
  return -VAR_2;
 }

 VAR_10 = FUNC_4(VAR_11, VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_14 = VAR_9 / sizeof(VAR_8[0]);
 VAR_10->length = FUNC_0(VAR_14);




 for (VAR_15 = 0, VAR_16 = (__le32 *) &VAR_10->irqs;
   VAR_15 < VAR_14 ; VAR_15++)
  VAR_16[VAR_15] =
    FUNC_0(VAR_8[VAR_15]);

 VAR_10->armcp_pkt.ctl = FUNC_0(VAR_0 <<
      VAR_1);

 VAR_13 = FUNC_2(VAR_7, (u32 *) VAR_10, VAR_11,
   VAR_5, &VAR_12);

 if (VAR_13)
  FUNC_1(VAR_7->dev, "failed to unmask IRQ array\n");

 FUNC_3(VAR_10);

 return VAR_13;
}
