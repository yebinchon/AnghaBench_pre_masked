
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_chip {char* name; int irq_ack; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {int irq_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,char*,int,int,int) ;
 struct irq_chip VAR_4 ;
 int FUNC_3 (int) ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,int ,int,int ) ;
 int FUNC_5 (struct device_node*,int,int,int ,int *,int *) ;
 int VAR_7 ;
 int FUNC_6 (int,struct irq_chip*,int *) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int *,int ,int ,char*,int *) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_10 (struct device*,int ,int) ;
 int VAR_10 ;

int FUNC_11(struct device *VAR_11, int VAR_12)
{
 static struct irq_chip VAR_13;
 int VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 struct device_node *VAR_19 = VAR_11->of_node;






 VAR_18 = VAR_3 + VAR_1;

 VAR_16 = FUNC_4(-1, 0, VAR_18, 0);
 if (VAR_16 < 0) {
  FUNC_1(VAR_11, "Fail to allocate IRQ descs\n");
  return VAR_16;
 }

 FUNC_5(VAR_19, VAR_18, VAR_16, 0,
         &VAR_7, ((void*)0));

 VAR_17 = VAR_16 + VAR_1;





 VAR_14 = FUNC_9(VAR_10);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_8 = VAR_16;





 VAR_13 = VAR_4;
 VAR_13.name = "twl4030";

 VAR_9.irq_ack = VAR_4.irq_ack;

 for (VAR_15 = VAR_16; VAR_15 < VAR_17; VAR_15++) {
  FUNC_6(VAR_15, &VAR_13,
      VAR_5);
  FUNC_7(VAR_15, 1);
  FUNC_0(VAR_15);
 }

 FUNC_2(VAR_11, "%s (irq %d) chaining IRQs %d..%d\n", "PIH",
   VAR_12, VAR_16, VAR_17);


 VAR_14 = FUNC_10(VAR_11, VAR_2, VAR_17);
 if (VAR_14 < 0) {
  FUNC_1(VAR_11, "sih_setup PWR INT --> %d\n", VAR_14);
  goto fail;
 }


 VAR_14 = FUNC_8(VAR_12, ((void*)0), VAR_6,
          VAR_0,
          "TWL4030-PIH", ((void*)0));
 if (VAR_14 < 0) {
  FUNC_1(VAR_11, "could not claim irq%d: %d\n", VAR_12, VAR_14);
  goto fail_rqirq;
 }
 FUNC_3(VAR_12);

 return VAR_16;
fail_rqirq:

fail:
 for (VAR_15 = VAR_16; VAR_15 < VAR_17; VAR_15++) {
  FUNC_7(VAR_15, 0);
  FUNC_6(VAR_15, ((void*)0), ((void*)0));
 }

 return VAR_14;
}
