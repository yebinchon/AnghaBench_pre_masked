
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct genwqe_dev {int softreset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genwqe_dev*,int ) ;
 int FUNC_1 (struct genwqe_dev*) ;

int FUNC_2(struct genwqe_dev *VAR_2)
{
 u64 VAR_3;

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2, VAR_1) & 0x1;
 VAR_2->softreset = (VAR_3 == 0) ? 0x8ull : 0xcull;
 return 0;
}
