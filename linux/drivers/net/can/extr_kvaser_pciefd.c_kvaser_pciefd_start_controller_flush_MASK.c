
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvaser_pciefd_can {int cmd_seq; int lock; scalar_t__ reg_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct kvaser_pciefd_can *VAR_12)
{
 u32 VAR_13;
 unsigned long VAR_14;

 FUNC_2(&VAR_12->lock, VAR_14);
 FUNC_1(-1, VAR_12->reg_base + VAR_5);
 FUNC_1(VAR_4 | VAR_6,
    VAR_12->reg_base + VAR_3);

 VAR_13 = FUNC_0(VAR_12->reg_base + VAR_10);
 if (VAR_13 & VAR_9) {
  u32 VAR_15;


  VAR_15 = VAR_0;
  VAR_15 |= ++VAR_12->cmd_seq << VAR_2;
  FUNC_1(VAR_15, VAR_12->reg_base + VAR_1);
 } else if (!(VAR_13 & VAR_11)) {
  u32 VAR_16;


  VAR_16 = FUNC_0(VAR_12->reg_base + VAR_7);
  VAR_16 |= VAR_8;
  FUNC_1(VAR_16, VAR_12->reg_base + VAR_7);
 }

 FUNC_3(&VAR_12->lock, VAR_14);
}
