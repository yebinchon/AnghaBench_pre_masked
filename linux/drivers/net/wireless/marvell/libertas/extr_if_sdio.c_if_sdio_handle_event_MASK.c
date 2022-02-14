
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct if_sdio_card {scalar_t__ model; int priv; int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct if_sdio_card *VAR_3,
  u8 *VAR_4, unsigned VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 if (VAR_3->model == VAR_2) {
  VAR_7 = FUNC_2(VAR_3->func, VAR_1, &VAR_6);
  if (VAR_6)
   goto out;


  VAR_7 >>= 3;
 } else {
  if (VAR_5 < 4) {
   FUNC_0("event packet too small (%d bytes)\n",
    (int)VAR_5);
   VAR_6 = -VAR_0;
   goto out;
  }
  VAR_7 = VAR_4[3] << 24;
  VAR_7 |= VAR_4[2] << 16;
  VAR_7 |= VAR_4[1] << 8;
  VAR_7 |= VAR_4[0] << 0;
 }

 FUNC_1(VAR_3->priv, VAR_7 & 0xFF);
 VAR_6 = 0;

out:
 return VAR_6;
}
