
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl; } ;
struct nfp_net {TYPE_1__ dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_net*,int ) ;
 int FUNC_1 (struct nfp_net*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct nfp_net *VAR_3)
{
 if (!(VAR_3->dp.ctrl & VAR_1))
  return 0;

 VAR_3->dp.ctrl &= ~VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_3->dp.ctrl);

 return FUNC_0(VAR_3, VAR_2);
}
