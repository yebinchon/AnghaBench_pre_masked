
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bytes; scalar_t__ ooboffset; int sectorsize; int strength; int nsectors; } ;
struct atmel_pmecc_user_req {int pagesize; scalar_t__ oobsize; TYPE_2__ ecc; } ;
struct atmel_pmecc {TYPE_1__* caps; } ;
struct TYPE_3__ {int nstrengths; int* strengths; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct atmel_pmecc *VAR_3,
     struct atmel_pmecc_user_req *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;

 if (VAR_4->pagesize <= 0 || VAR_4->oobsize <= 0 || VAR_4->ecc.bytes <= 0)
  return -VAR_2;

 if (VAR_4->ecc.ooboffset >= 0 &&
     VAR_4->ecc.ooboffset + VAR_4->ecc.bytes > VAR_4->oobsize)
  return -VAR_2;

 if (VAR_4->ecc.sectorsize == VAR_1) {
  if (VAR_4->ecc.strength != VAR_0)
   return -VAR_2;

  if (VAR_4->pagesize > 512)
   VAR_4->ecc.sectorsize = 1024;
  else
   VAR_4->ecc.sectorsize = 512;
 }

 if (VAR_4->ecc.sectorsize != 512 && VAR_4->ecc.sectorsize != 1024)
  return -VAR_2;

 if (VAR_4->pagesize % VAR_4->ecc.sectorsize)
  return -VAR_2;

 VAR_4->ecc.nsectors = VAR_4->pagesize / VAR_4->ecc.sectorsize;

 VAR_6 = VAR_4->ecc.bytes;

 for (VAR_5 = 0; VAR_5 < VAR_3->caps->nstrengths; VAR_5++) {
  int VAR_9, VAR_10 = VAR_3->caps->strengths[VAR_5];

  if (VAR_4->ecc.strength != VAR_0 &&
      VAR_10 < VAR_4->ecc.strength)
   continue;

  VAR_9 = FUNC_0(VAR_10 * FUNC_1(8 * VAR_4->ecc.sectorsize),
          8);
  VAR_9 *= VAR_4->ecc.nsectors;

  if (VAR_9 > VAR_6)
   break;

  VAR_8 = VAR_10;
  VAR_7 = VAR_9;

  if (VAR_4->ecc.strength != VAR_0)
   break;
 }

 if (!VAR_8)
  return -VAR_2;

 VAR_4->ecc.bytes = VAR_7;
 VAR_4->ecc.strength = VAR_8;

 if (VAR_4->ecc.ooboffset < 0)
  VAR_4->ecc.ooboffset = VAR_4->oobsize - VAR_7;

 return 0;
}
