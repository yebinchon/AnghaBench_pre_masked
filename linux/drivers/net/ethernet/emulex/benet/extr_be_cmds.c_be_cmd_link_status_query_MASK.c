
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_resp_link_status {scalar_t__ logical_link_status; int mac_speed; scalar_t__ link_speed; } ;
struct TYPE_2__ {int version; int domain; } ;
struct be_cmd_req_link_status {TYPE_1__ hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 void* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct be_mcc_wrb* FUNC_8 (struct be_adapter*) ;

int FUNC_9(struct be_adapter *VAR_4, u16 *VAR_5,
        u8 *VAR_6, u32 VAR_7)
{
 struct be_mcc_wrb *VAR_8;
 struct be_cmd_req_link_status *VAR_9;
 int VAR_10;

 FUNC_6(&VAR_4->mcc_lock);

 if (VAR_6)
  *VAR_6 = VAR_2;

 VAR_8 = FUNC_8(VAR_4);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto err;
 }
 VAR_9 = FUNC_4(VAR_8);

 FUNC_3(&VAR_9->hdr, VAR_0,
          VAR_3,
          sizeof(*VAR_9), VAR_8, ((void*)0));


 if (!FUNC_0(VAR_4))
  VAR_9->hdr.version = 1;

 VAR_9->hdr.domain = VAR_7;

 VAR_10 = FUNC_2(VAR_4);
 if (!VAR_10) {
  struct be_cmd_resp_link_status *VAR_11 = FUNC_4(VAR_8);

  if (VAR_5) {
   *VAR_5 = VAR_11->link_speed ?
          FUNC_5(VAR_11->link_speed) * 10 :
          FUNC_1(VAR_11->mac_speed);

   if (!VAR_11->logical_link_status)
    *VAR_5 = 0;
  }
  if (VAR_6)
   *VAR_6 = VAR_11->logical_link_status;
 }

err:
 FUNC_7(&VAR_4->mcc_lock);
 return VAR_10;
}
