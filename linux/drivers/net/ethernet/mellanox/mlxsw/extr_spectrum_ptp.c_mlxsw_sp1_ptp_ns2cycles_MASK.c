
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timecounter {TYPE_1__* cc; } ;
struct TYPE_2__ {int mult; int shift; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u64 FUNC_1(const struct timecounter *VAR_0, u64 VAR_1)
{
 u64 VAR_2 = (u64) VAR_1;

 VAR_2 <<= VAR_0->cc->shift;
 VAR_2 = FUNC_0(VAR_2, VAR_0->cc->mult);

 return VAR_2;
}
