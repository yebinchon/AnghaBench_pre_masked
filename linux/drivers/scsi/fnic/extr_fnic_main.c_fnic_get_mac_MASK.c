
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fnic {int * data_src_addr; } ;
struct fc_lport {int dummy; } ;


 struct fnic* FUNC_0 (struct fc_lport*) ;

__attribute__((used)) static u8 *FUNC_1(struct fc_lport *VAR_0)
{
 struct fnic *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->data_src_addr;
}
