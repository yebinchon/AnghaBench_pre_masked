
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct be_mcc_wrb {int tag1; int tag0; } ;
struct TYPE_2__ {int len; int head; } ;
struct be_mcc_obj {TYPE_1__ q; } ;
struct be_cmd_resp_hdr {int base_status; int addl_status; } ;
struct be_adapter {struct be_mcc_obj mcc_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct be_cmd_resp_hdr* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (int *,int ) ;
 struct be_mcc_wrb* FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct be_adapter *VAR_3)
{
 int VAR_4;
 struct be_mcc_wrb *VAR_5;
 struct be_mcc_obj *VAR_6 = &VAR_3->mcc_obj;
 u32 VAR_7 = VAR_6->q.head;
 struct be_cmd_resp_hdr *VAR_8;

 FUNC_3(&VAR_7, VAR_6->q.len);
 VAR_5 = FUNC_4(&VAR_6->q, VAR_7);

 VAR_8 = FUNC_0(VAR_5->tag0, VAR_5->tag1);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 == -VAR_2)
  goto out;

 VAR_4 = (VAR_8->base_status |
    ((VAR_8->addl_status & VAR_0) <<
     VAR_1));
out:
 return VAR_4;
}
