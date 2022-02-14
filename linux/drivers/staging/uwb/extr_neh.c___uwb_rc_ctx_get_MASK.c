
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_neh {int context; } ;
struct uwb_rc {int ctx_bm; int ctx_roll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static
int FUNC_3(struct uwb_rc *VAR_2, struct uwb_rc_neh *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_1(VAR_2->ctx_bm, VAR_1,
        VAR_2->ctx_roll++);
 if (VAR_4 < VAR_1)
  goto found;
 VAR_4 = FUNC_0(VAR_2->ctx_bm, VAR_1);
 if (VAR_4 < VAR_1)
  goto found;
 return -VAR_0;
found:
 FUNC_2(VAR_4, VAR_2->ctx_bm);
 VAR_3->context = VAR_4;
 return 0;
}
