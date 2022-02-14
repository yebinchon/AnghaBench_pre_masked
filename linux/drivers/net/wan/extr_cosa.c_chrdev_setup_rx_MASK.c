
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_data {int rxsize; char* rxdata; } ;



__attribute__((used)) static char *FUNC_0(struct channel_data *VAR_0, int VAR_1)
{

 VAR_0->rxsize = VAR_1;
 return VAR_0->rxdata;
}
