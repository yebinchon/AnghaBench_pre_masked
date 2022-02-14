
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct genwqe_dev {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genwqe_dev*) ;
 int FUNC_1 (struct genwqe_dev*,int ,int,int ) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct genwqe_dev *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);
 u64 VAR_4;

 if (VAR_0 == 0)
  return 0;


 VAR_4 = FUNC_2(VAR_0 *
    16000000000uL/(VAR_3 * 15)) - 10;

 FUNC_1(VAR_2, VAR_1,
     0xff00 | (VAR_4 & 0xff), 0);
 return 1;
}
