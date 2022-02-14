
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct qlcnic_filter {int fnode; } ;
struct TYPE_2__ {int fnum; } ;
struct qlcnic_adapter {TYPE_1__ rx_fhash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct qlcnic_adapter*,void*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_4,
          struct qlcnic_filter *VAR_5,
          void *VAR_6, u16 VAR_7)
{
 int VAR_8;
 u8 VAR_9;

 VAR_9 = VAR_7 ? VAR_2 : VAR_0;
 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_7, VAR_9);
 if (VAR_8)
  return;

 VAR_9 = VAR_7 ? VAR_3 : VAR_1;
 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_7, VAR_9);
 if (!VAR_8) {
  FUNC_0(&VAR_5->fnode);
  VAR_4->rx_fhash.fnum--;
 }
}
