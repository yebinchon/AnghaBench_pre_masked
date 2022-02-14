
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc_vif {struct wilc* wilc; } ;
struct wilc {TYPE_1__* firmware; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int size; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct wilc*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct wilc_vif *VAR_2 = FUNC_2(VAR_1);
 struct wilc *VAR_3 = VAR_2->wilc;
 int VAR_4 = 0;

 if (!VAR_3->firmware) {
  FUNC_1(VAR_1, "Firmware buffer is NULL\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_4(VAR_3, VAR_3->firmware->data,
       VAR_3->firmware->size);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_3(VAR_3->firmware);
 VAR_3->firmware = ((void*)0);

 FUNC_0(VAR_1, "Download Succeeded\n");

 return 0;
}
