
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int FUNC_0 (struct ucsi_ccg*,int ,unsigned char*,int) ;
 int FUNC_1 (struct ucsi_ccg*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct ucsi_ccg *VAR_1)
{
 int VAR_2;
 unsigned char VAR_3;

 VAR_2 = FUNC_0(VAR_1, VAR_0, &VAR_3, sizeof(VAR_3));
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_1(VAR_1, VAR_0, &VAR_3, sizeof(VAR_3));
}
