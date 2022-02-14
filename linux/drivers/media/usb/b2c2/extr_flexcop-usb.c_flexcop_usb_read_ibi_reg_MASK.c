
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct flexcop_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ raw; } ;
typedef TYPE_1__ flexcop_ibi_value ;
typedef int flexcop_ibi_register ;


 int FUNC_0 (struct flexcop_device*,int ,scalar_t__*,int) ;

__attribute__((used)) static flexcop_ibi_value FUNC_1(struct flexcop_device *VAR_0,
 flexcop_ibi_register VAR_1)
{
 flexcop_ibi_value VAR_2;
 VAR_2.raw = 0;
 FUNC_0(VAR_0, VAR_1, &VAR_2.raw, 1);
 return VAR_2;
}
