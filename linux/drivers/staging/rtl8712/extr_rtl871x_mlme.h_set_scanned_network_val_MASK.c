
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int lock; int num_of_scanned; } ;
typedef int sint ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct mlme_priv *VAR_0,
          sint VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_0->num_of_scanned = VAR_1;
 FUNC_1(&VAR_0->lock, VAR_2);
}
