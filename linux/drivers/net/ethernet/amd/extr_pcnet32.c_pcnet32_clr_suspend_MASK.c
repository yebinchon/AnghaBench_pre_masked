
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct pcnet32_private {TYPE_1__* a; } ;
struct TYPE_2__ {int (* read_csr ) (int ,int ) ;int (* write_csr ) (int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct pcnet32_private *VAR_2, ulong VAR_3)
{
 int VAR_4 = VAR_2->a->read_csr(VAR_3, VAR_0);

 VAR_2->a->write_csr(VAR_3, VAR_0, VAR_4 & ~VAR_1);
}
