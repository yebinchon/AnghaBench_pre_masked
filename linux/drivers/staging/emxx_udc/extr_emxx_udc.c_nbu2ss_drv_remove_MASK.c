
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct nbu2ss_udc {struct nbu2ss_ep* ep; } ;
struct nbu2ss_ep {int phys_buf; scalar_t__ virt_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,void*,int ) ;
 int FUNC_1 (int ,struct nbu2ss_udc*) ;
 struct nbu2ss_udc VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_4)
{
 struct nbu2ss_udc *VAR_5;
 struct nbu2ss_ep *VAR_6;
 int VAR_7;

 VAR_5 = &VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_5->ep[VAR_7];
  if (VAR_6->virt_buf)
   FUNC_0(((void*)0), VAR_1, (void *)VAR_6->virt_buf,
       VAR_6->phys_buf);
 }


 FUNC_1(VAR_3, VAR_5);

 return 0;
}
