
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {void* active; int number; TYPE_1__* card; int dev; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct pnp_dev*,int,int ) ;
 int FUNC_5 (struct pnp_dev*,int,int,int ) ;
 int FUNC_6 (struct pnp_dev*,int,int ) ;
 int FUNC_7 (struct pnp_dev*,int,int,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct pnp_dev*) ;

__attribute__((used)) static int FUNC_10(struct pnp_dev *VAR_10)
{
 int VAR_11, VAR_12;

 FUNC_8(&VAR_10->dev, "get resources\n");
 FUNC_9(VAR_10);
 FUNC_0(VAR_10->card->number, VAR_10->number);
 VAR_10->active = FUNC_2(VAR_1);
 if (!VAR_10->active)
  goto __end;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_12 = FUNC_3(VAR_5 + (VAR_11 << 1));
  FUNC_5(VAR_10, VAR_12, VAR_12,
        VAR_12 == 0 ? VAR_0 : 0);
 }
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_12 = FUNC_3(VAR_4 + (VAR_11 << 3)) << 8;
  FUNC_7(VAR_10, VAR_12, VAR_12,
         VAR_12 == 0 ? VAR_0 : 0);
 }
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_12 = FUNC_3(VAR_3 + (VAR_11 << 1)) >> 8;
  FUNC_6(VAR_10, VAR_12,
         VAR_12 == 0 ? VAR_0 : 0);
 }
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_12 = FUNC_2(VAR_2 + VAR_11);
  FUNC_4(VAR_10, VAR_12,
         VAR_12 == 4 ? VAR_0 : 0);
 }

__end:
 FUNC_1();
 return 0;
}
