
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct fmdev {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fmdev*,int ,int ,scalar_t__*,int,int *,int *) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct fmdev *VAR_7, u16 VAR_8)
{
 u16 VAR_9;
 int VAR_10;

 if (VAR_8 != VAR_2 && VAR_8 != VAR_1) {
  FUNC_1("Invalid mode\n");
  return -VAR_0;
 }


 VAR_9 = (u16)VAR_8;
 VAR_10 = FUNC_0(VAR_7, VAR_5, VAR_6, &VAR_9,
   sizeof(VAR_9), ((void*)0), ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;


 VAR_9 = VAR_3;
 VAR_10 = FUNC_0(VAR_7, VAR_4, VAR_6, &VAR_9,
   sizeof(VAR_9), ((void*)0), ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
