
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_drif_hwbuf {unsigned int status; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct rcar_drif_hwbuf **VAR_1,
     unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1[VAR_3]->status &= ~VAR_2;
}
