
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cudbg_rss_vf_conf {int rss_vf_vfh; int rss_vf_vfl; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct TYPE_3__ {int vfcount; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct adapter {TYPE_2__ params; } ;


 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_2 (struct adapter*,int,int *,int *,int) ;

int FUNC_3(struct cudbg_init *VAR_0,
    struct cudbg_buffer *VAR_1,
    struct cudbg_error *VAR_2)
{
 struct adapter *VAR_3 = VAR_0->adap;
 struct cudbg_buffer VAR_4 = { 0 };
 struct cudbg_rss_vf_conf *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_3->params.arch.vfcount;
 VAR_7 = FUNC_0(VAR_0, VAR_1,
       VAR_8 * sizeof(struct cudbg_rss_vf_conf),
       &VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5 = (struct cudbg_rss_vf_conf *)VAR_4.data;
 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
  FUNC_2(VAR_3, VAR_6, &VAR_5[VAR_6].rss_vf_vfl,
          &VAR_5[VAR_6].rss_vf_vfh, 1);
 return FUNC_1(VAR_0, &VAR_4, VAR_1);
}
