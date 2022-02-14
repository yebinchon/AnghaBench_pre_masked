
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmr2 {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct fmr2*) ;
 struct fmr2** VAR_2 ;
 scalar_t__ FUNC_1 (struct fmr2*,struct device*,int ) ;
 int FUNC_2 (struct fmr2*) ;
 struct fmr2* FUNC_3 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, unsigned int VAR_5)
{
 struct fmr2 *VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return 0;

 if (FUNC_1(VAR_6, VAR_4, VAR_0)) {
  FUNC_2(VAR_6);
  return 0;
 }
 FUNC_0(VAR_4, VAR_6);
 VAR_2[VAR_3++] = VAR_6;

 return 1;
}
