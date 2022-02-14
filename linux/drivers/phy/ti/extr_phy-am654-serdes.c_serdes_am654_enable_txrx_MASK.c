
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdes_am654 {int rx0_enable; int tx0_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct serdes_am654 *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_0(VAR_2->tx0_enable, VAR_1);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_2->rx0_enable, VAR_0);
 if (VAR_3)
  return VAR_3;

 return 0;
}
