
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kernel_lb_addr {int dummy; } ;
struct kernel_long_ad {int extLength; struct kernel_lb_addr extLocation; } ;
struct inode {int dummy; } ;
struct extent_position {int dummy; } ;


 int FUNC_0 (struct inode*,struct extent_position) ;
 int FUNC_1 (struct inode*,struct extent_position,struct kernel_lb_addr,int ) ;
 int FUNC_2 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int *,int) ;
 int FUNC_3 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0, struct kernel_long_ad *VAR_1,
          int VAR_2, int VAR_3,
          struct extent_position *VAR_4)
{
 int VAR_5 = 0, VAR_6;
 struct kernel_lb_addr VAR_7;
 uint32_t VAR_8;

 if (VAR_2 > VAR_3) {
  for (VAR_6 = 0; VAR_6 < (VAR_2 - VAR_3); VAR_6++)
   FUNC_0(VAR_0, *VAR_4);
 } else if (VAR_2 < VAR_3) {
  for (VAR_6 = 0; VAR_6 < (VAR_3 - VAR_2); VAR_6++) {
   FUNC_1(VAR_0, *VAR_4, VAR_1[VAR_6].extLocation,
     VAR_1[VAR_6].extLength);
   FUNC_2(VAR_0, VAR_4, &VAR_1[VAR_6].extLocation,
          &VAR_1[VAR_6].extLength, 1);
   VAR_5++;
  }
 }

 for (VAR_6 = VAR_5; VAR_6 < VAR_3; VAR_6++) {
  FUNC_2(VAR_0, VAR_4, &VAR_7, &VAR_8, 0);
  FUNC_3(VAR_0, VAR_4, &VAR_1[VAR_6].extLocation,
          VAR_1[VAR_6].extLength, 1);
 }
}
