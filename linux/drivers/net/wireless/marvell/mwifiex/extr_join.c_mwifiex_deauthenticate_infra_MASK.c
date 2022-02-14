
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * mac_address; } ;
struct TYPE_4__ {TYPE_1__ bss_descriptor; } ;
struct mwifiex_private {TYPE_2__ curr_bss_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct mwifiex_private*,int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_3, u8 *VAR_4)
{
 u8 VAR_5[VAR_0];
 int VAR_6;

 if (!VAR_4 || FUNC_0(VAR_4))
  FUNC_1(VAR_5,
         VAR_3->curr_bss_params.bss_descriptor.mac_address,
         VAR_0);
 else
  FUNC_1(VAR_5, VAR_4, VAR_0);

 VAR_6 = FUNC_2(VAR_3, VAR_2,
          VAR_1, 0, VAR_5, 1);

 return VAR_6;
}
