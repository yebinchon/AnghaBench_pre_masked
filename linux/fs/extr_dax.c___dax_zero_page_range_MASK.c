
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dax_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (struct block_device*,scalar_t__,int ,int *) ;
 int FUNC_1 (struct block_device*,scalar_t__,unsigned int,int ,int ) ;
 long FUNC_2 (struct dax_device*,int ,int,void**,int *) ;
 int FUNC_3 (struct dax_device*,void*,unsigned int) ;
 scalar_t__ FUNC_4 (struct block_device*,unsigned int,unsigned int) ;
 long FUNC_5 () ;
 int FUNC_6 (long) ;
 int FUNC_7 (void*,int ,unsigned int) ;

int FUNC_8(struct block_device *VAR_2,
  struct dax_device *VAR_3, sector_t VAR_4,
  unsigned int VAR_5, unsigned int VAR_6)
{
 if (FUNC_4(VAR_2, VAR_5, VAR_6)) {
  sector_t VAR_7 = VAR_4 + (VAR_5 >> 9);

  return FUNC_1(VAR_2, VAR_7,
    VAR_6 >> 9, VAR_0, 0);
 } else {
  pgoff_t VAR_8;
  long VAR_9, VAR_10;
  void *VAR_11;

  VAR_9 = FUNC_0(VAR_2, VAR_4, VAR_1, &VAR_8);
  if (VAR_9)
   return VAR_9;

  VAR_10 = FUNC_5();
  VAR_9 = FUNC_2(VAR_3, VAR_8, 1, &VAR_11, ((void*)0));
  if (VAR_9 < 0) {
   FUNC_6(VAR_10);
   return VAR_9;
  }
  FUNC_7(VAR_11 + VAR_5, 0, VAR_6);
  FUNC_3(VAR_3, VAR_11 + VAR_5, VAR_6);
  FUNC_6(VAR_10);
 }
 return 0;
}
