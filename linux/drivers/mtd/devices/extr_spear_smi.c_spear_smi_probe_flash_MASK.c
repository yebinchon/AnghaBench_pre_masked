
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_smi {int status; int lock; scalar_t__ io_base; int cmd_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct spear_smi*,int,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct spear_smi *VAR_15, u32 VAR_16)
{
 int VAR_17;
 u32 VAR_18 = 0;

 VAR_17 = FUNC_4(VAR_15, VAR_16, VAR_8);
 if (VAR_17)
  return VAR_17;

 FUNC_1(&VAR_15->lock);

 VAR_15->status = 0;

 VAR_18 = FUNC_3(VAR_15->io_base + VAR_6);
 FUNC_6(VAR_18 | VAR_11, VAR_15->io_base + VAR_6);


 FUNC_6(VAR_2, VAR_15->io_base + VAR_10);

 VAR_18 = (VAR_16 << VAR_0) | VAR_4 | (1 << VAR_14) |
  (3 << VAR_3) | VAR_13;
 FUNC_6(VAR_18, VAR_15->io_base + VAR_7);


 VAR_17 = FUNC_5(VAR_15->cmd_complete,
   VAR_15->status & VAR_12, VAR_5);
 if (VAR_17 <= 0) {
  VAR_17 = -VAR_1;
  goto err_probe;
 }


 VAR_18 = FUNC_3(VAR_15->io_base + VAR_9);
 VAR_18 &= 0x00ffffff;
 VAR_17 = FUNC_0(VAR_18);

err_probe:

 VAR_18 = FUNC_3(VAR_15->io_base + VAR_6);
 FUNC_6(VAR_18 & ~VAR_11, VAR_15->io_base + VAR_6);

 FUNC_2(&VAR_15->lock);
 return VAR_17;
}
