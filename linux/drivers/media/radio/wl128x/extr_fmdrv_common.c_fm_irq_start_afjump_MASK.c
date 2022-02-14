
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fmdev {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fmdev*,int ) ;
 int FUNC_1 (struct fmdev*,int ,int ,int *,int,int *) ;

__attribute__((used)) static void FUNC_2(struct fmdev *VAR_4)
{
 u16 VAR_5;

 VAR_5 = VAR_1;
 if (!FUNC_1(VAR_4, VAR_3, VAR_2, &VAR_5,
   sizeof(VAR_5), ((void*)0)))
  FUNC_0(VAR_4, VAR_0);
}
