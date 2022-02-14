
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fmdev {int curr_fmmode; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct fmdev *VAR_3, u8 *VAR_4)
{
 if (!FUNC_1(VAR_2, &VAR_3->flag)) {
  FUNC_0("FM core is not ready\n");
  return -VAR_1;
 }
 if (VAR_4 == ((void*)0)) {
  FUNC_0("Invalid memory\n");
  return -VAR_0;
 }

 *VAR_4 = VAR_3->curr_fmmode;
 return 0;
}
