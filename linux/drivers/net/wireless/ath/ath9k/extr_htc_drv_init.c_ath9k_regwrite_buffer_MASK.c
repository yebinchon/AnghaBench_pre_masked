
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_2__* wmi; } ;
struct TYPE_4__ {size_t multi_write_idx; int multi_write_mutex; TYPE_1__* multi_write; } ;
struct TYPE_3__ {void* val; void* reg; } ;


 size_t VAR_0 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_common*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct ath_hw *VAR_4 = VAR_1;
 struct ath_common *VAR_5 = FUNC_0(VAR_4);
 struct ath9k_htc_priv *VAR_6 = (struct ath9k_htc_priv *) VAR_5->priv;

 FUNC_3(&VAR_6->wmi->multi_write_mutex);


 VAR_6->wmi->multi_write[VAR_6->wmi->multi_write_idx].reg =
  FUNC_2(VAR_3);
 VAR_6->wmi->multi_write[VAR_6->wmi->multi_write_idx].val =
  FUNC_2(VAR_2);

 VAR_6->wmi->multi_write_idx++;


 if (VAR_6->wmi->multi_write_idx == VAR_0)
  FUNC_1(VAR_5);

 FUNC_4(&VAR_6->wmi->multi_write_mutex);
}
