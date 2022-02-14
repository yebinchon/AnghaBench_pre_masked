
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ poll_mode; } ;
struct octeon_droq {TYPE_1__ ops; } ;
struct TYPE_4__ {int oq; } ;
struct octeon_device {int droq_intr; TYPE_2__ io_qmask; scalar_t__ chip; struct octeon_droq** droq; } ;
struct octeon_cn6xxx {int lock_for_droq_int_enb_reg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_droq*) ;
 int FUNC_3 (struct octeon_device*,int) ;
 int FUNC_4 (struct octeon_device*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct octeon_device *VAR_4)
{
 struct octeon_droq *VAR_5;
 int VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12;

 VAR_11 = FUNC_3(VAR_4, VAR_1);
 VAR_12 = FUNC_3(VAR_4, VAR_0);
 VAR_9 = VAR_12 & VAR_11;

 VAR_8 = FUNC_3(VAR_4, VAR_2);
 VAR_10 = FUNC_3(VAR_4, VAR_3);
 VAR_9 |= (VAR_8 & VAR_10);

 VAR_9 &= VAR_4->io_qmask.oq;

 VAR_4->droq_intr = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_4); VAR_6++) {
  if (!(VAR_9 & FUNC_0(VAR_6)))
   continue;

  VAR_5 = VAR_4->droq[VAR_6];
  VAR_7 = FUNC_2(VAR_5);
  if (VAR_7) {
   VAR_4->droq_intr |= FUNC_0(VAR_6);
   if (VAR_5->ops.poll_mode) {
    u32 VAR_13;
    u32 VAR_14;

    struct octeon_cn6xxx *VAR_15 =
     (struct octeon_cn6xxx *)VAR_4->chip;


    FUNC_5
     (&VAR_15->lock_for_droq_int_enb_reg);
    VAR_14 = VAR_3;
    VAR_13 = FUNC_3(VAR_4, VAR_14);
    VAR_13 &= ~(1 << VAR_6);
    FUNC_4(VAR_4, VAR_14, VAR_13);
    VAR_14 = VAR_1;
    VAR_13 = FUNC_3(VAR_4, VAR_14);
    VAR_13 &= ~(1 << VAR_6);
    FUNC_4(VAR_4, VAR_14, VAR_13);

    FUNC_6(&VAR_15->lock_for_droq_int_enb_reg);
   }
  }
 }

 VAR_8 &= VAR_4->io_qmask.oq;
 VAR_12 &= VAR_4->io_qmask.oq;


 if (VAR_8)
  FUNC_4(VAR_4, VAR_2, VAR_8);

 if (VAR_12)
  FUNC_4(VAR_4, VAR_0, VAR_12);

 return 0;
}
