
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct fmdev {scalar_t__ curr_fmmode; } ;
typedef int payload ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fmdev*,int ) ;
 int FUNC_1 (struct fmdev*,int ,int ,int*,int,int *,int *) ;
 int FUNC_2 (struct fmdev*,int) ;
 int FUNC_3 (struct fmdev*,int ,int ) ;
 int FUNC_4 (struct fmdev*,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct fmdev *VAR_4, u8 *VAR_5, u8 VAR_6)
{
 u16 VAR_7;
 int VAR_8;

 if (VAR_4->curr_fmmode != VAR_1)
  return -VAR_0;

 FUNC_0(VAR_4, 0);


 FUNC_3(VAR_4, VAR_6, FUNC_5(VAR_5));


 FUNC_4(VAR_4, VAR_5);


 FUNC_2(VAR_4, 0x0);

 VAR_7 = 1;
 VAR_8 = FUNC_1(VAR_4, VAR_2, VAR_3, &VAR_7,
   sizeof(VAR_7), ((void*)0), ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
