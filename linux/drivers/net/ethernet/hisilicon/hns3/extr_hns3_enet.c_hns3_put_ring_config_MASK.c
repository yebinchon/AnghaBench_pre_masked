
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns3_nic_priv {TYPE_2__* ring_data; int dev; struct hnae3_handle* ae_handle; } ;
struct TYPE_3__ {int num_tqps; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct TYPE_4__ {struct TYPE_4__* ring; } ;


 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct hns3_nic_priv *VAR_0)
{
 struct hnae3_handle *VAR_1 = VAR_0->ae_handle;
 int VAR_2;

 if (!VAR_0->ring_data)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->kinfo.num_tqps; VAR_2++) {
  FUNC_0(VAR_0->dev, VAR_0->ring_data[VAR_2].ring);
  FUNC_0(VAR_0->dev,
      VAR_0->ring_data[VAR_2 + VAR_1->kinfo.num_tqps].ring);
 }
 FUNC_0(VAR_0->dev, VAR_0->ring_data);
 VAR_0->ring_data = ((void*)0);
}
