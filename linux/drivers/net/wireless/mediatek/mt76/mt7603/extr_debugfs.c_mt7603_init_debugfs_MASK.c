
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct mt7603_dev {TYPE_1__ mt76; int reset_test; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ,char*,struct dentry*,int ) ;
 int FUNC_1 (char*,int,struct dentry*,struct mt7603_dev*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct mt7603_dev *VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_3(&VAR_3->mt76);
 if (!VAR_4)
  return;

 FUNC_1("edcca", 0600, VAR_4, VAR_3, &VAR_0);
 FUNC_2("reset_test", 0600, VAR_4, &VAR_3->reset_test);
 FUNC_0(VAR_3->mt76.dev, "reset", VAR_4,
        VAR_2);
 FUNC_0(VAR_3->mt76.dev, "radio", VAR_4,
        VAR_1);
}
