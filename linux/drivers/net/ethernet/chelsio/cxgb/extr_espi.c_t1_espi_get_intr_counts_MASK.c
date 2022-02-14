
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct espi_intr_counts {int dummy; } ;
struct peespi {struct espi_intr_counts const intr_cnt; } ;



const struct espi_intr_counts *FUNC_0(struct peespi *VAR_0)
{
 return &VAR_0->intr_cnt;
}
