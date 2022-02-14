
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tuple_t ;
struct pcmcia_device {int dummy; } ;
struct TYPE_6__ {int nid; TYPE_1__* id; } ;
typedef TYPE_2__ cistpl_jedec_t ;
struct TYPE_7__ {TYPE_2__ jedec; } ;
typedef TYPE_3__ cisparse_t ;
struct TYPE_5__ {int info; int mfr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_1,
    tuple_t *VAR_2,
    void *VAR_3)
{
 cisparse_t VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_2, &VAR_4)) {
  cistpl_jedec_t *VAR_6 = &VAR_4.jedec;
  for (VAR_5 = 0; VAR_5 < VAR_6->nid; VAR_5++)
   FUNC_1("JEDEC: 0x%02x 0x%02x\n",
         VAR_6->id[VAR_5].mfr, VAR_6->id[VAR_5].info);
 }
 return -VAR_0;
}
