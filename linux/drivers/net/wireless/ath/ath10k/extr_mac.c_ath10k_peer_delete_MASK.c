
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {int num_peers; int peer_delete_done; TYPE_1__ wmi; int conf_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,int const*) ;
 int FUNC_1 (struct ath10k*,char*) ;
 int FUNC_2 (struct ath10k*,int ,int const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 unsigned long FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_3, u32 VAR_4, const u8 *VAR_5)
{
 int VAR_6;

 FUNC_3(&VAR_3->conf_mutex);

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 if (FUNC_4(VAR_2, VAR_3->wmi.svc_map)) {
  unsigned long VAR_7;

  VAR_7 = FUNC_5
       (&VAR_3->peer_delete_done, 5 * VAR_1);

  if (!VAR_7) {
   FUNC_1(VAR_3, "Timeout in receiving peer delete response\n");
   return -VAR_0;
  }
 }

 VAR_3->num_peers--;

 return 0;
}
