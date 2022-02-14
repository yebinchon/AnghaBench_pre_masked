
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_spicc_device {scalar_t__ rx_remain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u32 FUNC_0(struct meson_spicc_device *VAR_3,
        u32 VAR_4)
{
 if (VAR_3->rx_remain > VAR_0)
  VAR_4 |= VAR_1;
 else
  VAR_4 |= VAR_2;

 return VAR_4;
}
