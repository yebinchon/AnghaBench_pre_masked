
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ionic_lif {int rss_types; int nxqs; int * rss_ind_tbl; TYPE_4__* ionic; } ;
struct TYPE_5__ {int rss_ind_tbl_sz; } ;
struct TYPE_6__ {TYPE_1__ eth; } ;
struct TYPE_7__ {TYPE_2__ lif; } ;
struct TYPE_8__ {TYPE_3__ ident; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct ionic_lif*,int,int *,int *) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct ionic_lif *VAR_7)
{
 u8 VAR_8[VAR_0];
 unsigned int VAR_9;
 unsigned int VAR_10;

 FUNC_3(VAR_8, VAR_0);

 VAR_7->rss_types = VAR_1 |
    VAR_2 |
    VAR_3 |
    VAR_4 |
    VAR_5 |
    VAR_6;


 VAR_9 = FUNC_2(VAR_7->ionic->ident.lif.eth.rss_ind_tbl_sz);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  VAR_7->rss_ind_tbl[VAR_10] = FUNC_0(VAR_10, VAR_7->nxqs);

 return FUNC_1(VAR_7, VAR_7->rss_types, VAR_8, ((void*)0));
}
