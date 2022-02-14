
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ owner; } ;
struct vnt_rx_desc {TYPE_3__ rd0; TYPE_1__* rd_info; struct vnt_rx_desc* next; } ;
struct vnt_private {struct vnt_rx_desc** pCurrRD; TYPE_2__* pcid; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int skb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct vnt_private*,struct vnt_rx_desc*) ;
 scalar_t__ FUNC_2 (struct vnt_private*,struct vnt_rx_desc*) ;

__attribute__((used)) static int FUNC_3(struct vnt_private *VAR_2, unsigned int VAR_3)
{
 struct vnt_rx_desc *VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_2->pCurrRD[VAR_3];
      VAR_4->rd0.owner == VAR_0;
      VAR_4 = VAR_4->next) {
  if (VAR_5++ > 15)
   break;

  if (!VAR_4->rd_info->skb)
   break;

  if (FUNC_2(VAR_2, VAR_4)) {
   if (!FUNC_1(VAR_2, VAR_4)) {
    FUNC_0(&VAR_2->pcid->dev,
     "can not allocate rx buf\n");
    break;
   }
  }
  VAR_4->rd0.owner = VAR_1;
 }

 VAR_2->pCurrRD[VAR_3] = VAR_4;

 return VAR_5;
}
