
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65910_board {int en_ck32k_xtal; } ;
struct tps65910 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct tps65910*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct tps65910 *VAR_2,
     struct tps65910_board *VAR_3)
{
 int VAR_4;

 if (!VAR_3->en_ck32k_xtal)
  return 0;

 VAR_4 = FUNC_1(VAR_2, VAR_1,
      VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2->dev, "clear ck32k_ctrl failed: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
