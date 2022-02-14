
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {TYPE_2__* req; } ;
struct iwl_mvm {TYPE_1__ ftm_initiator; int mutex; } ;
struct TYPE_4__ {scalar_t__ n_peers; scalar_t__ cookie; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm *VAR_1, u8 VAR_2,
     u8 VAR_3)
{
 FUNC_1(&VAR_1->mutex);

 if (VAR_2 != (u8)VAR_1->ftm_initiator.req->cookie) {
  FUNC_0(VAR_1, "Request ID mismatch, got %u, active %u\n",
   VAR_2, (u8)VAR_1->ftm_initiator.req->cookie);
  return -VAR_0;
 }

 if (VAR_3 > VAR_1->ftm_initiator.req->n_peers) {
  FUNC_0(VAR_1, "FTM range response invalid\n");
  return -VAR_0;
 }

 return 0;
}
