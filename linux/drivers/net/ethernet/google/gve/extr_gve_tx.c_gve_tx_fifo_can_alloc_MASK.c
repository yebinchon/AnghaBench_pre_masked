
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_tx_fifo {int available; } ;


 size_t FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct gve_tx_fifo *VAR_0, size_t VAR_1)
{
 return (FUNC_0(&VAR_0->available) <= VAR_1) ? 0 : 1;
}
