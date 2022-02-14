
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ gen; int rev; } ;
struct TYPE_4__ {int isoc_reqs; int nb_type; int nb_dev; int smbus_dev; TYPE_1__ sb_type; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(int VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 u32 VAR_22 = VAR_17 ? 0 : 1;
 unsigned long VAR_23;

 FUNC_10(&VAR_16, VAR_23);

 if (VAR_17) {
  VAR_15.isoc_reqs++;
  if (VAR_15.isoc_reqs > 1) {
   FUNC_11(&VAR_16, VAR_23);
   return;
  }
 } else {
  VAR_15.isoc_reqs--;
  if (VAR_15.isoc_reqs > 0) {
   FUNC_11(&VAR_16, VAR_23);
   return;
  }
 }

 if (VAR_15.sb_type.gen == VAR_6 ||
   VAR_15.sb_type.gen == VAR_4 ||
   VAR_15.sb_type.gen == VAR_3) {
  FUNC_5(VAR_1, 0xcd6);
  VAR_19 = FUNC_2(0xcd7);
  FUNC_5(VAR_0, 0xcd6);
  VAR_20 = FUNC_2(0xcd7);
  VAR_18 = VAR_20 << 8 | VAR_19;

  FUNC_7(0x30, FUNC_1(VAR_18));
  FUNC_7(0x40, FUNC_0(VAR_18));
  FUNC_7(0x34, FUNC_1(VAR_18));
  VAR_21 = FUNC_4(FUNC_0(VAR_18));
 } else if (VAR_15.sb_type.gen == VAR_5 &&
   VAR_15.sb_type.rev <= 0x3b) {
  FUNC_8(VAR_15.smbus_dev,
     VAR_2, &VAR_18);
  FUNC_6(VAR_8, FUNC_1(VAR_18));
  FUNC_6(0x40, FUNC_0(VAR_18));
  FUNC_6(VAR_7, FUNC_1(VAR_18));
  VAR_21 = FUNC_3(FUNC_0(VAR_18));
 } else {
  FUNC_11(&VAR_16, VAR_23);
  return;
 }

 if (VAR_17) {
  VAR_21 &= ~0x08;
  VAR_21 |= (1 << 4) | (1 << 9);
 } else {
  VAR_21 |= 0x08;
  VAR_21 &= ~((1 << 4) | (1 << 9));
 }
 FUNC_7(VAR_21, FUNC_0(VAR_18));

 if (!VAR_15.nb_dev) {
  FUNC_11(&VAR_16, VAR_23);
  return;
 }

 if (VAR_15.nb_type == 1 || VAR_15.nb_type == 3) {
  VAR_18 = VAR_14;
  FUNC_9(VAR_15.nb_dev,
     VAR_10, VAR_18);
  FUNC_8(VAR_15.nb_dev,
     VAR_11, &VAR_21);

  VAR_21 &= ~(1 | (1 << 3) | (1 << 4) | (1 << 9) | (1 << 12));
  VAR_21 |= VAR_22 | (VAR_22 << 3) | (VAR_22 << 12);
  VAR_21 |= ((!VAR_22) << 4) | ((!VAR_22) << 9);
  FUNC_9(VAR_15.nb_dev,
     VAR_11, VAR_21);

  VAR_18 = VAR_9;
  FUNC_9(VAR_15.nb_dev,
     VAR_10, VAR_18);
  FUNC_8(VAR_15.nb_dev,
     VAR_11, &VAR_21);
  VAR_21 &= ~(1 << 8);
  VAR_21 |= VAR_22 << 8;

  FUNC_9(VAR_15.nb_dev,
     VAR_11, VAR_21);
 } else if (VAR_15.nb_type == 2) {
  VAR_18 = VAR_12;
  FUNC_9(VAR_15.nb_dev,
     VAR_10, VAR_18);
  FUNC_8(VAR_15.nb_dev,
     VAR_11, &VAR_21);
  if (VAR_17)
   VAR_21 &= ~(0x3f << 7);
  else
   VAR_21 |= 0x3f << 7;

  FUNC_9(VAR_15.nb_dev,
     VAR_11, VAR_21);

  VAR_18 = VAR_13;
  FUNC_9(VAR_15.nb_dev,
     VAR_10, VAR_18);
  FUNC_8(VAR_15.nb_dev,
     VAR_11, &VAR_21);
  if (VAR_17)
   VAR_21 &= ~(0x3f << 7);
  else
   VAR_21 |= 0x3f << 7;

  FUNC_9(VAR_15.nb_dev,
     VAR_11, VAR_21);
 }

 FUNC_11(&VAR_16, VAR_23);
 return;
}
