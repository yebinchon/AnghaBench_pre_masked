
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;
struct fintek_dev {int rdev; int cir_port_len; int cir_addr; int cir_irq; int fintek_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fintek_dev*,int ,int ) ;
 int FUNC_1 (struct fintek_dev*) ;
 int FUNC_2 (struct fintek_dev*) ;
 int FUNC_3 (int ,struct fintek_dev*) ;
 int FUNC_4 (struct fintek_dev*) ;
 struct fintek_dev* FUNC_5 (struct pnp_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct pnp_dev *VAR_2)
{
 struct fintek_dev *VAR_3 = FUNC_5(VAR_2);
 unsigned long VAR_4;

 FUNC_8(&VAR_3->fintek_lock, VAR_4);

 FUNC_1(VAR_3);
 FUNC_0(VAR_3, VAR_1, VAR_0);

 FUNC_2(VAR_3);
 FUNC_9(&VAR_3->fintek_lock, VAR_4);


 FUNC_3(VAR_3->cir_irq, VAR_3);
 FUNC_7(VAR_3->cir_addr, VAR_3->cir_port_len);

 FUNC_6(VAR_3->rdev);

 FUNC_4(VAR_3);
}
