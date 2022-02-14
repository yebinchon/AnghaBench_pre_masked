
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xlr_net_priv {int base_addr; TYPE_2__* ndev; TYPE_1__* nd; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int cpu_mask; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int,int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct xlr_net_priv *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;
 int VAR_4[32];
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = 0;
 VAR_2 = VAR_1->nd->cpu_mask;

 FUNC_1("Using %s-based distribution\n",
  (VAR_12) ? "bucket" : "class");
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
  if ((1 << VAR_9) & VAR_2) {

   VAR_4[VAR_10] = ((VAR_9 / 4) * 8) + (VAR_9 % 4);
   VAR_10++;
  }
 }


 VAR_11 = 0;
 VAR_7 = 3;
 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < 64; VAR_9++) {






  VAR_7 = (VAR_7 + 1) & 3;
  VAR_8 = (VAR_7 + 1) & 3;
  VAR_5 = VAR_4[VAR_11];
  VAR_11 = (VAR_11 + 1) % VAR_10;
  VAR_6 = VAR_4[VAR_11];
  VAR_11 = (VAR_11 + 1) % VAR_10;

  VAR_3 = ((VAR_7 << 23) | (VAR_5 << 17) | (VAR_12 << 16) |
    (VAR_8 << 7) | (VAR_6 << 1) | (VAR_12 << 0));
  FUNC_0(&VAR_1->ndev->dev, "Table[%d] b1=%d b2=%d c1=%d c2=%d\n",
   VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
  FUNC_2(VAR_1->base_addr, VAR_0 + VAR_9, VAR_3);
  VAR_7 = VAR_8;
 }
}
