
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_oob {int dummy; } ;
struct sm_ftl {int zone_size; int max_lba; int block_size; int cis_block; int cis_boffset; scalar_t__ cis_page_offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct sm_oob*) ;
 int FUNC_2 (struct sm_ftl*) ;
 scalar_t__ FUNC_3 (struct sm_ftl*,int ,int,int,int *,struct sm_oob*) ;
 int FUNC_4 (struct sm_oob*) ;

__attribute__((used)) static int FUNC_5(struct sm_ftl *VAR_3)
{
 struct sm_oob VAR_4;
 int VAR_5, VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;


 for (VAR_5 = 0 ; VAR_5 < VAR_3->zone_size - VAR_3->max_lba ; VAR_5++) {

  if (FUNC_3(VAR_3, 0, VAR_5, 0, ((void*)0), &VAR_4))
   continue;

  if (!FUNC_1(&VAR_4))
   continue;
  VAR_7 = 1;
  break;
 }

 if (!VAR_7)
  return -VAR_0;


 for (VAR_6 = 0 ; VAR_6 < VAR_3->block_size;
      VAR_6 += VAR_1) {

  if (FUNC_3(VAR_3, 0, VAR_5, VAR_6, ((void*)0), &VAR_4))
   continue;

  if (!FUNC_4(&VAR_4))
   continue;
  break;
 }

 if (VAR_6 == VAR_3->block_size)
  return -VAR_0;

 VAR_3->cis_block = VAR_5;
 VAR_3->cis_boffset = VAR_6;
 VAR_3->cis_page_offset = 0;

 VAR_8 = !FUNC_2(VAR_3);

 if (!VAR_8) {
  VAR_3->cis_page_offset = VAR_2;
  VAR_8 = !FUNC_2(VAR_3);
 }

 if (VAR_8) {
  FUNC_0("CIS block found at offset %x",
   VAR_5 * VAR_3->block_size +
    VAR_6 + VAR_3->cis_page_offset);
  return 0;
 }
 return -VAR_0;
}
