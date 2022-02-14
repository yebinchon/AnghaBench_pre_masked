
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dim_cq_moder {int usec; int pkts; scalar_t__ cq_period_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static struct dim_cq_moder FUNC_0(u8 VAR_4)
{
 struct dim_cq_moder VAR_5;

 VAR_5.cq_period_mode = VAR_4;
 VAR_5.pkts = VAR_0;
 VAR_5.usec = VAR_1;
 if (VAR_4 == VAR_3)
  VAR_5.usec = VAR_2;

 return VAR_5;
}
