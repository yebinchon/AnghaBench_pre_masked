
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {int enable_timeout; int card; } ;
struct ath6kl_sdio {TYPE_1__* id; struct sdio_func* func; } ;
struct ath6kl {int dummy; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int ,int ,int ) ;
 struct ath6kl_sdio* FUNC_3 (struct ath6kl*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*,int ) ;

__attribute__((used)) static int FUNC_7(struct ath6kl *VAR_6)
{
 struct ath6kl_sdio *VAR_7 = FUNC_3(VAR_6);
 struct sdio_func *VAR_8 = VAR_7->func;
 int VAR_9;

 FUNC_4(VAR_8);

 if ((VAR_7->id->device & VAR_4) >=
     VAR_3) {

  VAR_9 = FUNC_2(VAR_8->card,
      VAR_1,
      VAR_5);
  if (VAR_9) {
   FUNC_1("Failed to enable 4-bit async irq mode %d\n",
       VAR_9);
   goto out;
  }

  FUNC_0(VAR_0, "4-bit async irq mode enabled\n");
 }


 VAR_8->enable_timeout = 100;

 VAR_9 = FUNC_6(VAR_8, VAR_2);
 if (VAR_9) {
  FUNC_1("Set sdio block size %d failed: %d)\n",
      VAR_2, VAR_9);
  goto out;
 }

out:
 FUNC_5(VAR_8);

 return VAR_9;
}
