
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {int peer_delete_done; TYPE_1__ wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,int const*) ;
 int FUNC_1 (struct ath10k*,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 unsigned long FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_2, u32 VAR_3,
          const u8 *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 if (FUNC_2(VAR_1, VAR_2->wmi.svc_map)) {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);
  if (VAR_6) {
   FUNC_1(VAR_2, "failed wait for peer deleted");
   return;
  }

  VAR_5 = FUNC_3(&VAR_2->peer_delete_done,
       5 * VAR_0);
  if (!VAR_5)
   FUNC_1(VAR_2, "Timeout in receiving peer delete response\n");
 }
}
