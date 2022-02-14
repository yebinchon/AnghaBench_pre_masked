
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct cas {int block_dvma; int cas_flags; int rx_pause_off; int rx_pause_on; int page_size; int mtu_stride; scalar_t__ regs; TYPE_1__* dev; scalar_t__ init_block; scalar_t__* init_rxcs; scalar_t__* init_rxds; } ;
struct TYPE_2__ {int mtu; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_5 (int) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 scalar_t__ VAR_58 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct cas *VAR_59)
{
 u64 VAR_60 = VAR_59->block_dvma;
 u32 VAR_61;
 int VAR_62, VAR_63;


 VAR_61 = FUNC_0(VAR_49, VAR_57);
 VAR_61 |= FUNC_0(VAR_47, FUNC_7(0));
 VAR_61 |= FUNC_0(VAR_46, FUNC_6(0));
 if ((VAR_14 > 1) &&
     (VAR_59->cas_flags & VAR_0))
  VAR_61 |= FUNC_0(VAR_48, FUNC_7(1));
 FUNC_10(VAR_61, VAR_59->regs + VAR_26);

 VAR_61 = (unsigned long) VAR_59->init_rxds[0] -
  (unsigned long) VAR_59->init_block;
 FUNC_10((VAR_60 + VAR_61) >> 32, VAR_59->regs + VAR_28);
 FUNC_10((VAR_60 + VAR_61) & 0xffffffff, VAR_59->regs + VAR_29);
 FUNC_10(FUNC_8(0) - 4, VAR_59->regs + VAR_31);

 if (VAR_59->cas_flags & VAR_0) {



  VAR_61 = (unsigned long) VAR_59->init_rxds[1] -
   (unsigned long) VAR_59->init_block;
  FUNC_10((VAR_60 + VAR_61) >> 32, VAR_59->regs + VAR_19);
  FUNC_10((VAR_60 + VAR_61) & 0xffffffff, VAR_59->regs +
         VAR_20);
  FUNC_10(FUNC_8(1) - 4, VAR_59->regs +
         VAR_21);
 }


 VAR_61 = (unsigned long) VAR_59->init_rxcs[0] -
  (unsigned long) VAR_59->init_block;
 FUNC_10((VAR_60 + VAR_61) >> 32, VAR_59->regs + VAR_24);
 FUNC_10((VAR_60 + VAR_61) & 0xffffffff, VAR_59->regs + VAR_25);

 if (VAR_59->cas_flags & VAR_0) {

  for (VAR_62 = 1; VAR_62 < VAR_12; VAR_62++) {
   VAR_61 = (unsigned long) VAR_59->init_rxcs[VAR_62] -
    (unsigned long) VAR_59->init_block;
   FUNC_10((VAR_60 + VAR_61) >> 32, VAR_59->regs +
          FUNC_3(VAR_62));
   FUNC_10((VAR_60 + VAR_61) & 0xffffffff, VAR_59->regs +
          FUNC_4(VAR_62));
  }
 }





 FUNC_9(VAR_59->regs + VAR_17);
 FUNC_10(VAR_10 | VAR_8, VAR_59->regs + VAR_15);
 if (VAR_59->cas_flags & VAR_0) {
  for (VAR_62 = 1; VAR_62 < VAR_13; VAR_62++)
   FUNC_9(VAR_59->regs + FUNC_2(VAR_62));


  if (VAR_13 > 1)
   FUNC_10(VAR_11 | VAR_9,
          VAR_59->regs + FUNC_1(1));

  for (VAR_62 = 2; VAR_62 < VAR_13; VAR_62++)
   FUNC_10(VAR_11,
          VAR_59->regs + FUNC_1(VAR_62));
 }


 VAR_61 = FUNC_0(VAR_54,
   VAR_59->rx_pause_off / VAR_56);
 VAR_61 |= FUNC_0(VAR_55,
   VAR_59->rx_pause_on / VAR_56);
 FUNC_10(VAR_61, VAR_59->regs + VAR_33);


 for (VAR_62 = 0; VAR_62 < 64; VAR_62++) {
  FUNC_10(VAR_62, VAR_59->regs + VAR_35);
  FUNC_10(0x0, VAR_59->regs + VAR_37);
  FUNC_10(0x0, VAR_59->regs + VAR_38);
  FUNC_10(0x0, VAR_59->regs + VAR_36);
 }


 FUNC_10(0x0, VAR_59->regs + VAR_27);
 FUNC_10(0x0, VAR_59->regs + VAR_30);







 FUNC_10(0x0, VAR_59->regs + VAR_23);
 VAR_61 = FUNC_0(VAR_41, VAR_40);
 FUNC_10(VAR_61, VAR_59->regs + VAR_22);
 if (VAR_59->cas_flags & VAR_0) {
  VAR_61 = FUNC_0(VAR_39, FUNC_5(1));
  FUNC_10(VAR_61, VAR_59->regs + VAR_18);
 }




 FUNC_10(0x0, VAR_59->regs + VAR_34);


 VAR_61 = 0;
 if (VAR_59->page_size == 0x1000)
  VAR_61 = 0x1;
 else if (VAR_59->page_size == 0x2000)
  VAR_61 = 0x2;
 else if (VAR_59->page_size == 0x4000)
  VAR_61 = 0x3;


 VAR_63 = VAR_59->dev->mtu + 64;
 if (VAR_63 > VAR_59->page_size)
  VAR_63 = VAR_59->page_size;

 if (VAR_63 <= 0x400)
  VAR_62 = 0x0;
 else if (VAR_63 <= 0x800)
  VAR_62 = 0x1;
 else if (VAR_63 <= 0x1000)
  VAR_62 = 0x2;
 else
  VAR_62 = 0x3;

 VAR_59->mtu_stride = 1 << (VAR_62 + 10);
 VAR_61 = FUNC_0(VAR_50, VAR_61);
 VAR_61 |= FUNC_0(VAR_53, VAR_62);
 VAR_61 |= FUNC_0(VAR_51, VAR_59->page_size >> (VAR_62 + 10));
 VAR_61 |= FUNC_0(VAR_52, 0x1);
 FUNC_10(VAR_61, VAR_59->regs + VAR_32);


 if (VAR_1 == VAR_58)
  return;

 VAR_61 = FUNC_0(VAR_3, VAR_2 > 63 ? 0 : VAR_2);
 VAR_61 |= VAR_4 | VAR_5;
 VAR_61 |= FUNC_0(VAR_6, VAR_7);
 FUNC_10(VAR_61, VAR_59->regs + VAR_16);
}
