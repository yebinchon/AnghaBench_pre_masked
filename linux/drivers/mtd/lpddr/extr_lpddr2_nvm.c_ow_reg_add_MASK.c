
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct pcm_int_data {int bus_width; } ;
struct map_info {int pfow_base; struct pcm_int_data* fldrv_priv; } ;



__attribute__((used)) static inline u_long FUNC_0(struct map_info *VAR_0, u_long VAR_1)
{
 u_long VAR_2 = 0;
 struct pcm_int_data *VAR_3 = VAR_0->fldrv_priv;

 VAR_2 = VAR_0->pfow_base + VAR_1*VAR_3->bus_width;

 return VAR_2;
}
