
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdswap_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mtdswap_dev*,int ) ;
 scalar_t__ FUNC_1 (struct mtdswap_dev*,int ) ;
 int FUNC_2 (struct mtdswap_dev*) ;
 int FUNC_3 (struct mtdswap_dev*) ;

__attribute__((used)) static int FUNC_4(struct mtdswap_dev *VAR_5,
    unsigned int VAR_6)
{
 int VAR_7;

 if (FUNC_1(VAR_5, VAR_2) &&
  (VAR_6 || (FUNC_0(VAR_5, VAR_0) && FUNC_0(VAR_5, VAR_1))))
  return VAR_4;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 >= VAR_3)
  return VAR_7;

 return FUNC_2(VAR_5);
}
