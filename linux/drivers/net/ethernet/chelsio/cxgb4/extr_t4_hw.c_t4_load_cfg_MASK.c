
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {unsigned int sf_size; unsigned int sf_nsec; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,unsigned int,unsigned int) ;
 int FUNC_4 (struct adapter*,unsigned int,int,int const*) ;

int FUNC_5(struct adapter *VAR_4, const u8 *VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13 = VAR_4->params.sf_size / VAR_4->params.sf_nsec;

 VAR_10 = FUNC_2(VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = VAR_10;
 VAR_12 = VAR_11 / VAR_3;

 if (VAR_6 > VAR_1) {
  FUNC_1(VAR_4->pdev_dev, "cfg file too large, max is %u bytes\n",
   VAR_1);
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_1,
    VAR_13);
 VAR_7 = FUNC_3(VAR_4, VAR_12,
         VAR_12 + VAR_8 - 1);



 if (VAR_7 || VAR_6 == 0)
  goto out;


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8 += VAR_2) {
  if ((VAR_6 - VAR_8) < VAR_2)
   VAR_9 = VAR_6 - VAR_8;
  else
   VAR_9 = VAR_2;
  VAR_7 = FUNC_4(VAR_4, VAR_11, VAR_9, VAR_5);
  if (VAR_7)
   goto out;

  VAR_11 += VAR_2;
  VAR_5 += VAR_2;
 }

out:
 if (VAR_7)
  FUNC_1(VAR_4->pdev_dev, "config file %s failed %d\n",
   (VAR_6 == 0 ? "clear" : "download"), VAR_7);
 return VAR_7;
}
