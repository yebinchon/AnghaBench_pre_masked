
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int state; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct sfp*,int) ;

__attribute__((used)) static void FUNC_2(struct sfp *VAR_1)
{
 FUNC_0(VAR_1->dev, "tx disable %u -> %u\n",
  VAR_1->state & VAR_0 ? 1 : 0, 0);
 VAR_1->state &= ~VAR_0;
 FUNC_1(VAR_1, VAR_1->state);
}
