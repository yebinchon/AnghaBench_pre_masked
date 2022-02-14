
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct rtsx_ucr {int pusb_dev; } ;


 int FUNC_0 (struct rtsx_ucr*,unsigned int,struct scatterlist*,int,unsigned int,unsigned int*,int) ;
 int FUNC_1 (int ,unsigned int,void*,unsigned int,unsigned int*,int) ;

int FUNC_2(struct rtsx_ucr *VAR_0, unsigned int VAR_1,
         void *VAR_2, unsigned int VAR_3, int VAR_4,
         unsigned int *VAR_5, int VAR_6)
{
 if (VAR_6 < 600)
  VAR_6 = 600;

 if (VAR_4)
  return FUNC_0(VAR_0, VAR_1,
    (struct scatterlist *)VAR_2, VAR_4, VAR_3, VAR_5,
    VAR_6);
 else
  return FUNC_1(VAR_0->pusb_dev, VAR_1, VAR_2, VAR_3, VAR_5,
    VAR_6);
}
