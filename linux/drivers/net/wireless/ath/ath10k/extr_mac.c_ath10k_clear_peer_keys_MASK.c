
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath10k_vif {int vdev_id; struct ath10k* ar; } ;
struct ath10k_peer {int ** keys; } ;
struct ath10k {int data_lock; int conf_mutex; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k_vif*,int *,int ,int const*,int ) ;
 struct ath10k_peer* FUNC_2 (struct ath10k*,int ,int const*) ;
 int FUNC_3 (struct ath10k*,char*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath10k_vif *VAR_2,
      const u8 *VAR_3)
{
 struct ath10k *VAR_4 = VAR_2->ar;
 struct ath10k_peer *VAR_5;
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;
 u32 VAR_9 = 0;

 FUNC_4(&VAR_4->conf_mutex);

 FUNC_5(&VAR_4->data_lock);
 VAR_5 = FUNC_2(VAR_4, VAR_2->vdev_id, VAR_3);
 FUNC_6(&VAR_4->data_lock);

 if (!VAR_5)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->keys); VAR_8++) {
  if (VAR_5->keys[VAR_8] == ((void*)0))
   continue;


  VAR_7 = FUNC_1(VAR_2, VAR_5->keys[VAR_8],
      VAR_0, VAR_3, VAR_9);
  if (VAR_7 < 0 && VAR_6 == 0)
   VAR_6 = VAR_7;

  if (VAR_7 < 0)
   FUNC_3(VAR_4, "failed to remove peer wep key %d: %d\n",
        VAR_8, VAR_7);

  FUNC_5(&VAR_4->data_lock);
  VAR_5->keys[VAR_8] = ((void*)0);
  FUNC_6(&VAR_4->data_lock);
 }

 return VAR_6;
}
