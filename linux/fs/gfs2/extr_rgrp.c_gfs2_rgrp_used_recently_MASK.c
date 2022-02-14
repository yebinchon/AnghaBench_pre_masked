
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {TYPE_2__* rgd; } ;
struct gfs2_blkreserv {TYPE_3__ rs_rbm; } ;
struct TYPE_5__ {TYPE_1__* rd_gl; } ;
struct TYPE_4__ {int gl_dstamp; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct gfs2_blkreserv *VAR_0,
        u64 VAR_1)
{
 u64 VAR_2;

 VAR_2 = FUNC_2(FUNC_1(FUNC_0(),
                            VAR_0->rs_rbm.rgd->rd_gl->gl_dstamp));

 return VAR_2 > (VAR_1 * 1000 * 1000);
}
