
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct fmdev {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fmdev*,int ,int ,int *,int,int *,int *) ;
 int FUNC_1 (char*,int ) ;

int FUNC_2(struct fmdev *VAR_2, u8 VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 FUNC_1("tx: mute mode %d\n", VAR_3);

 VAR_4 = VAR_3;
 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_4,
   sizeof(VAR_4), ((void*)0), ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
