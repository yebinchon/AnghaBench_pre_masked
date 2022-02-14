
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int line; int lock; scalar_t__ membase; TYPE_2__* dev; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (int) ;
 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_1 (int ,struct uart_port*) ;
 int ** VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 unsigned char FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char const*,struct uart_port*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (unsigned char,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct uart_port *VAR_22)
{
 const char *VAR_23 = FUNC_7(VAR_22->dev)->name;
 unsigned long VAR_24;
 int VAR_25, VAR_26 = VAR_22->line;
 unsigned char VAR_27;

 VAR_25 = FUNC_4(VAR_19[VAR_26][VAR_17], VAR_20,
    0, VAR_23, VAR_22);
 if (VAR_25)
  return VAR_25;
 VAR_25 = FUNC_4(VAR_19[VAR_26][VAR_18], VAR_21,
    0, VAR_23, VAR_22);
 if (VAR_25) {
  FUNC_1(VAR_19[VAR_26][VAR_17], VAR_22);
  return VAR_25;
 }

 VAR_27 = FUNC_3(VAR_22->membase + VAR_6);
 if (FUNC_2(VAR_22->dev->of_node, "auto-flow-control"))
  VAR_27 |= VAR_0;
 FUNC_5(&VAR_22->lock, VAR_24);
 FUNC_8(0, VAR_22->membase + VAR_9);
 FUNC_8(VAR_27, VAR_22->membase + VAR_6);
 FUNC_8(VAR_15, VAR_22->membase + VAR_9);
 FUNC_8(VAR_16, VAR_22->membase + VAR_10);
 FUNC_9(0, VAR_22->membase + VAR_8);
 FUNC_9(VAR_1 | VAR_2,
        VAR_22->membase + VAR_8);
 FUNC_9(VAR_3 | VAR_4 | VAR_5,
        VAR_22->membase + VAR_8);
 FUNC_9(0, VAR_22->membase + VAR_7);
 FUNC_9(FUNC_0(12), VAR_22->membase + VAR_7);

 FUNC_8(VAR_14 | VAR_11 | VAR_13 |
        VAR_12, VAR_22->membase + VAR_9);
 FUNC_6(&VAR_22->lock, VAR_24);

 return 0;
}
