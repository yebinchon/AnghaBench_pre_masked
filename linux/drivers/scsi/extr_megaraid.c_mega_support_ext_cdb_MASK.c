
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbox_out {int dummy; } ;
typedef int raw_mbox ;
struct TYPE_2__ {int m_out; } ;
typedef TYPE_1__ mbox_t ;
typedef int adapter_t ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(adapter_t *VAR_0)
{
 unsigned char VAR_1[sizeof(struct mbox_out)];
 mbox_t *VAR_2;
 int VAR_3;

 VAR_2 = (mbox_t *)VAR_1;

 FUNC_1(&VAR_2->m_out, 0, sizeof(VAR_1));



 VAR_1[0] = 0xA4;
 VAR_1[2] = 0x16;

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 return !VAR_3;
}
