
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int dummy; } ;
struct extent_position {scalar_t__ bh; } ;
typedef int int8_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;
 int FUNC_3 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int*,int ) ;
 int FUNC_4 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int,int) ;

__attribute__((used)) static int8_t FUNC_5(struct inode *VAR_0, struct extent_position VAR_1,
         struct kernel_lb_addr VAR_2, uint32_t VAR_3)
{
 struct kernel_lb_addr VAR_4;
 uint32_t VAR_5;
 int8_t VAR_6;

 if (VAR_1.bh)
  FUNC_1(VAR_1.bh);

 while ((VAR_6 = FUNC_3(VAR_0, &VAR_1, &VAR_4, &VAR_5, 0)) != -1) {
  FUNC_4(VAR_0, &VAR_1, &VAR_2, VAR_3, 1);
  VAR_2 = VAR_4;
  VAR_3 = (VAR_6 << 30) | VAR_5;
 }
 FUNC_2(VAR_0, &VAR_1, &VAR_2, VAR_3, 1);
 FUNC_0(VAR_1.bh);

 return (VAR_3 >> 30);
}
