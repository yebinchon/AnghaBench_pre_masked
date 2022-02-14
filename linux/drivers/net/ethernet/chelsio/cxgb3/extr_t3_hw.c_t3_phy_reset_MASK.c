
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cphy*,int,int ,int ,unsigned int) ;
 int FUNC_2 (struct cphy*,int,int ,unsigned int*) ;

int FUNC_3(struct cphy *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_0, VAR_1,
      VAR_2);
 if (VAR_6 || !VAR_5)
  return VAR_6;

 do {
  VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_0, &VAR_7);
  if (VAR_6)
   return VAR_6;
  VAR_7 &= VAR_2;
  if (VAR_7)
   FUNC_0(1);
 } while (VAR_7 && --VAR_5);

 return VAR_7 ? -1 : 0;
}
