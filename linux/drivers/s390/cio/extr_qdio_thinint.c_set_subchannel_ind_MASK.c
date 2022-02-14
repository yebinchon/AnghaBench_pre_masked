
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int summary_indicator_addr ;
typedef int subchannel_indicator_addr ;
struct TYPE_6__ {int sch_no; } ;
struct qdio_irq {TYPE_3__ schid; int dsci; scalar_t__ chsc_page; } ;
struct TYPE_4__ {int code; } ;
struct chsc_scssc_area {TYPE_1__ response; } ;
struct TYPE_5__ {int lsi_ptr; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (TYPE_3__,struct chsc_scssc_area*,scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct qdio_irq *VAR_1, int VAR_2)
{
 struct chsc_scssc_area *VAR_3 = (void *)VAR_1->chsc_page;
 u64 VAR_4, VAR_5;
 int VAR_6;

 if (VAR_2) {
  VAR_4 = 0;
  VAR_5 = 0;
 } else {
  VAR_4 = FUNC_4(VAR_0.lsi_ptr);
  VAR_5 = FUNC_4(VAR_1->dsci);
 }

 VAR_6 = FUNC_3(VAR_1->schid, VAR_3, VAR_4,
         VAR_5);
 if (VAR_6) {
  FUNC_0("%4x SSI r:%4x", VAR_1->schid.sch_no,
     VAR_3->response.code);
  goto out;
 }

 FUNC_1("setscind");
 FUNC_2(&VAR_4, sizeof(VAR_4));
 FUNC_2(&VAR_5, sizeof(VAR_5));
out:
 return VAR_6;
}
