
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {TYPE_1__* txcredit_alloc; } ;
struct htc_target {TYPE_2__ pipe; } ;
struct TYPE_3__ {scalar_t__ service_id; scalar_t__ credit_alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct htc_target *VAR_2, u16 VAR_3)
{
 u8 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2->pipe.txcredit_alloc[VAR_5].service_id == VAR_3)
   VAR_4 =
    VAR_2->pipe.txcredit_alloc[VAR_5].credit_alloc;
 }

 if (VAR_4 == 0) {
  FUNC_0(VAR_0,
      "HTC Service TX : 0x%2.2X : allocation is zero!\n",
      VAR_3);
 }

 return VAR_4;
}
