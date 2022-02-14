
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scrub_page {TYPE_2__* recover; } ;
struct TYPE_4__ {TYPE_1__* bbio; } ;
struct TYPE_3__ {int map_type; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct scrub_page *VAR_1)
{
 return VAR_1->recover &&
        (VAR_1->recover->bbio->map_type & VAR_0);
}
