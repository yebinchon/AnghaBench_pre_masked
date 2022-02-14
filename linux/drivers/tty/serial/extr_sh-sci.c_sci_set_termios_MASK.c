
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {scalar_t__ type; int flags; int lock; int mctrl; int status; int dev; int uartclk; } ;
struct sci_port {unsigned int hscif_tot; int autorts; int rx_frame; int rx_timeout; int buf_len_rx; TYPE_1__* cfg; int * clks; int * clk_rates; } ;
struct plat_sci_reg {scalar_t__ size; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_2__ {unsigned int scscr; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned short VAR_20 ;
 unsigned short VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 unsigned int VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int VAR_34 ;
 unsigned int VAR_35 ;
 unsigned int VAR_36 ;
 unsigned int VAR_37 ;
 unsigned int VAR_38 ;
 unsigned int VAR_39 ;
 unsigned int VAR_40 ;
 unsigned int VAR_41 ;
 unsigned int VAR_42 ;
 unsigned int VAR_43 ;
 unsigned int VAR_44 ;
 unsigned int VAR_45 ;
 unsigned int VAR_46 ;
 unsigned int VAR_47 ;
 unsigned int VAR_48 ;
 scalar_t__ FUNC_2 (struct uart_port*,int) ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int ,char*,int ,unsigned int,int) ;
 unsigned long FUNC_6 (unsigned long,int ) ;
 unsigned long FUNC_7 (struct sci_port*) ;
 int FUNC_8 (struct sci_port*,unsigned int,int ,unsigned int*,unsigned int*) ;
 int FUNC_9 (struct uart_port*) ;
 struct plat_sci_reg* FUNC_10 (struct uart_port*,int ) ;
 int FUNC_11 (struct uart_port*,int) ;
 int FUNC_12 (struct sci_port*) ;
 int FUNC_13 (struct sci_port*) ;
 int FUNC_14 (struct uart_port*) ;
 int FUNC_15 (struct sci_port*,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_16 (struct sci_port*,unsigned int,unsigned int*) ;
 int FUNC_17 (struct uart_port*,int ) ;
 int FUNC_18 (struct uart_port*) ;
 unsigned int FUNC_19 (struct uart_port*,int ) ;
 int FUNC_20 (struct uart_port*,int ,unsigned int) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 struct sci_port* FUNC_23 (struct uart_port*) ;
 unsigned int FUNC_24 (struct uart_port*,struct ktermios*,struct ktermios*,int ,unsigned long) ;
 int FUNC_25 (struct uart_port*,int,unsigned int) ;
 int FUNC_26 (int) ;

__attribute__((used)) static void FUNC_27(struct uart_port *VAR_51, struct ktermios *VAR_52,
       struct ktermios *VAR_53)
{
 unsigned int VAR_54, VAR_55 = VAR_33, VAR_56 = 0, VAR_57, VAR_58;
 unsigned int VAR_59 = 255, VAR_60 = 0, VAR_61 = 15, VAR_62 = 0, VAR_63 = 0;
 unsigned int VAR_64 = 255, VAR_65 = 0, VAR_66 = 15, VAR_67 = 0;
 struct sci_port *VAR_68 = FUNC_23(VAR_51);
 const struct plat_sci_reg *VAR_69;
 int VAR_70 = VAR_9, VAR_71;
 unsigned long VAR_72 = 0;
 int VAR_73 = -1;
 unsigned long VAR_74;

 if ((VAR_52->c_cflag & VAR_2) == 128)
  VAR_55 |= VAR_34;
 if (VAR_52->c_cflag & VAR_10)
  VAR_55 |= VAR_38;
 if (VAR_52->c_cflag & VAR_11)
  VAR_55 |= VAR_38 | VAR_37;
 if (VAR_52->c_cflag & VAR_3)
  VAR_55 |= VAR_48;
 if (!VAR_51->uartclk) {
  VAR_54 = FUNC_24(VAR_51, VAR_52, VAR_53, 0, 115200);
  goto done;
 }

 for (VAR_57 = 0; VAR_57 < VAR_24; VAR_57++)
  VAR_72 = FUNC_6(VAR_72, VAR_68->clk_rates[VAR_57]);

 VAR_54 = FUNC_24(VAR_51, VAR_52, VAR_53, 0, VAR_72 / FUNC_7(VAR_68));
 if (!VAR_54)
  goto done;







 if (VAR_68->clk_rates[VAR_26] && VAR_51->type != VAR_12 &&
     VAR_51->type != VAR_13) {
  VAR_71 = FUNC_16(VAR_68, VAR_54, &VAR_66);
  if (FUNC_3(VAR_71) < FUNC_3(VAR_70)) {
   VAR_73 = VAR_26;
   VAR_56 = VAR_29;
   VAR_63 = VAR_16;
   VAR_70 = VAR_71;
   VAR_61 = VAR_66;
   if (!VAR_71)
    goto done;
  }
 }


 if (VAR_68->clk_rates[VAR_25] && FUNC_10(VAR_51, VAR_18)->size) {
  VAR_71 = FUNC_8(VAR_68, VAR_54, VAR_68->clk_rates[VAR_25], &VAR_67,
       &VAR_66);
  if (FUNC_3(VAR_71) < FUNC_3(VAR_70)) {
   VAR_73 = VAR_25;
   VAR_56 = VAR_29;
   VAR_63 = 0;
   VAR_70 = VAR_71;
   VAR_62 = VAR_67;
   VAR_61 = VAR_66;
   if (!VAR_71)
    goto done;
  }
 }


 if (VAR_68->clk_rates[VAR_22] && FUNC_10(VAR_51, VAR_18)->size) {
  VAR_71 = FUNC_8(VAR_68, VAR_54, VAR_68->clk_rates[VAR_22], &VAR_67,
       &VAR_66);
  if (FUNC_3(VAR_71) < FUNC_3(VAR_70)) {
   VAR_73 = VAR_22;
   VAR_56 = VAR_29;
   VAR_63 = VAR_17;
   VAR_70 = VAR_71;
   VAR_62 = VAR_67;
   VAR_61 = VAR_66;
   if (!VAR_70)
    goto done;
  }
 }


 VAR_71 = FUNC_15(VAR_68, VAR_54, &VAR_64, &VAR_66, &VAR_65);
 if (FUNC_3(VAR_71) < FUNC_3(VAR_70)) {
  VAR_73 = VAR_23;
  VAR_56 = 0;
  VAR_70 = VAR_71;
  VAR_59 = VAR_64;
  VAR_61 = VAR_66;
  VAR_60 = VAR_65;
 }

done:
 if (VAR_73 >= 0)
  FUNC_5(VAR_51->dev, "Using clk %pC for %u%+d bps\n",
   VAR_68->clks[VAR_73], VAR_54, VAR_70);

 FUNC_13(VAR_68);





 if (VAR_73 >= 0 && FUNC_10(VAR_51, VAR_15)->size) {
  FUNC_20(VAR_51, VAR_18, VAR_62);
  FUNC_20(VAR_51, VAR_15, VAR_63);
 }

 FUNC_21(&VAR_51->lock, VAR_74);

 FUNC_14(VAR_51);

 FUNC_25(VAR_51, VAR_52->c_cflag, VAR_54);


 switch (VAR_52->c_cflag & VAR_2) {
 case 130:
  VAR_58 = 7;
  break;
 case 129:
  VAR_58 = 8;
  break;
 case 128:
  VAR_58 = 9;
  break;
 default:
  VAR_58 = 10;
  break;
 }

 if (VAR_52->c_cflag & VAR_3)
  VAR_58++;
 if (VAR_52->c_cflag & VAR_10)
  VAR_58++;

 if (VAR_73 >= 0) {
  if (VAR_51->type == VAR_12 || VAR_51->type == VAR_13)
   switch (VAR_61 + 1) {
   case 5: VAR_55 |= VAR_45; break;
   case 7: VAR_55 |= VAR_46; break;
   case 11: VAR_55 |= VAR_39; break;
   case 13: VAR_55 |= VAR_40; break;
   case 16: VAR_55 |= VAR_41; break;
   case 17: VAR_55 |= VAR_42; break;
   case 19: VAR_55 |= VAR_43; break;
   case 27: VAR_55 |= VAR_44; break;
   }
  VAR_55 |= VAR_60;
  FUNC_20(VAR_51, VAR_27, VAR_56 | VAR_68->hscif_tot);
  FUNC_20(VAR_51, VAR_32, VAR_55);
  FUNC_20(VAR_51, VAR_14, VAR_59);
  if (FUNC_10(VAR_51, VAR_8)->size) {
   unsigned int VAR_75 = VAR_61 | VAR_5;



   int VAR_76 = VAR_58 * 2 - 1;
   int VAR_77 = FUNC_0(VAR_70 * VAR_76 *
         (int)(VAR_61 + 1),
         2 * (int)VAR_54);

   if (FUNC_3(VAR_77) >= 2) {




    int VAR_78 = FUNC_4(VAR_77 / 2, -8, 7);

    VAR_75 |= (VAR_78 << VAR_7) &
      VAR_6;
    VAR_75 |= VAR_4;
   }
   FUNC_20(VAR_51, VAR_8, VAR_75);
  }


  FUNC_26((1000000 + (VAR_54 - 1)) / VAR_54);
 } else {

  VAR_56 = VAR_68->cfg->scscr & (VAR_29 | VAR_28);
  VAR_55 |= FUNC_19(VAR_51, VAR_32) &
      (VAR_35 | VAR_47 | VAR_36);
  FUNC_20(VAR_51, VAR_27, VAR_56 | VAR_68->hscif_tot);
  FUNC_20(VAR_51, VAR_32, VAR_55);
 }

 FUNC_11(VAR_51, VAR_52->c_cflag);

 VAR_51->status &= ~VAR_50;
 VAR_68->autorts = 0;
 VAR_69 = FUNC_10(VAR_51, VAR_19);
 if (VAR_69->size) {
  unsigned short VAR_79 = FUNC_19(VAR_51, VAR_19);

  if ((VAR_51->flags & VAR_49) &&
      (VAR_52->c_cflag & VAR_1)) {

   VAR_51->status |= VAR_50;

   VAR_68->autorts = 1;
  }






  VAR_79 &= ~(VAR_20 | VAR_21);

  FUNC_20(VAR_51, VAR_19, VAR_79);
 }
 if (VAR_51->flags & VAR_49) {

  FUNC_17(VAR_51, VAR_51->mctrl);
 }

 VAR_56 |= VAR_30 | VAR_31 |
     (VAR_68->cfg->scscr & ~(VAR_29 | VAR_28));
 FUNC_20(VAR_51, VAR_27, VAR_56 | VAR_68->hscif_tot);
 if ((VAR_61 + 1 == 5) &&
     (VAR_51->type == VAR_12 || VAR_51->type == VAR_13)) {






  FUNC_26(FUNC_1(10 * 1000000, VAR_54));
 }
 VAR_68->rx_frame = (10000 * VAR_58) / (VAR_54 / 100);






 if ((VAR_52->c_cflag & VAR_0) != 0)
  FUNC_18(VAR_51);

 FUNC_22(&VAR_51->lock, VAR_74);

 FUNC_12(VAR_68);

 if (FUNC_2(VAR_51, VAR_52->c_cflag))
  FUNC_9(VAR_51);
}
