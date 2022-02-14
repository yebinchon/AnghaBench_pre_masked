
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct solo_dev {scalar_t__ sequence; } ;


 int FUNC_0 (struct solo_dev*) ;
 struct solo_dev* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_0, unsigned int VAR_1)
{
 struct solo_dev *VAR_2 = FUNC_1(VAR_0);

 VAR_2->sequence = 0;
 return FUNC_0(VAR_2);
}
