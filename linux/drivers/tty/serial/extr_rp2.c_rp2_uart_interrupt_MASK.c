
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rp2_card {scalar_t__ n_ports; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rp2_card*,int) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct rp2_card *VAR_5 = VAR_4;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, 0);
 if (VAR_5->n_ports >= VAR_2)
  VAR_6 += FUNC_0(VAR_5, 1);

 return VAR_6 ? VAR_0 : VAR_1;
}
