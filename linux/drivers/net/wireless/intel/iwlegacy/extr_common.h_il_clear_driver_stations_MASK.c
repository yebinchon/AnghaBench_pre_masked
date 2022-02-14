
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int sta_lock; scalar_t__ ucode_key_table; scalar_t__ num_stations; int stations; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_3(struct il_priv *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->sta_lock, VAR_1);
 FUNC_0(VAR_0->stations, 0, sizeof(VAR_0->stations));
 VAR_0->num_stations = 0;
 VAR_0->ucode_key_table = 0;
 FUNC_2(&VAR_0->sta_lock, VAR_1);
}
