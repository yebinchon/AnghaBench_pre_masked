
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int iobase; int irq; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct irq_data {int dummy; } ;
struct fintek_8250 {int base_port; int key; int index; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct fintek_8250*) ;
 scalar_t__ FUNC_2 (int const,int const) ;
 int FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (struct fintek_8250*,int*,int*) ;
 int FUNC_5 (struct uart_8250_port*,struct fintek_8250*) ;
 int FUNC_6 (struct fintek_8250*,int) ;
 int FUNC_7 (struct fintek_8250*) ;
 struct irq_data* FUNC_8 (int ) ;
 int FUNC_9 (struct irq_data*) ;
 int FUNC_10 (struct fintek_8250*,int ) ;
 int FUNC_11 (struct fintek_8250*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct fintek_8250 *VAR_4,
     struct uart_8250_port *VAR_5)
{
 static const u16 VAR_6[] = {0x4e, 0x2e};
 static const u8 VAR_7[] = {0x77, 0xa0, 0x87, 0x67};
 struct irq_data *VAR_8;
 bool VAR_9 = 0;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++) {
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++) {
   VAR_4->base_port = VAR_6[VAR_10];
   VAR_4->key = VAR_7[VAR_11];

   if (FUNC_2(VAR_6[VAR_10], VAR_7[VAR_11]))
    continue;
   if (FUNC_1(VAR_4) ||
       FUNC_4(VAR_4, &VAR_13, &VAR_14)) {
    FUNC_3(VAR_6[VAR_10]);
    continue;
   }

   for (VAR_12 = VAR_13; VAR_12 < VAR_14; VAR_12++) {
    u16 VAR_15;

    FUNC_11(VAR_4, VAR_3, VAR_12);
    VAR_15 = FUNC_10(VAR_4, VAR_1);
    VAR_15 |= FUNC_10(VAR_4, VAR_2) << 8;
    if (VAR_15 != VAR_5->port.iobase)
     continue;

    VAR_4->index = VAR_12;

    VAR_8 = FUNC_8(VAR_5->port.irq);
    if (VAR_8)
     VAR_9 =
      FUNC_9(VAR_8);

    FUNC_6(VAR_4, VAR_9);
    FUNC_7(VAR_4);
    FUNC_5(VAR_5, VAR_4);

    FUNC_3(VAR_6[VAR_10]);

    return 0;
   }

   FUNC_3(VAR_6[VAR_10]);
  }
 }

 return -VAR_0;
}
