
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mx3fb_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mx3fb_data*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct mx3fb_data *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 VAR_2 = (VAR_2 >> 16) & 0xFF;

 return VAR_2;
}
