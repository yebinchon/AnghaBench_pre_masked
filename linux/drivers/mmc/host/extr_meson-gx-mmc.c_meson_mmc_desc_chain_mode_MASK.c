
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int host_cookie; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct mmc_data *VAR_1)
{
 return VAR_1->host_cookie & VAR_0;
}
