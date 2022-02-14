
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct octeon_droq {int pkts_credit_reg; struct octeon_device* oct_dev; } ;
struct octeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct octeon_device*,struct octeon_droq*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;

int FUNC_4(struct octeon_droq *VAR_1)
{
 struct octeon_device *VAR_2 = VAR_1->oct_dev;
 int VAR_3, VAR_4 = 1;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_1->pkts_credit_reg);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3) {




  FUNC_2();
  FUNC_3(VAR_3, VAR_1->pkts_credit_reg);

  if (VAR_5 + VAR_3 >= VAR_0)
   VAR_4 = 0;
 }

 return VAR_4;
}
