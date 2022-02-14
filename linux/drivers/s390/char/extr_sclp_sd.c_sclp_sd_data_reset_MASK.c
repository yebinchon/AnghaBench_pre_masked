
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_sd_data {scalar_t__ esize_bytes; scalar_t__ dsize_bytes; int * data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct sclp_sd_data *VAR_0)
{
 FUNC_0(VAR_0->data);
 VAR_0->data = ((void*)0);
 VAR_0->dsize_bytes = 0;
 VAR_0->esize_bytes = 0;
}
