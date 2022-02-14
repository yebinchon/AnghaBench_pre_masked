
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union vnic_rss_key {TYPE_1__* key; } ;
struct enic {int pdev; int devcmd_lock; int * rss_key; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int * b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct enic*,int ,int) ;
 int FUNC_1 (int ,int,union vnic_rss_key*,int ) ;
 union vnic_rss_key* FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct enic *VAR_3)
{
 union vnic_rss_key *VAR_4;
 dma_addr_t VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_4 = FUNC_2(VAR_3->pdev,
            sizeof(union vnic_rss_key),
            &VAR_5);
 if (!VAR_4)
  return -VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = VAR_6 / VAR_0;
  VAR_8 = VAR_6 % VAR_0;
  VAR_4->key[VAR_7].b[VAR_8] = VAR_3->rss_key[VAR_6];
 }
 FUNC_3(&VAR_3->devcmd_lock);
 VAR_9 = FUNC_0(VAR_3,
  VAR_5,
  sizeof(union vnic_rss_key));
 FUNC_4(&VAR_3->devcmd_lock);

 FUNC_1(VAR_3->pdev, sizeof(union vnic_rss_key),
  VAR_4, VAR_5);

 return VAR_9;
}
