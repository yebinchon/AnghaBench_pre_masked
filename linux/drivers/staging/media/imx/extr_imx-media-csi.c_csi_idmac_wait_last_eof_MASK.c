
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi_priv {int last_eof; int sd; int last_eof_comp; int irqlock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct csi_priv *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;


 FUNC_1(&VAR_1->irqlock, VAR_2);
 VAR_1->last_eof = 1;
 FUNC_2(&VAR_1->irqlock, VAR_2);




 VAR_3 = FUNC_4(
  &VAR_1->last_eof_comp, FUNC_0(VAR_0));
 if (VAR_3 == 0)
  FUNC_3(&VAR_1->sd, "wait last EOF timeout\n");
}
