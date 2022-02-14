
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amvdec_session {TYPE_2__* core; TYPE_1__* fmt_out; } ;
struct amvdec_ops {int (* start ) (struct amvdec_session*) ;} ;
struct TYPE_4__ {int dos_parser_clk; int dos_clk; } ;
struct TYPE_3__ {struct amvdec_ops* vdec_ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amvdec_session*) ;
 int FUNC_3 (struct amvdec_session*) ;

__attribute__((used)) static int FUNC_4(struct amvdec_session *VAR_0)
{
 int VAR_1;
 struct amvdec_ops *VAR_2 = VAR_0->fmt_out->vdec_ops;

 VAR_1 = FUNC_1(VAR_0->core->dos_parser_clk);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->core->dos_clk);
 if (VAR_1)
  goto disable_dos_parser;

 VAR_1 = VAR_2->start(VAR_0);
 if (VAR_1)
  goto disable_dos;

 FUNC_2(VAR_0);

 return 0;

disable_dos:
 FUNC_0(VAR_0->core->dos_clk);
disable_dos_parser:
 FUNC_0(VAR_0->core->dos_parser_clk);

 return VAR_1;
}
