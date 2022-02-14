
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsiif_sring {int dummy; } ;
struct vscsibk_info {int irq; int dev; int domid; int ring; } ;
typedef int grant_ref_t ;
typedef int evtchn_port_t ;


 int FUNC_0 (int *,struct vscsiif_sring*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int *,int ,int ,char*,struct vscsibk_info*) ;
 int VAR_2 ;
 int FUNC_3 (int,struct vscsibk_info*) ;
 int FUNC_4 (int ,int *,int,void**) ;
 int FUNC_5 (int ,void*) ;

__attribute__((used)) static int FUNC_6(struct vscsibk_info *VAR_3, grant_ref_t VAR_4,
   evtchn_port_t VAR_5)
{
 void *VAR_6;
 struct vscsiif_sring *VAR_7;
 int VAR_8;

 if (VAR_3->irq)
  return -1;

 VAR_8 = FUNC_4(VAR_3->dev, &VAR_4, 1, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_7 = (struct vscsiif_sring *)VAR_6;
 FUNC_0(&VAR_3->ring, VAR_7, VAR_1);

 VAR_8 = FUNC_1(VAR_3->domid, VAR_5);
 if (VAR_8 < 0)
  goto unmap_page;

 VAR_3->irq = VAR_8;

 VAR_8 = FUNC_2(VAR_3->irq, ((void*)0), VAR_2,
       VAR_0, "vscsiif-backend", VAR_3);
 if (VAR_8)
  goto free_irq;

 return 0;

free_irq:
 FUNC_3(VAR_3->irq, VAR_3);
 VAR_3->irq = 0;
unmap_page:
 FUNC_5(VAR_3->dev, VAR_6);

 return VAR_8;
}
