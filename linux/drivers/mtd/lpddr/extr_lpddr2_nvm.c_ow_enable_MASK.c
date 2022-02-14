
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm_int_data {scalar_t__ ctl_regs; int bus_width; } ;
struct map_info {struct pcm_int_data* fldrv_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct map_info *VAR_2)
{
 struct pcm_int_data *VAR_3 = VAR_2->fldrv_priv;

 FUNC_1(FUNC_0(VAR_3->bus_width) | 0x18,
  VAR_3->ctl_regs + VAR_0);
 FUNC_1(0x01, VAR_3->ctl_regs + VAR_1);
}
