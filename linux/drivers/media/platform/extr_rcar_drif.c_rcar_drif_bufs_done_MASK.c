
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_drif_hwbuf {int status; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct rcar_drif_hwbuf **VAR_1)
{
 return (VAR_1[0]->status & VAR_1[1]->status & VAR_0);
}
