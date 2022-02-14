
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int rx_indir_table; int * rx_hash_key; } ;
struct efx_nic {int rss_spread; int net_dev; TYPE_1__ rss_context; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct efx_nic*,scalar_t__ const*,int const*) ;
 int FUNC_2 (struct efx_nic*,unsigned int*) ;
 scalar_t__ const FUNC_3 (size_t,int) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct efx_nic *VAR_2, bool VAR_3,
       const u32 *VAR_4,
       const u8 *VAR_5)
{
 int VAR_6;

 if (VAR_2->rss_spread == 1)
  return 0;

 if (!VAR_5)
  VAR_5 = VAR_2->rss_context.rx_hash_key;

 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_5);

 if (VAR_6 == -VAR_0 && !VAR_3) {
  unsigned VAR_7;
  bool VAR_8 = 0;
  size_t VAR_9;

  for (VAR_9 = 0;
       VAR_9 < FUNC_0(VAR_2->rss_context.rx_indir_table) && !VAR_8;
       VAR_9++)
   VAR_8 = VAR_4[VAR_9] !=
    FUNC_3(VAR_9, VAR_2->rss_spread);

  VAR_6 = FUNC_2(VAR_2, &VAR_7);
  if (VAR_6 == 0) {
   if (VAR_7 != VAR_2->rss_spread)
    FUNC_5(VAR_2, VAR_1, VAR_2->net_dev,
        "Could not allocate an exclusive RSS"
        " context; allocated a shared one of"
        " different size."
        " Wanted %u, got %u.\n",
        VAR_2->rss_spread, VAR_7);
   else if (VAR_8)
    FUNC_5(VAR_2, VAR_1, VAR_2->net_dev,
        "Could not allocate an exclusive RSS"
        " context; allocated a shared one but"
        " could not apply custom"
        " indirection.\n");
   else
    FUNC_4(VAR_2, VAR_1, VAR_2->net_dev,
        "Could not allocate an exclusive RSS"
        " context; allocated a shared one.\n");
  }
 }
 return VAR_6;
}
