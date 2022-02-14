
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int sub_ns; int ns; } ;
struct macb {TYPE_1__ tsu_incr; int tsu_rate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct macb *VAR_2)
{
 u32 VAR_3 = 0;
 u64 VAR_4;

 VAR_2->tsu_incr.ns = FUNC_1(VAR_1, VAR_2->tsu_rate, &VAR_3);
 if (VAR_3) {
  VAR_4 = VAR_3;
  VAR_4 <<= VAR_0;
  VAR_2->tsu_incr.sub_ns = FUNC_0(VAR_4, VAR_2->tsu_rate);
 } else {
  VAR_2->tsu_incr.sub_ns = 0;
 }
}
