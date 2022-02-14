
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dcon_priv {int dummy; } ;
struct TYPE_2__ {int (* bus_stabilize_wiggle ) () ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dcon_priv*,int ) ;
 int FUNC_2 (struct dcon_priv*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int*,int,int *,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct dcon_priv *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 u8 VAR_6;
 int VAR_7;

power_up:
 if (VAR_4) {
  VAR_6 = 1;
  VAR_7 = FUNC_6(VAR_1, &VAR_6, 1, ((void*)0), 0);
  if (VAR_7) {
   FUNC_8("unable to force dcon to power up: %d!\n", VAR_7);
   return VAR_7;
  }
  FUNC_10(10000, 11000);
 }

 VAR_2->bus_stabilize_wiggle();

 for (VAR_7 = -1, VAR_5 = 50; VAR_5 && VAR_7 < 0; VAR_5--) {
  FUNC_10(1000, 1100);
  VAR_7 = FUNC_2(VAR_3, VAR_0);
 }
 if (VAR_7 < 0) {
  FUNC_7("unable to stabilize dcon's smbus, reasserting power and praying.\n");
  FUNC_0(FUNC_5(FUNC_4(0xc2)));
  VAR_6 = 0;
  FUNC_6(VAR_1, &VAR_6, 1, ((void*)0), 0);
  FUNC_3(100);
  VAR_4 = 1;
  goto power_up;
 }

 if (VAR_4)
  return FUNC_1(VAR_3, 0);
 return 0;
}
