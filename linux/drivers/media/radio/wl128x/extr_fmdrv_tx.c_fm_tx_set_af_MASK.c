
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct fmdev {scalar_t__ curr_fmmode; } ;
typedef int payload ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fmdev*,int ,int ,scalar_t__*,int,int *,int *) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct fmdev *VAR_4, u32 VAR_5)
{
 u16 VAR_6;
 int VAR_7;

 if (VAR_4->curr_fmmode != VAR_1)
  return -VAR_0;

 FUNC_1("AF: %d\n", VAR_5);

 VAR_5 = (VAR_5 - 87500) / 100;
 VAR_6 = (u16)VAR_5;
 VAR_7 = FUNC_0(VAR_4, VAR_3, VAR_2, &VAR_6,
   sizeof(VAR_6), ((void*)0), ((void*)0));
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
