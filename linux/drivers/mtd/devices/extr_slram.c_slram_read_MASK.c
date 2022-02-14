
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct mtd_info {TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ start; } ;
typedef TYPE_1__ slram_priv_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int *,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2,
  size_t *VAR_3, u_char *VAR_4)
{
 slram_priv_t *VAR_5 = VAR_0->priv;

 FUNC_0(VAR_4, VAR_5->start + VAR_1, VAR_2);
 *VAR_3 = VAR_2;
 return(0);
}
