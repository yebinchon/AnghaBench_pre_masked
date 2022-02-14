
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_context {int mutex; int disconnect_flag; scalar_t__ mc_first; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pvr2_context*) ;

__attribute__((used)) static void FUNC_2(struct pvr2_context *VAR_0)
{
 int VAR_1 = 0;
 if (!(VAR_0->mc_first || !VAR_0->disconnect_flag)) {
  VAR_1 = !0;
 }
 FUNC_0(&VAR_0->mutex);
 if (VAR_1) FUNC_1(VAR_0);
}
