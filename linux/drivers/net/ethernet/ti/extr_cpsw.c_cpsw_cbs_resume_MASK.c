
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpsw_slave {int dummy; } ;
struct cpsw_priv {int* fifo_bw; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_priv*,int,int) ;

__attribute__((used)) static void FUNC_1(struct cpsw_slave *VAR_1, struct cpsw_priv *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = VAR_0; VAR_3 > 0; VAR_3--) {
  VAR_4 = VAR_2->fifo_bw[VAR_3];
  if (!VAR_4)
   continue;

  FUNC_0(VAR_2, VAR_3, VAR_4);
 }
}
