
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct genwqe_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genwqe_dev*,int ) ;
 scalar_t__ FUNC_1 (struct genwqe_dev*) ;

__attribute__((used)) static int FUNC_2(struct genwqe_dev *VAR_2, u64 *VAR_3)
{
 *VAR_3 = FUNC_0(VAR_2, VAR_1);
 return (*VAR_3 & VAR_0) &&
  FUNC_1(VAR_2);
}
