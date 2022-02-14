
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgbi_tag_format {int dummy; } ;
struct TYPE_2__ {scalar_t__ pgsz_idx_dflt; } ;
struct cxgbi_ppm {int ppmax; TYPE_1__ tformat; } ;
struct cxgbi_device {int flags; int lldev; int pdev; int * ports; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void**,int ,int ,int ,struct cxgbi_tag_format*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

int FUNC_1(void **VAR_2, struct cxgbi_device *VAR_3,
   struct cxgbi_tag_format *VAR_4,
   unsigned int VAR_5, unsigned int VAR_6,
   unsigned int VAR_7, unsigned int VAR_8,
   unsigned int VAR_9, unsigned int VAR_10)
{
 int VAR_11 = FUNC_0(VAR_2, VAR_3->ports[0], VAR_3->pdev,
    VAR_3->lldev, VAR_4, VAR_5, VAR_6, VAR_7,
    VAR_8, VAR_9, VAR_10);

 if (VAR_11 >= 0) {
  struct cxgbi_ppm *VAR_12 = (struct cxgbi_ppm *)(*VAR_2);

  if (VAR_12->ppmax < 1024 ||
      VAR_12->tformat.pgsz_idx_dflt >= VAR_1)
   VAR_3->flags |= VAR_0;
  VAR_11 = 0;
 } else {
  VAR_3->flags |= VAR_0;
 }

 return VAR_11;
}
