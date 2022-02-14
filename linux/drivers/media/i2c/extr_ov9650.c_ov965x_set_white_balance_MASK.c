
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {TYPE_2__* red_balance; TYPE_1__* blue_balance; } ;
struct ov965x {TYPE_3__ ctrls; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_4__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ov965x*,int,int*) ;
 int FUNC_1 (struct ov965x*,int,int) ;

__attribute__((used)) static int FUNC_2(struct ov965x *VAR_3, int VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_6);
 if (!VAR_5) {
  VAR_6 = VAR_4 ? VAR_6 | VAR_1 : VAR_6 & ~VAR_1;
  VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_6);
 }
 if (!VAR_5 && !VAR_4) {
  VAR_5 = FUNC_1(VAR_3, VAR_0,
       VAR_3->ctrls.blue_balance->val);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_5 = FUNC_1(VAR_3, VAR_2,
       VAR_3->ctrls.red_balance->val);
 }
 return VAR_5;
}
