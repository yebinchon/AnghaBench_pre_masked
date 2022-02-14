
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int bwi_active; int wt_timeout; int bwi_timer; void* cb_context; int cb; } ;
struct st_nci_info {TYPE_1__ se_info; } ;
struct nci_dev {int dummy; } ;
typedef int se_io_cb_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct st_nci_info* FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (struct nci_dev*,int ,int ,int *,size_t) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct nci_dev *VAR_4, u32 VAR_5,
         u8 *VAR_6, size_t VAR_7,
         se_io_cb_t VAR_8, void *VAR_9)
{
 struct st_nci_info *VAR_10 = FUNC_2(VAR_4);

 FUNC_4("\n");

 switch (VAR_5) {
 case 128:
  VAR_10->se_info.cb = VAR_8;
  VAR_10->se_info.cb_context = VAR_9;
  FUNC_0(&VAR_10->se_info.bwi_timer, VAR_3 +
     FUNC_1(VAR_10->se_info.wt_timeout));
  VAR_10->se_info.bwi_active = 1;
  return FUNC_3(VAR_4, VAR_1,
     VAR_2, VAR_6,
     VAR_7);
 default:
  return -VAR_0;
 }
}
