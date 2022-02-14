
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct solo_enc_dev {int solo_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct solo_enc_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2, v4l2_std_id VAR_3)
{
 struct solo_enc_dev *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_4->solo_dev, VAR_3 & VAR_0);
}
