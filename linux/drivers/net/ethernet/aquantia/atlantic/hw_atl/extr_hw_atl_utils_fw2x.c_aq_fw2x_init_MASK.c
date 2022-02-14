
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_hw_s {unsigned int mbox_addr; unsigned int rpc_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct aq_hw_s*,unsigned int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct aq_hw_s *VAR_2)
{
 int VAR_3 = 0;


 VAR_3 = FUNC_0(VAR_0,
     VAR_2, VAR_2->mbox_addr,
     VAR_2->mbox_addr != 0U,
     1000U, 10000U);

 VAR_3 = FUNC_0(VAR_1,
     VAR_2, VAR_2->rpc_addr,
     VAR_2->rpc_addr != 0U,
     1000U, 100000U);

 return VAR_3;
}
