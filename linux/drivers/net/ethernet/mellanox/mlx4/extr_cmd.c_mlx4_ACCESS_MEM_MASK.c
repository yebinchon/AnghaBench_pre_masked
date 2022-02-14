
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ function; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,int,int*,int,int ,int ,int ,int ) ;
 int FUNC_1 (struct mlx4_dev*,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_4, u64 VAR_5,
      int VAR_6, u64 VAR_7,
      int VAR_8, int VAR_9)
{
 u64 VAR_10;
 u64 VAR_11;

 if ((VAR_7 & 0xfff) | (VAR_5 & 0xfff) |
     (VAR_6 & ~0x7f) | (VAR_8 & 0xff)) {
  FUNC_1(VAR_4, "Bad access mem params - slave_addr:0x%llx master_addr:0x%llx slave_id:%d size:%d\n",
    VAR_7, VAR_5, VAR_6, VAR_8);
  return -VAR_0;
 }

 if (VAR_9) {
  VAR_10 = (u64) VAR_6 | VAR_7;
  VAR_11 = (u64) VAR_4->caps.function | VAR_5;
 } else {
  VAR_10 = (u64) VAR_4->caps.function | VAR_5;
  VAR_11 = (u64) VAR_6 | VAR_7;
 }

 return FUNC_0(VAR_4, VAR_10, &VAR_11, VAR_8, 0,
       VAR_1,
       VAR_3, VAR_2);
}
