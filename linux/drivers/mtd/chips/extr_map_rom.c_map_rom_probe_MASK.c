
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int writesize; int writebufsize; int erasesize; int flags; int _erase; int _sync; int _write; int _read; int _unpoint; int _point; int size; int type; int name; struct map_info* priv; } ;
struct map_info {int size; int name; int * fldrv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct map_info*) ;
 struct mtd_info* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static struct mtd_info *FUNC_3(struct map_info *VAR_11)
{
 struct mtd_info *VAR_12;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_0);
 if (!VAR_12)
  return ((void*)0);

 VAR_11->fldrv = &VAR_4;
 VAR_12->priv = VAR_11;
 VAR_12->name = VAR_11->name;
 VAR_12->type = VAR_2;
 VAR_12->size = VAR_11->size;
 VAR_12->_point = VAR_7;
 VAR_12->_unpoint = VAR_9;
 VAR_12->_read = VAR_8;
 VAR_12->_write = VAR_10;
 VAR_12->_sync = VAR_6;
 VAR_12->_erase = VAR_5;
 VAR_12->flags = VAR_1;
 VAR_12->erasesize = FUNC_1(VAR_11);
 VAR_12->writesize = 1;
 VAR_12->writebufsize = 1;

 FUNC_0(VAR_3);
 return VAR_12;
}
