
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int i2c_done; int i2c_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct bttv *VAR_3)
{
 int VAR_4 = 0;


 if (FUNC_1(VAR_3->i2c_queue,
     VAR_3->i2c_done, FUNC_0(85)) == -VAR_2)
  VAR_4 = -VAR_1;

 if (VAR_3->i2c_done & VAR_0)
  VAR_4 = 1;
 VAR_3->i2c_done = 0;
 return VAR_4;
}
