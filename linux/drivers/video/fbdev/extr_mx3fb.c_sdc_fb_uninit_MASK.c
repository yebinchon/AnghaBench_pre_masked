
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mx3fb_info {struct mx3fb_data* mx3fb; } ;
struct mx3fb_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mx3fb_data*,int ) ;
 int FUNC_1 (struct mx3fb_data*,int,int ) ;

__attribute__((used)) static uint32_t FUNC_2(struct mx3fb_info *VAR_2)
{
 struct mx3fb_data *VAR_3 = VAR_2->mx3fb;
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);

 FUNC_1(VAR_3, VAR_4 & ~VAR_0, VAR_1);

 return VAR_4 & VAR_0;
}
