
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
 int FUNC_0 (struct fmdev*,int ,int ,int*,int,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct fmdev *VAR_2, u8 VAR_3, u16 VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 VAR_4 |= VAR_3 << 8;
 VAR_5 = VAR_4;
 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_5,
   sizeof(VAR_5), ((void*)0), ((void*)0));
 if (VAR_6 < 0)
  return VAR_6;


 return 0;
}
