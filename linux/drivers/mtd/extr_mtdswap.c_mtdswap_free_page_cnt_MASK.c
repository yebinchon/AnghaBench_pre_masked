
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdswap_dev {int pages_per_eblk; unsigned int curr_write_pos; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtdswap_dev*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct mtdswap_dev *VAR_1)
{
 return FUNC_0(VAR_1, VAR_0) * VAR_1->pages_per_eblk +
  VAR_1->pages_per_eblk - VAR_1->curr_write_pos;
}
