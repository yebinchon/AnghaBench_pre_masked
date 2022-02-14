
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int modtype; int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cphy*,int) ;
 int FUNC_1 (struct cphy*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_3 (struct cphy*,int ,int ,int) ;
 int FUNC_4 (struct cphy*) ;

__attribute__((used)) static int FUNC_5(struct cphy *VAR_11)
{
 unsigned int VAR_12;
 int VAR_13, VAR_14, VAR_15 = 0;

 VAR_13 = FUNC_2(VAR_11, VAR_3, VAR_1, &VAR_12);
 if (VAR_13)
  return VAR_13;

 if (VAR_12 & VAR_2) {
  VAR_13 = FUNC_3(VAR_11, VAR_3, VAR_0,
        0xd00);
  if (VAR_13)
   return VAR_13;


  VAR_13 = FUNC_0(VAR_11, 300);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_11->modtype = VAR_13;
  if (VAR_13 == VAR_8)
   VAR_14 = VAR_11->priv;
  else if (VAR_13 == VAR_9 ||
    VAR_13 == VAR_10)
   VAR_14 = VAR_7;
  else
   VAR_14 = VAR_6;

  if (VAR_14 != VAR_11->priv) {
   VAR_13 = FUNC_1(VAR_11, 0);
   return VAR_13 ? VAR_13 : VAR_5;
  }
  VAR_15 = VAR_5;
 }

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 |= VAR_15;
 return VAR_13 ? VAR_13 : VAR_4;
}
