
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wkup_m3_ipc {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct wkup_m3_ipc*,int) ;

__attribute__((used)) static int FUNC_2(struct wkup_m3_ipc *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, 1);

 VAR_2 = VAR_0 & VAR_3;
 VAR_2 >>= FUNC_0(VAR_0);

 return VAR_2;
}
