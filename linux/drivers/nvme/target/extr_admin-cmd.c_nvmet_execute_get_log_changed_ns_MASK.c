
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct nvmet_req {int data_len; TYPE_1__* sq; } ;
struct nvmet_ctrl {int nr_changed_ns; int lock; int changed_ns_list; } ;
typedef int __le32 ;
struct TYPE_2__ {struct nvmet_ctrl* ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvmet_req*,int ) ;
 scalar_t__ FUNC_3 (struct nvmet_req*,int ,int ,size_t) ;
 int FUNC_4 (struct nvmet_req*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct nvmet_req*,size_t,int) ;

__attribute__((used)) static void FUNC_6(struct nvmet_req *VAR_4)
{
 struct nvmet_ctrl *VAR_5 = VAR_4->sq->ctrl;
 u16 VAR_6 = VAR_2;
 size_t VAR_7;

 if (VAR_4->data_len != VAR_1 * sizeof(__le32))
  goto out;

 FUNC_0(&VAR_5->lock);
 if (VAR_5->nr_changed_ns == VAR_3)
  VAR_7 = sizeof(__le32);
 else
  VAR_7 = VAR_5->nr_changed_ns * sizeof(__le32);
 VAR_6 = FUNC_3(VAR_4, 0, VAR_5->changed_ns_list, VAR_7);
 if (!VAR_6)
  VAR_6 = FUNC_5(VAR_4, VAR_7, VAR_4->data_len - VAR_7);
 VAR_5->nr_changed_ns = 0;
 FUNC_2(VAR_4, VAR_0);
 FUNC_1(&VAR_5->lock);
out:
 FUNC_4(VAR_4, VAR_6);
}
