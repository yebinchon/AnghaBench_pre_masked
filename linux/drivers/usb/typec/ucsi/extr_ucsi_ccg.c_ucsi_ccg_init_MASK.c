
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ucsi_ccg {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ucsi_ccg*,int ,int *,int) ;
 int FUNC_1 (struct ucsi_ccg*,int ,int *,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct ucsi_ccg *VAR_5)
{
 unsigned int VAR_6 = 10;
 u8 VAR_7;
 int VAR_8;

 VAR_7 = VAR_3;
 VAR_8 = FUNC_1(VAR_5, VAR_1, &VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_2;
 VAR_8 = FUNC_1(VAR_5, VAR_1, &VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0)
  return VAR_8;





 do {
  VAR_8 = FUNC_0(VAR_5, VAR_0, &VAR_7, sizeof(VAR_7));
  if (VAR_8 < 0)
   return VAR_8;

  if (!VAR_7)
   return 0;

  VAR_8 = FUNC_1(VAR_5, VAR_0, &VAR_7, sizeof(VAR_7));
  if (VAR_8 < 0)
   return VAR_8;

  FUNC_2(10000, 11000);
 } while (--VAR_6);

 return -VAR_4;
}
