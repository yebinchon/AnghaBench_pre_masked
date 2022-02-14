
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_blktrans_dev {int mtd; } ;


 scalar_t__ FUNC_0 (int ,unsigned long,int,size_t*,char*) ;

__attribute__((used)) static int FUNC_1(struct mtd_blktrans_dev *VAR_0,
         unsigned long VAR_1, char *VAR_2)
{
 size_t VAR_3;

 if (FUNC_0(VAR_0->mtd, (VAR_1 * 512), 512, &VAR_3, VAR_2))
  return 1;
 return 0;
}
