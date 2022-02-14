
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline int FUNC_0(struct mmc_host *VAR_6)
{
 return VAR_6->caps &
  (VAR_3 | VAR_4 |
   VAR_5 | VAR_2 |
   VAR_1) &&
        VAR_6->caps & VAR_0;
}
