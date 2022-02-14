
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int time_offset; scalar_t__ tz_set; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
struct TYPE_4__ {int tz_minuteswest; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct msdos_sb_info *VAR_2)
{
 return (VAR_2->options.tz_set ?
        -VAR_2->options.time_offset :
        VAR_1.tz_minuteswest) * VAR_0;
}
