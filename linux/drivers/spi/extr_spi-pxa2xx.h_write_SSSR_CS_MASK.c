
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct driver_data {scalar_t__ ssp_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct driver_data*,int ) ;
 int FUNC_1 (struct driver_data*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct driver_data *VAR_4, u32 VAR_5)
{
 if (VAR_4->ssp_type == VAR_0 ||
     VAR_4->ssp_type == VAR_1)
  VAR_5 |= FUNC_0(VAR_4, VAR_2) & VAR_3;

 FUNC_1(VAR_4, VAR_2, VAR_5);
}
