
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcmgenet_priv {TYPE_1__* hw_params; } ;
struct TYPE_2__ {int hfb_filter_cnt; int hfb_filter_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct bcmgenet_priv*,int,scalar_t__) ;
 int FUNC_1 (struct bcmgenet_priv*,int,int) ;
 int FUNC_2 (struct bcmgenet_priv*,int,int) ;

__attribute__((used)) static void FUNC_3(struct bcmgenet_priv *VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_5, 0x0, VAR_2);
 FUNC_0(VAR_5, 0x0, VAR_3);
 FUNC_0(VAR_5, 0x0, VAR_3 + 4);

 for (VAR_6 = VAR_0; VAR_6 <= VAR_1; VAR_6++)
  FUNC_2(VAR_5, 0x0, VAR_6);

 for (VAR_6 = 0; VAR_6 < (VAR_5->hw_params->hfb_filter_cnt / 4); VAR_6++)
  FUNC_0(VAR_5, 0x0,
     VAR_4 + VAR_6 * sizeof(u32));

 for (VAR_6 = 0; VAR_6 < VAR_5->hw_params->hfb_filter_cnt *
   VAR_5->hw_params->hfb_filter_size; VAR_6++)
  FUNC_1(VAR_5, 0x0, VAR_6 * sizeof(u32));
}
