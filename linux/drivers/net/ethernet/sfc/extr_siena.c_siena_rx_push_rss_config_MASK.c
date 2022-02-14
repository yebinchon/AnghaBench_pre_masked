
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int temp ;
struct TYPE_2__ {int const* rx_indir_table; int const* rx_hash_key; } ;
struct efx_nic {TYPE_1__ rss_context; } ;
typedef int const efx_oword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const,int ,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int const*,int ) ;
 int FUNC_4 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_8, bool VAR_9,
        const u32 *VAR_10, const u8 *VAR_11)
{
 efx_oword_t VAR_12;


 if (VAR_11)
  FUNC_4(VAR_8->rss_context.rx_hash_key, VAR_11, sizeof(VAR_12));
 FUNC_4(&VAR_12, VAR_8->rss_context.rx_hash_key, sizeof(VAR_12));
 FUNC_3(VAR_8, &VAR_12, VAR_4);


 FUNC_0(sizeof(VAR_8->rss_context.rx_hash_key) <
       2 * sizeof(VAR_12) + VAR_3 / 8 ||
       VAR_2 != 0);
 FUNC_4(&VAR_12, VAR_8->rss_context.rx_hash_key, sizeof(VAR_12));
 FUNC_3(VAR_8, &VAR_12, VAR_5);
 FUNC_4(&VAR_12, VAR_8->rss_context.rx_hash_key + sizeof(VAR_12), sizeof(VAR_12));
 FUNC_3(VAR_8, &VAR_12, VAR_6);
 FUNC_1(VAR_12, VAR_1, 1,
        VAR_0, 1);
 FUNC_4(&VAR_12, VAR_8->rss_context.rx_hash_key + 2 * sizeof(VAR_12),
        VAR_3 / 8);
 FUNC_3(VAR_8, &VAR_12, VAR_7);

 FUNC_4(VAR_8->rss_context.rx_indir_table, VAR_10,
        sizeof(VAR_8->rss_context.rx_indir_table));
 FUNC_2(VAR_8);

 return 0;
}
