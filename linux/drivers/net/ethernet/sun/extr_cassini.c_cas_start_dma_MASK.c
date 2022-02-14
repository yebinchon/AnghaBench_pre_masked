
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cas {int cas_flags; scalar_t__ regs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct cas*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_7(struct cas *VAR_17)
{
 int VAR_18;
 u32 VAR_19;
 int VAR_20 = 0;


 VAR_19 = FUNC_4(VAR_17->regs + VAR_13) | VAR_16;
 FUNC_6(VAR_19, VAR_17->regs + VAR_13);
 VAR_19 = FUNC_4(VAR_17->regs + VAR_10) | VAR_14;
 FUNC_6(VAR_19, VAR_17->regs + VAR_10);


 VAR_19 = FUNC_4(VAR_17->regs + VAR_7) | VAR_2;
 FUNC_6(VAR_19, VAR_17->regs + VAR_7);
 VAR_19 = FUNC_4(VAR_17->regs + VAR_5) | VAR_1;
 FUNC_6(VAR_19, VAR_17->regs + VAR_5);

 VAR_18 = VAR_15;
 while (VAR_18-- > 0) {
  VAR_19 = FUNC_4(VAR_17->regs + VAR_7);
  if ((VAR_19 & VAR_2))
   break;
  FUNC_5(10);
 }
 if (VAR_18 < 0) VAR_20 = 1;
 VAR_18 = VAR_15;
 while (VAR_18-- > 0) {
  VAR_19 = FUNC_4(VAR_17->regs + VAR_5);
  if ((VAR_19 & VAR_1)) {
   if (VAR_20) {
    FUNC_3(VAR_17->dev,
        "enabling mac failed [tx:%08x:%08x]\n",
        FUNC_4(VAR_17->regs + VAR_8),
        FUNC_4(VAR_17->regs + VAR_6));
   }
   goto enable_rx_done;
  }
  FUNC_5(10);
 }
 FUNC_3(VAR_17->dev, "enabling mac failed [%s:%08x:%08x]\n",
     (VAR_20 ? "tx,rx" : "rx"),
     FUNC_4(VAR_17->regs + VAR_8),
     FUNC_4(VAR_17->regs + VAR_6));

enable_rx_done:
 FUNC_2(VAR_17);
 FUNC_6(FUNC_1(0) - 4, VAR_17->regs + VAR_12);
 FUNC_6(0, VAR_17->regs + VAR_11);

 if (VAR_17->cas_flags & VAR_0) {
  if (VAR_4 > 1)
   FUNC_6(FUNC_1(1) - 4,
          VAR_17->regs + VAR_9);

  for (VAR_18 = 1; VAR_18 < VAR_3; VAR_18++)
   FUNC_6(0, VAR_17->regs + FUNC_0(VAR_18));
 }
}
