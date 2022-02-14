
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct TYPE_2__ {int capi_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int) ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct ubifs_info *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2, VAR_3 >= 0 && VAR_3 < VAR_0);
 return !!VAR_1[VAR_3]->capi_name;
}
