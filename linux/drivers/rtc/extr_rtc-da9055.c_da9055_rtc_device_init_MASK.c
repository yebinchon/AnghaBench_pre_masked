
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9055_pdata {scalar_t__ reset_enable; } ;
struct da9055 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct da9055*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct da9055 *VAR_9,
     struct da9055_pdata *VAR_10)
{
 int VAR_11;


 VAR_11 = FUNC_0(VAR_9, VAR_2,
    VAR_4, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_0(VAR_9, VAR_3,
    VAR_0, VAR_0);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_0(VAR_9, VAR_2,
    VAR_5, VAR_5);
 if (VAR_11 < 0)
  return VAR_11;


 if (VAR_10 && VAR_10->reset_enable) {
  VAR_11 = FUNC_0(VAR_9, VAR_2,
     VAR_6,
     VAR_6 <<
     VAR_7);
  if (VAR_11 < 0)
   return VAR_11;
 }


 VAR_11 = FUNC_0(VAR_9, VAR_1,
    VAR_8, 0);
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
