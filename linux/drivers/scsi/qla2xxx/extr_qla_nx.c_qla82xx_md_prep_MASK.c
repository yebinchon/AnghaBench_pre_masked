
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct qla_hw_data {int md_template_size; int md_dump_size; int * md_tmplt_hdr; int md_tmplt_hdr_dma; TYPE_1__* pdev; } ;
struct TYPE_11__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_10__ {int dev; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int ,TYPE_2__*,int,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_2__*,int,char*,int,...) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

void
FUNC_8(scsi_qla_host_t *VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_3->hw;
 int VAR_5;


 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 == VAR_0) {
  FUNC_3(VAR_2, VAR_3, 0xb04a,
      "MiniDump Template size obtained (%d KB)\n",
      VAR_4->md_template_size / 1024);


  if (FUNC_0(VAR_4))
   VAR_5 = FUNC_4(VAR_3);
  else
   VAR_5 = FUNC_6(VAR_3);

  if (VAR_5 == VAR_0) {
   FUNC_2(VAR_1, VAR_3, 0xb04b,
       "MiniDump Template obtained\n");


   VAR_5 = FUNC_5(VAR_3);
   if (VAR_5 == VAR_0)
    FUNC_3(VAR_2, VAR_3, 0xb04c,
        "MiniDump memory allocated (%d KB)\n",
        VAR_4->md_dump_size / 1024);
   else {
    FUNC_3(VAR_2, VAR_3, 0xb04d,
        "Free MiniDump template: %p, size: (%d KB)\n",
        *VAR_4->md_tmplt_hdr,
        VAR_4->md_template_size / 1024);
    FUNC_1(&VAR_4->pdev->dev,
        VAR_4->md_template_size,
        VAR_4->md_tmplt_hdr, VAR_4->md_tmplt_hdr_dma);
    VAR_4->md_tmplt_hdr = ((void*)0);
   }

  }
 }
}
