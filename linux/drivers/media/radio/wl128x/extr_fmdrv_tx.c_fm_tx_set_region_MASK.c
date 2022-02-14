
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct fmdev {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fmdev*,int ,int ,scalar_t__*,int,int *,int *) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct fmdev *VAR_5, u8 VAR_6)
{
 u16 VAR_7;
 int VAR_8;

 if (VAR_6 != VAR_1 && VAR_6 != VAR_2) {
  FUNC_1("Invalid band\n");
  return -VAR_0;
 }


 VAR_7 = (u16)VAR_6;
 VAR_8 = FUNC_0(VAR_5, VAR_4, VAR_3, &VAR_7,
   sizeof(VAR_7), ((void*)0), ((void*)0));
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
