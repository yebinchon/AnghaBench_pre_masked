
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbu2ss_udc {int dummy; } ;
struct nbu2ss_req {int dummy; } ;
struct nbu2ss_ep {int dummy; } ;


 int FUNC_0 (struct nbu2ss_ep*,struct nbu2ss_req*,int) ;
 int FUNC_1 (struct nbu2ss_udc*,struct nbu2ss_ep*,struct nbu2ss_req*) ;

__attribute__((used)) static inline void FUNC_2(struct nbu2ss_udc *VAR_0,
           struct nbu2ss_ep *VAR_1,
           struct nbu2ss_req *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 <= 0)
  FUNC_0(VAR_1, VAR_2, VAR_3);
}
