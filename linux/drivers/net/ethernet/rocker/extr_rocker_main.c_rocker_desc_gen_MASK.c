
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rocker_desc_info {TYPE_1__* desc; } ;
struct TYPE_2__ {int comp_err; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct rocker_desc_info *VAR_1)
{
 u32 VAR_2 = VAR_1->desc->comp_err;

 return VAR_2 & VAR_0 ? 1 : 0;
}
