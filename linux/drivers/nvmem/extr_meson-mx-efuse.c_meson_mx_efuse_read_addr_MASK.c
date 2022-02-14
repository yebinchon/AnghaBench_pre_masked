
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct meson_mx_efuse {scalar_t__ base; TYPE_1__ config; } ;


 int FUNC_0 (int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct meson_mx_efuse*,scalar_t__,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct meson_mx_efuse *VAR_6,
        unsigned int VAR_7, u32 *VAR_8)
{
 int VAR_9;
 u32 VAR_10;


 VAR_10 = FUNC_0(VAR_3, VAR_7);
 FUNC_2(VAR_6, VAR_0,
     VAR_3, VAR_10);


 FUNC_2(VAR_6, VAR_0,
     VAR_4,
     VAR_4);
 FUNC_2(VAR_6, VAR_0,
     VAR_4, 0);


 FUNC_2(VAR_6, VAR_0,
     VAR_2,
     VAR_2);
 FUNC_2(VAR_6, VAR_0,
     VAR_2, 0);





 FUNC_3(VAR_6->base + VAR_0);

 VAR_9 = FUNC_4(VAR_6->base + VAR_0,
   VAR_10,
   (!(VAR_10 & VAR_1)),
   1, 1000);
 if (VAR_9) {
  FUNC_1(VAR_6->config.dev,
   "Timeout while reading efuse address %u\n", VAR_7);
  return VAR_9;
 }

 *VAR_8 = FUNC_3(VAR_6->base + VAR_5);

 return 0;
}
