
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct solo_dev {int dummy; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (struct solo_dev*) ;
 struct solo_dev* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
      unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4[], struct device *VAR_5[])
{
 struct solo_dev *VAR_6 = FUNC_1(VAR_1);

 VAR_4[0] = FUNC_0(VAR_6);
 *VAR_3 = 1;

 if (*VAR_2 < VAR_0)
  *VAR_2 = VAR_0;

 return 0;
}
