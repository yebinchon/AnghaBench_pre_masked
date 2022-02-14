
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tuple_t ;
struct pcmcia_device {int dummy; } ;
struct TYPE_4__ {int length; int offset; int edc; int type; } ;
typedef TYPE_1__ cistpl_format_t ;
struct TYPE_5__ {TYPE_1__ format; } ;
typedef TYPE_2__ cisparse_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_1,
    tuple_t *VAR_2,
    void *VAR_3)
{
 cisparse_t VAR_4;

 if (!FUNC_0(VAR_2, &VAR_4)) {
  cistpl_format_t *VAR_5 = &VAR_4.format;
  (void)VAR_5;
  FUNC_1("Format type: %u, Error Detection: %u, offset = %u, length =%u\n",
   VAR_5->type, VAR_5->edc, VAR_5->offset, VAR_5->length);
 }
 return -VAR_0;
}
