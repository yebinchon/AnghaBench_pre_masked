
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gen3_chan {int extcon_host; int work; } ;


 int FUNC_0 (struct rcar_gen3_chan*,int ) ;
 int FUNC_1 (struct rcar_gen3_chan*,int ) ;
 int FUNC_2 (struct rcar_gen3_chan*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rcar_gen3_chan *VAR_0)
{
 FUNC_2(VAR_0, 0, 1);
 FUNC_1(VAR_0, 0);
 FUNC_0(VAR_0, 0);

 VAR_0->extcon_host = 0;
 FUNC_3(&VAR_0->work);
}
