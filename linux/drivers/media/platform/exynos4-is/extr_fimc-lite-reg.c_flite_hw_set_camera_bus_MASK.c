
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_source_info {unsigned int flags; scalar_t__ sensor_bus_type; int mux_id; } ;
struct fimc_lite {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct fimc_lite*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct fimc_lite *VAR_9,
        struct fimc_source_info *VAR_10)
{
 u32 VAR_11 = FUNC_1(VAR_9->regs + VAR_1);
 unsigned int VAR_12 = VAR_10->flags;

 if (VAR_10->sensor_bus_type != VAR_0) {
  VAR_11 &= ~(VAR_5 |
    VAR_3 |
    VAR_4 |
    VAR_2);

  if (VAR_12 & VAR_7)
   VAR_11 |= VAR_3;

  if (VAR_12 & VAR_8)
   VAR_11 |= VAR_4;

  if (VAR_12 & VAR_6)
   VAR_11 |= VAR_2;
 } else {
  VAR_11 |= VAR_5;
 }

 FUNC_2(VAR_11, VAR_9->regs + VAR_1);

 FUNC_0(VAR_9, VAR_10->mux_id);
}
