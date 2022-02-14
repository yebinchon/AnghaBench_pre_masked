
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct be_queue_info {int id; } ;
struct TYPE_2__ {struct be_queue_info q; } ;
struct be_adapter {scalar_t__ db; TYPE_1__ mcc_obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct be_adapter*,int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct be_adapter *VAR_5)
{
 struct be_queue_info *VAR_6 = &VAR_5->mcc_obj.q;
 u32 VAR_7 = 0;

 if (FUNC_0(VAR_5, VAR_0))
  return -VAR_4;

 VAR_7 |= VAR_6->id & VAR_3;
 VAR_7 |= 1 << VAR_1;

 FUNC_2();
 FUNC_1(VAR_7, VAR_5->db + VAR_2);

 return 0;
}
