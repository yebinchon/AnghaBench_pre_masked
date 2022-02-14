
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_4__ {size_t abs_id; } ;
struct sge_eth_rxq {TYPE_2__ rspq; } ;
struct port_info {size_t first_qset; int rss_size; int viid; struct adapter* adapter; } ;
struct TYPE_3__ {struct sge_eth_rxq* ethrxq; } ;
struct adapter {int mbox; int pf; TYPE_1__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (size_t*) ;
 size_t* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct adapter*,int ,int ,int ,int,size_t*,int) ;
 int FUNC_3 (struct adapter*,int ,int ,int,size_t) ;

int FUNC_4(const struct port_info *VAR_7, const u16 *VAR_8)
{
 u16 *VAR_9;
 int VAR_10, VAR_11;
 struct adapter *VAR_12 = VAR_7->adapter;
 const struct sge_eth_rxq *VAR_13;

 VAR_13 = &VAR_12->sge.ethrxq[VAR_7->first_qset];
 VAR_9 = FUNC_1(VAR_7->rss_size, sizeof(u16), VAR_6);
 if (!VAR_9)
  return -VAR_0;


 for (VAR_10 = 0; VAR_10 < VAR_7->rss_size; VAR_10++, VAR_8++)
  VAR_9[VAR_10] = VAR_13[*VAR_8].rspq.abs_id;

 VAR_11 = FUNC_2(VAR_12, VAR_12->pf, VAR_7->viid, 0,
      VAR_7->rss_size, VAR_9, VAR_7->rss_size);





 if (!VAR_11)
  VAR_11 = FUNC_3(VAR_12, VAR_12->mbox, VAR_7->viid,
           VAR_3 |
           VAR_4 |
           VAR_1 |
           VAR_2 |
           VAR_5,
           VAR_9[0]);
 FUNC_0(VAR_9);
 return VAR_11;
}
