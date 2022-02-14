
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_mvm {TYPE_2__* trans; } ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {int min_txq_size; int min_256_ba_txq_size; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int,unsigned int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_7,
       u8 VAR_8, u8 VAR_9, unsigned int VAR_10)
{
 int VAR_11, VAR_12 = FUNC_3(VAR_6, VAR_0,
    VAR_7->trans->cfg->min_256_ba_txq_size);

 if (VAR_9 == VAR_1) {
  VAR_9 = VAR_3;
  VAR_12 = FUNC_3(VAR_6, VAR_2,
        VAR_7->trans->cfg->min_txq_size);
 }
 VAR_11 = FUNC_2(VAR_7->trans,
        FUNC_1(VAR_5),
        VAR_8, VAR_9, VAR_4, VAR_12, VAR_10);

 if (VAR_11 < 0) {
  FUNC_0(VAR_7,
        "Failed allocating TXQ for sta %d tid %d, ret: %d\n",
        VAR_8, VAR_9, VAR_11);
  return VAR_11;
 }

 FUNC_0(VAR_7, "Enabling TXQ #%d for sta %d tid %d\n",
       VAR_11, VAR_8, VAR_9);

 FUNC_0(VAR_7, "Enabling TXQ #%d\n", VAR_11);

 return VAR_11;
}
