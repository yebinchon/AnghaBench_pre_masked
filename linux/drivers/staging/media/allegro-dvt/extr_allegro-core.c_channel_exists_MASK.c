
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_channel {int mcu_channel_id; } ;



__attribute__((used)) static inline bool FUNC_0(struct allegro_channel *VAR_0)
{
 return VAR_0->mcu_channel_id != -1;
}
