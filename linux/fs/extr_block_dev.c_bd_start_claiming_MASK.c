
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct block_device {void* bd_claiming; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct block_device* FUNC_0 (int) ;
 int FUNC_1 (struct block_device*,struct block_device*,void*) ;
 struct gendisk* FUNC_2 (struct block_device*,int*) ;
 int VAR_2 ;
 struct block_device* FUNC_3 (struct gendisk*,int ) ;
 struct block_device* FUNC_4 (struct block_device*) ;
 int FUNC_5 (struct block_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct gendisk*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct block_device *FUNC_10(struct block_device *VAR_3, void *VAR_4)
{
 struct gendisk *VAR_5;
 struct block_device *VAR_6;
 int VAR_7, VAR_8;

 FUNC_6();





 VAR_5 = FUNC_2(VAR_3, &VAR_7);
 if (!VAR_5)
  return FUNC_0(-VAR_1);
 if (VAR_7)
  VAR_6 = FUNC_3(VAR_5, 0);
 else
  VAR_6 = FUNC_4(VAR_3);

 FUNC_7(VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_0);


 FUNC_8(&VAR_2);

 VAR_8 = FUNC_1(VAR_3, VAR_6, VAR_4);
 if (VAR_8 == 0) {
  VAR_6->bd_claiming = VAR_4;
  FUNC_9(&VAR_2);
  return VAR_6;
 } else {
  FUNC_9(&VAR_2);
  FUNC_5(VAR_6);
  return FUNC_0(VAR_8);
 }
}
