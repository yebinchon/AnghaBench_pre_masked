
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {scalar_t__ curr_state; } ;
struct TYPE_5__ {TYPE_1__ idc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*,scalar_t__) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_7(struct qlcnic_adapter *VAR_8)
{
 u32 VAR_9, VAR_10;

 if (FUNC_5(VAR_8))
  return -VAR_0;


 FUNC_1(VAR_8->ahw, VAR_5, 0);
 if (FUNC_4(VAR_8, 0)) {
  FUNC_6(VAR_8);
  return -VAR_0;
 }

 VAR_9 = FUNC_0(VAR_8->ahw, VAR_3);
 if (FUNC_2(VAR_8, VAR_9)) {
  FUNC_6(VAR_8);
  return -VAR_0;
 }

 if (VAR_9 != VAR_2 && VAR_7) {
  FUNC_1(VAR_8->ahw, VAR_3,
         VAR_2);
  VAR_9 = VAR_2;
 }

 VAR_8->ahw->idc.curr_state = VAR_9;

 if (VAR_9 == VAR_2)
  FUNC_3(VAR_8);


 if (VAR_6) {
  VAR_10 = FUNC_0(VAR_8->ahw, VAR_1);
  VAR_10 = VAR_10 & ~VAR_4;
  FUNC_1(VAR_8->ahw, VAR_1, VAR_10);
 }

 FUNC_6(VAR_8);

 return 0;
}
