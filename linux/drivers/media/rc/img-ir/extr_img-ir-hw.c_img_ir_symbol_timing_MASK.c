
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct img_ir_timing_range {int min; int max; } ;
struct TYPE_2__ {int min; int max; } ;
struct img_ir_symbol_timing {struct img_ir_timing_range pulse; TYPE_1__ space; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct img_ir_timing_range*,struct img_ir_timing_range*,unsigned int,unsigned long,unsigned int) ;

__attribute__((used)) static u32 FUNC_1(const struct img_ir_symbol_timing *VAR_4,
    unsigned int VAR_5,
    unsigned long VAR_6,
    unsigned int VAR_7,
    unsigned int VAR_8)
{
 struct img_ir_timing_range VAR_9, VAR_10;

 VAR_10.min = VAR_4->pulse.min + VAR_4->space.min;
 VAR_10.max = VAR_4->pulse.max + VAR_4->space.max;
 FUNC_0(&VAR_10, &VAR_10,
   VAR_5, VAR_6, VAR_7);
 FUNC_0(&VAR_9, &VAR_4->pulse,
   VAR_5, VAR_6, VAR_8);

 return (VAR_10.max << VAR_0) |
  (VAR_10.min << VAR_1) |
  (VAR_9.max << VAR_2) |
  (VAR_9.min << VAR_3);
}
