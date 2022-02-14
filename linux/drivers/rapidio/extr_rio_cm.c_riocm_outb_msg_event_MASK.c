
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_mport {int dummy; } ;
struct cm_dev {int mport; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct cm_dev*,int) ;

__attribute__((used)) static void FUNC_2(struct rio_mport *VAR_0, void *VAR_1,
     int VAR_2, int VAR_3)
{
 struct cm_dev *VAR_4 = VAR_1;

 if (VAR_4 && FUNC_0(VAR_4->mport))
  FUNC_1(VAR_4, VAR_3);
}
