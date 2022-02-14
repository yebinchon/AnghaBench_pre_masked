
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap {int dax_dev; int bdev; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct iomap*,int) ;

__attribute__((used)) static int FUNC_2(loff_t VAR_1, unsigned VAR_2, unsigned VAR_3,
  struct iomap *VAR_4)
{
 return FUNC_0(VAR_4->bdev, VAR_4->dax_dev,
   FUNC_1(VAR_4, VAR_1 & VAR_0), VAR_2, VAR_3);
}
