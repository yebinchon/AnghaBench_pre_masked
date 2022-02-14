
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct pwc_device {int dummy; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct pwc_device*,int ,int ) ;
 int** VAR_4 ;
 struct pwc_device* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_5,
    unsigned int *VAR_6, unsigned int *VAR_7,
    unsigned int VAR_8[], struct device *VAR_9[])
{
 struct pwc_device *VAR_10 = FUNC_2(VAR_5);
 int VAR_11;

 if (*VAR_6 < VAR_3)
  *VAR_6 = VAR_3;
 else if (*VAR_6 > VAR_0)
  *VAR_6 = VAR_0;

 *VAR_7 = 1;

 VAR_11 = FUNC_1(VAR_10, VAR_2, VAR_1);
 VAR_8[0] = FUNC_0(VAR_4[VAR_11][0] *
         VAR_4[VAR_11][1] * 3 / 2);

 return 0;
}
