
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {unsigned int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;



__attribute__((used)) static u64 FUNC_0(struct adapter *VAR_0, unsigned int VAR_1)
{
 u64 VAR_2 = VAR_1 * VAR_0->params.vpd.cclk;

 return VAR_2 * 62 + VAR_2 / 2;
}
