
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cphy {scalar_t__ modtype; int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cphy*) ;
 int FUNC_1 (struct cphy*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct cphy*) ;
 int FUNC_3 (struct cphy*,int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct cphy*,int ) ;
 int FUNC_6 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_7 (struct cphy*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct cphy *VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;


 VAR_8 = FUNC_6(VAR_6, VAR_0, VAR_1,
      &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_7(VAR_6, VAR_0, 125);
 if (VAR_8)
  return VAR_8;
 FUNC_4(100);


 VAR_6->priv = VAR_3;
 VAR_8 = FUNC_5(VAR_6, VAR_2);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_1(VAR_6, 0);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_6->modtype = (u8)VAR_8;
 if (VAR_8 == VAR_4 || VAR_8 == VAR_5)
  VAR_8 = FUNC_3(VAR_6, VAR_8);
 else
  VAR_8 = FUNC_2(VAR_6);
 if (VAR_8)
  return VAR_8;


 if (VAR_9 & 1)
  VAR_8 = FUNC_0(VAR_6);
 return VAR_8;
}
