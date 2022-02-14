
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


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_2(adapter_t *VAR_2)
{
 unsigned char VAR_3[sizeof(struct mbox_out)];
 mbox_t *VAR_4;
 int VAR_5;

 VAR_4 = (mbox_t *)VAR_3;

 FUNC_1(&VAR_4->m_out, 0, sizeof(VAR_3));




 VAR_3[0] = VAR_0;
 VAR_3[2] = VAR_1;

 VAR_5 = FUNC_0(VAR_2, VAR_3);

 return !VAR_5;
}
