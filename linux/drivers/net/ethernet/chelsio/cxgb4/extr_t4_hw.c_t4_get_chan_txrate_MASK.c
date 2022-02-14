
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ nchan; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct adapter {TYPE_2__ params; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (struct adapter*,int ) ;
 int FUNC_9 (struct adapter*,int ) ;

void FUNC_10(struct adapter *VAR_3, u64 *VAR_4, u64 *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_9(VAR_3, VAR_2);
 VAR_4[0] = FUNC_8(VAR_3, FUNC_4(VAR_6));
 VAR_4[1] = FUNC_8(VAR_3, FUNC_5(VAR_6));
 if (VAR_3->params.arch.nchan == VAR_0) {
  VAR_4[2] = FUNC_8(VAR_3, FUNC_6(VAR_6));
  VAR_4[3] = FUNC_8(VAR_3, FUNC_7(VAR_6));
 }

 VAR_6 = FUNC_9(VAR_3, VAR_1);
 VAR_5[0] = FUNC_8(VAR_3, FUNC_0(VAR_6));
 VAR_5[1] = FUNC_8(VAR_3, FUNC_1(VAR_6));
 if (VAR_3->params.arch.nchan == VAR_0) {
  VAR_5[2] = FUNC_8(VAR_3, FUNC_2(VAR_6));
  VAR_5[3] = FUNC_8(VAR_3, FUNC_3(VAR_6));
 }
}
