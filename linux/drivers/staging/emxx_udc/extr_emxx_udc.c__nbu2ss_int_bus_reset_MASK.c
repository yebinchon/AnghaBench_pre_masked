
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbu2ss_udc {int ep0state; scalar_t__ remote_wakeup; int devstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nbu2ss_udc*) ;

__attribute__((used)) static inline void FUNC_1(struct nbu2ss_udc *VAR_2)
{
 VAR_2->devstate = VAR_1;
 VAR_2->remote_wakeup = 0;

 FUNC_0(VAR_2);

 VAR_2->ep0state = VAR_0;
}
