
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {int rss_hash_key; int * rss_ind_tbl; TYPE_4__* ionic; } ;
struct TYPE_5__ {int rss_ind_tbl_sz; } ;
struct TYPE_6__ {TYPE_1__ eth; } ;
struct TYPE_7__ {TYPE_2__ lif; } ;
struct TYPE_8__ {TYPE_3__ ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 struct ionic_lif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 *VAR_3, u8 *VAR_4,
     u8 *VAR_5)
{
 struct ionic_lif *VAR_6 = FUNC_2(VAR_2);
 unsigned int VAR_7, VAR_8;

 if (VAR_3) {
  VAR_8 = FUNC_0(VAR_6->ionic->ident.lif.eth.rss_ind_tbl_sz);
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   VAR_3[VAR_7] = VAR_6->rss_ind_tbl[VAR_7];
 }

 if (VAR_4)
  FUNC_1(VAR_4, VAR_6->rss_hash_key, VAR_1);

 if (VAR_5)
  *VAR_5 = VAR_0;

 return 0;
}
