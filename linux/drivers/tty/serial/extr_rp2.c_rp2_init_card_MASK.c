
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rp2_card {scalar_t__ n_ports; scalar_t__ bar0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rp2_card*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rp2_card *VAR_5)
{
 FUNC_1(4, VAR_5->bar0 + VAR_1);
 FUNC_1(0, VAR_5->bar0 + VAR_2);

 FUNC_0(VAR_5, 0);
 if (VAR_5->n_ports >= VAR_0)
  FUNC_0(VAR_5, 1);

 FUNC_1(VAR_4, VAR_5->bar0 + VAR_3);
}
