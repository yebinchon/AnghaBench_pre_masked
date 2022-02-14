
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_ao_cec_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct meson_ao_cec_device *VAR_3,
          bool VAR_4)
{
 u32 VAR_5 = VAR_2 | VAR_1;

 FUNC_0(VAR_5, VAR_4 ? VAR_5 : 0,
       VAR_3->base + VAR_0);
}
