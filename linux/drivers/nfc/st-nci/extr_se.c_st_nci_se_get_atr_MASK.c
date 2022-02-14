
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wt_timeout; int atr; } ;
struct st_nci_info {TYPE_1__ se_info; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 struct st_nci_info* FUNC_3 (struct nci_dev*) ;
 int FUNC_4 (struct nci_dev*,int ,int ,struct sk_buff**) ;
 int FUNC_5 (struct nci_dev*) ;

__attribute__((used)) static void FUNC_6(struct nci_dev *VAR_3)
{
 struct st_nci_info *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;
 struct sk_buff *VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_1,
    VAR_0, &VAR_6);
 if (VAR_5 < 0)
  return;

 if (VAR_6->len <= VAR_2) {
  FUNC_2(VAR_4->se_info.atr, VAR_6->data, VAR_6->len);

  VAR_4->se_info.wt_timeout =
   FUNC_0(FUNC_5(VAR_3));
 }
 FUNC_1(VAR_6);
}
