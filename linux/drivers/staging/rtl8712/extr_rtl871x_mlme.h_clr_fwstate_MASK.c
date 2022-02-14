
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int lock; int fw_state; } ;
typedef int sint ;


 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct mlme_priv *VAR_0, sint VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 if (FUNC_0(VAR_0, VAR_1))
  VAR_0->fw_state ^= VAR_1;
 FUNC_2(&VAR_0->lock, VAR_2);
}
