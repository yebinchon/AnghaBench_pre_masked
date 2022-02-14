
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfp_net {TYPE_1__* irq_entries; } ;
struct TYPE_2__ {int vector; } ;


 int FUNC_0 (int ,struct nfp_net*) ;
 int FUNC_1 (struct nfp_net*) ;
 int FUNC_2 (struct nfp_net*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct nfp_net *VAR_0, u32 VAR_1,
     unsigned int VAR_2)
{
 FUNC_2(VAR_0, VAR_1, 0xff);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->irq_entries[VAR_2].vector, VAR_0);
}
