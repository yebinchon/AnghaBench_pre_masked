
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_nfc {int dev; scalar_t__ reg_base; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct meson_nfc *VAR_1,
         unsigned int VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;


 VAR_4 = FUNC_2(VAR_1->reg_base + VAR_0, VAR_3,
      !FUNC_0(VAR_3),
      10, VAR_2 * 1000);
 if (VAR_4)
  FUNC_1(VAR_1->dev, "wait for empty CMD FIFO time out\n");

 return VAR_4;
}
