
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_inode; } ;
typedef int sector_t ;
typedef int loff_t ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static sector_t FUNC_2(struct block_device *VAR_0, unsigned int VAR_1)
{
 sector_t VAR_2 = ~((sector_t)0);
 loff_t VAR_3 = FUNC_1(VAR_0->bd_inode);

 if (VAR_3) {
  unsigned int VAR_4 = FUNC_0(VAR_1);
  VAR_2 = (VAR_3 >> VAR_4);
 }
 return VAR_2;
}
