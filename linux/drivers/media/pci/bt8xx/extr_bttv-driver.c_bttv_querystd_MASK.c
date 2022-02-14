
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5, v4l2_std_id *VAR_6)
{
 struct bttv_fh *VAR_7 = VAR_5;
 struct bttv *VAR_8 = VAR_7->btv;

 if (FUNC_0(VAR_0) & VAR_1)
  *VAR_6 &= VAR_3;
 else
  *VAR_6 &= VAR_2;
 return 0;
}
