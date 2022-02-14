
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fmdev {scalar_t__ curr_fmmode; int flag; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fmdev*) ;
 int FUNC_1 (struct fmdev*,int ,int ,int*,int,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct fmdev *VAR_5)
{
 u16 VAR_6;
 int VAR_7;

 if (!FUNC_4(VAR_1, &VAR_5->flag)) {
  FUNC_3("FM core is not ready\n");
  return -VAR_0;
 }
 if (VAR_5->curr_fmmode == VAR_2) {
  FUNC_2("FM chip is already in OFF state\n");
  return 0;
 }

 VAR_6 = 0x0;
 VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_4, &VAR_6,
  sizeof(VAR_6), ((void*)0), ((void*)0));
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_0(VAR_5);
}
