
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {scalar_t__ t4_bar0; TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct adapter*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct adapter *VAR_0, u32 VAR_1, u64 VAR_2,
    u32 VAR_3)
{
 u32 VAR_4;

 if (FUNC_0(VAR_0->params.chip)) {
  u32 VAR_5;
  VAR_5 = FUNC_1(VAR_0, VAR_1);
  VAR_5 &= VAR_2;
  VAR_0->t4_bar0 = VAR_5;

  VAR_4 = VAR_5 + VAR_3;
 } else {

  VAR_4 = VAR_3;
 }
 return VAR_4;
}
