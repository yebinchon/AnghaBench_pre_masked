
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct mtd_info {char* name; int writesize; int writebufsize; int _write; int _read; int _erase; int erasesize; int size; int flags; int type; TYPE_1__ dev; struct bcm47xxsflash* priv; } ;
struct device {int dummy; } ;
struct bcm47xxsflash {int blocksize; int size; struct mtd_info mtd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct bcm47xxsflash *VAR_5,
       struct device *VAR_6)
{
 struct mtd_info *VAR_7 = &VAR_5->mtd;

 VAR_7->priv = VAR_5;
 VAR_7->dev.parent = VAR_6;
 VAR_7->name = "bcm47xxsflash";

 VAR_7->type = VAR_1;
 VAR_7->flags = VAR_0;
 VAR_7->size = VAR_5->size;
 VAR_7->erasesize = VAR_5->blocksize;
 VAR_7->writesize = 1;
 VAR_7->writebufsize = 1;

 VAR_7->_erase = VAR_2;
 VAR_7->_read = VAR_3;
 VAR_7->_write = VAR_4;
}
