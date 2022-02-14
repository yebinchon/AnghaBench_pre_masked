
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_en_priv {int validate_loopback; TYPE_1__* dev; scalar_t__ loopback_ok; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 scalar_t__ FUNC_1 (struct mlx4_en_priv*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx4_en_priv *VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

        VAR_2->loopback_ok = 0;
 VAR_2->validate_loopback = 1;

 FUNC_2(VAR_2->dev, VAR_2->dev->features);


 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2, "Transmitting loopback packet failed\n");
  goto mlx4_en_test_loopback_exit;
 }


 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  FUNC_3(VAR_1);
  if (VAR_2->loopback_ok) {
   VAR_3 = 1;
   break;
  }
 }
 if (!VAR_3)
  FUNC_0(VAR_2, "Loopback packet didn't arrive\n");

mlx4_en_test_loopback_exit:

 VAR_2->validate_loopback = 0;

 FUNC_2(VAR_2->dev, VAR_2->dev->features);
 return !VAR_3;
}
