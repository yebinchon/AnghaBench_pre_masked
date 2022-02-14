
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct be_mcc_wrb {int dummy; } ;
struct TYPE_2__ {int version; int domain; } ;
struct be_cmd_req_set_ll_link {int link_config; TYPE_1__ hdr; } ;
struct be_adapter {int mcc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct be_adapter*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,struct be_mcc_wrb*,int *) ;
 int FUNC_2 (int ) ;
 struct be_cmd_req_set_ll_link* FUNC_3 (struct be_mcc_wrb*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct be_mcc_wrb* FUNC_6 (struct be_adapter*) ;

__attribute__((used)) static int
FUNC_7(struct be_adapter *VAR_7,
     int VAR_8, int VAR_9, u8 VAR_10)
{
 struct be_cmd_req_set_ll_link *VAR_11;
 struct be_mcc_wrb *VAR_12;
 u32 VAR_13 = 0;
 int VAR_14;

 FUNC_4(&VAR_7->mcc_lock);

 VAR_12 = FUNC_6(VAR_7);
 if (!VAR_12) {
  VAR_14 = -VAR_1;
  goto err;
 }

 VAR_11 = FUNC_3(VAR_12);

 FUNC_1(&VAR_11->hdr, VAR_0,
          VAR_4,
          sizeof(*VAR_11), VAR_12, ((void*)0));

 VAR_11->hdr.version = VAR_9;
 VAR_11->hdr.domain = VAR_10;

 if (VAR_8 == VAR_3 ||
     VAR_8 == VAR_2)
  VAR_13 |= VAR_5;

 if (VAR_8 == VAR_2)
  VAR_13 |= VAR_6;

 VAR_11->link_config = FUNC_2(VAR_13);

 VAR_14 = FUNC_0(VAR_7);
err:
 FUNC_5(&VAR_7->mcc_lock);
 return VAR_14;
}
