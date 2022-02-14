
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u16 ;
struct pcnet32_private {int napi; TYPE_1__* a; } ;
struct net_device {int base_addr; } ;
struct TYPE_2__ {int (* read_csr ) (int ,int ) ;int (* write_csr ) (int ,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct pcnet32_private *VAR_2 = FUNC_1(VAR_1);
 ulong VAR_3 = VAR_1->base_addr;
 u16 VAR_4;

 FUNC_2(VAR_1);
 VAR_4 = VAR_2->a->read_csr(VAR_3, VAR_0);
 VAR_4 &= 0x00ff;
 VAR_2->a->write_csr(VAR_3, VAR_0, VAR_4);
 FUNC_0(&VAR_2->napi);
}
