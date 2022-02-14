
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct driver_data {scalar_t__ n_bytes; scalar_t__ tx; scalar_t__ tx_end; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct driver_data*) ;
 int FUNC_1 (struct driver_data*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct driver_data *VAR_1)
{
 u8 VAR_2 = VAR_1->n_bytes;

 if (FUNC_0(VAR_1)
  || (VAR_1->tx == VAR_1->tx_end))
  return 0;

 FUNC_1(VAR_1, VAR_0, 0);
 VAR_1->tx += VAR_2;

 return 1;
}
