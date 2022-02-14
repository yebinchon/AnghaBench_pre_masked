
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int client; TYPE_1__* bops; } ;
struct dpot_data {TYPE_2__ bdata; } ;
struct TYPE_3__ {int (* write_d8 ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct dpot_data *VAR_0, u8 VAR_1)
{
 return VAR_0->bdata.bops->write_d8(VAR_0->bdata.client, VAR_1);
}
