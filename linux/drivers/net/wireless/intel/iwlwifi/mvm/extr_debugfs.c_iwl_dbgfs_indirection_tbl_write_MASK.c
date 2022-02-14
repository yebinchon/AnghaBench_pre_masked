
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rss_config_cmd {int hash_mask; int secret_key; int * indirection_table; int flags; } ;
struct iwl_mvm {int mutex; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int cmd ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_rss_config_cmd*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_9(struct iwl_mvm *VAR_8,
            char *VAR_9, size_t VAR_10,
            loff_t *VAR_11)
{
 struct iwl_rss_config_cmd VAR_12 = {
  .flags = FUNC_1(VAR_0),
  .hash_mask = VAR_2 |
        VAR_3 |
        VAR_1 |
        VAR_5 |
        VAR_6 |
        VAR_4,
 };
 int VAR_13, VAR_14, VAR_15, VAR_16 = VAR_10 / 2;

 VAR_13 = FUNC_2(VAR_12.indirection_table, VAR_9, VAR_16);
 if (VAR_13)
  return VAR_13;
 VAR_15 = FUNC_0(VAR_12.indirection_table) / VAR_16;
 for (VAR_14 = 1; VAR_14 < VAR_15; VAR_14++)
  FUNC_5(&VAR_12.indirection_table[VAR_14 * VAR_16],
         VAR_12.indirection_table, VAR_16);

 FUNC_5(&VAR_12.indirection_table[VAR_14 * VAR_16], VAR_12.indirection_table,
        FUNC_0(VAR_12.indirection_table) % VAR_16);

 FUNC_8(VAR_12.secret_key, sizeof(VAR_12.secret_key));

 FUNC_6(&VAR_8->mutex);
 if (FUNC_3(VAR_8))
  VAR_13 = FUNC_4(VAR_8, VAR_7, 0,
        sizeof(VAR_12), &VAR_12);
 else
  VAR_13 = 0;
 FUNC_7(&VAR_8->mutex);

 return VAR_13 ?: VAR_10;
}
