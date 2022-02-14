
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct qlcnic_dcb_param {int * app; int * hdr_prio_pfc_map; } ;
struct qlcnic_dcb_cee {struct qlcnic_dcb_app* app; } ;
struct qlcnic_dcb_app {int valid; size_t priority; int protocol; scalar_t__ selector; } ;
struct qlcnic_adapter {TYPE_1__* netdev; } ;
struct dcb_app {size_t priority; int protocol; scalar_t__ selector; } ;
struct TYPE_2__ {scalar_t__ dcbnl_ops; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (TYPE_1__*,struct dcb_app*) ;
 size_t FUNC_3 (struct qlcnic_adapter*,int ) ;
 size_t FUNC_4 (struct qlcnic_adapter*,int ) ;
 size_t FUNC_5 (size_t) ;

__attribute__((used)) static void
FUNC_6(struct qlcnic_adapter *VAR_2, u8 VAR_3,
          struct qlcnic_dcb_param *VAR_4,
          struct qlcnic_dcb_cee *VAR_5)
{
 struct qlcnic_dcb_app *VAR_6;
 u8 VAR_7, VAR_8, VAR_9, VAR_10;
 struct dcb_app VAR_11;

 VAR_8 = FUNC_3(VAR_2, VAR_4->hdr_prio_pfc_map[0]);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = &VAR_5->app[VAR_7];
  VAR_6->valid = 1;


  VAR_6->selector = FUNC_1(VAR_4->app[VAR_7]) - 1;
  VAR_11.selector = VAR_6->selector;
  VAR_6->protocol = FUNC_0(VAR_4->app[VAR_7]);
  VAR_11.protocol = VAR_6->protocol;
  VAR_9 = FUNC_4(VAR_2, VAR_4->app[VAR_7]);
  VAR_10 = FUNC_5(VAR_9);

  if (VAR_10 >= VAR_0)
   VAR_10 = 0;

  VAR_6->priority = VAR_10;
  VAR_11.priority = VAR_10;

  if (VAR_3 == VAR_1 && VAR_2->netdev->dcbnl_ops)
   FUNC_2(VAR_2->netdev, &VAR_11);
 }
}
