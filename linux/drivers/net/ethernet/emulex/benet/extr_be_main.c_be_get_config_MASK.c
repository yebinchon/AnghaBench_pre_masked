
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct be_adapter {TYPE_1__* pdev; int wol_en; int msg_enable; int fat_dump_len; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*,int *) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*,int *) ;
 int FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (struct be_adapter*) ;
 int FUNC_7 (struct be_adapter*) ;
 scalar_t__ FUNC_8 (struct be_adapter*) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (struct be_adapter*) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct be_adapter *VAR_4)
{
 int VAR_5, VAR_6;
 u16 VAR_7;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!FUNC_10(VAR_4) && FUNC_8(VAR_4))
  FUNC_4(VAR_4, &VAR_4->fat_dump_len);

 if (FUNC_0(VAR_4)) {
  VAR_6 = FUNC_5(VAR_4);
  VAR_4->msg_enable =
   VAR_6 <= VAR_0 ? VAR_1 : 0;
 }

 FUNC_1(VAR_4);
 FUNC_11(VAR_4->pdev, VAR_3, VAR_4->wol_en);
 FUNC_11(VAR_4->pdev, VAR_2, VAR_4->wol_en);

 FUNC_7(VAR_4);

 if (FUNC_8(VAR_4)) {
  VAR_5 = FUNC_2(VAR_4, &VAR_7);
  if (!VAR_5)
   FUNC_9(&VAR_4->pdev->dev,
     "Using profile 0x%x\n", VAR_7);
 }

 return 0;
}
