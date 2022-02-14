
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amvdec_session {scalar_t__ vififo_paddr; scalar_t__ vififo_size; struct amvdec_core* core; } ;
struct amvdec_core {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct amvdec_core*,int ,int) ;
 int FUNC_2 (struct amvdec_core*,int ,scalar_t__) ;
 int FUNC_3 (struct amvdec_core*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct amvdec_session *VAR_13)
{
 struct amvdec_core *VAR_14 = VAR_13->core;

 FUNC_2(VAR_14, VAR_7, 0);
 FUNC_2(VAR_14, VAR_12, 0);
 FUNC_2(VAR_14, VAR_5, FUNC_0(4));

 FUNC_2(VAR_14, VAR_10, VAR_13->vififo_paddr);
 FUNC_2(VAR_14, VAR_8, VAR_13->vififo_paddr);
 FUNC_2(VAR_14, VAR_9,
    VAR_13->vififo_paddr + VAR_13->vififo_size - 8);

 FUNC_3(VAR_14, VAR_7, 1);
 FUNC_1(VAR_14, VAR_7, 1);

 FUNC_2(VAR_14, VAR_6, VAR_0);
 FUNC_2(VAR_14, VAR_11, VAR_13->vififo_paddr);

 FUNC_3(VAR_14, VAR_6, 1);
 FUNC_1(VAR_14, VAR_6, 1);

 FUNC_3(VAR_14, VAR_7,
         (0x11 << VAR_3) | VAR_4 |
         VAR_2 | VAR_1);

 return 0;
}
