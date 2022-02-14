
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct esp {int config1; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reset_dma ) (struct esp*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct esp*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct esp*,int ) ;
 int FUNC_4 (struct esp*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct esp *VAR_4)
{
 u8 VAR_5;


 VAR_4->ops->reset_dma(VAR_4);


 FUNC_1(VAR_4);


 VAR_5 = FUNC_0(VAR_0);
 VAR_5 |= VAR_2;
 FUNC_2(VAR_5, VAR_0);

 FUNC_3(VAR_4, VAR_1);
 FUNC_5(400);

 FUNC_2(VAR_4->config1, VAR_0);


 FUNC_0(VAR_3);
}
