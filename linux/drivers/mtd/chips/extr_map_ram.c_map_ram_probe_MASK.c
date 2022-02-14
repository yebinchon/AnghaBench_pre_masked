
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int size; int writesize; int erasesize; int flags; int _unpoint; int _sync; int _point; void* _panic_write; void* _write; int _read; int _erase; int type; int name; struct map_info* priv; } ;
struct map_info {int size; int name; int * fldrv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct mtd_info* FUNC_1 (int,int ) ;
 int FUNC_2 (struct map_info*,int) ;
 int FUNC_3 (struct map_info*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;

__attribute__((used)) static struct mtd_info *FUNC_4(struct map_info *VAR_12)
{
 struct mtd_info *VAR_13;
 VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_0);
 if (!VAR_13)
  return ((void*)0);

 VAR_12->fldrv = &VAR_5;
 VAR_13->priv = VAR_12;
 VAR_13->name = VAR_12->name;
 VAR_13->type = VAR_2;
 VAR_13->size = VAR_12->size;
 VAR_13->_erase = VAR_6;
 VAR_13->_read = VAR_9;
 VAR_13->_write = VAR_11;
 VAR_13->_panic_write = VAR_11;
 VAR_13->_point = VAR_8;
 VAR_13->_sync = VAR_7;
 VAR_13->_unpoint = VAR_10;
 VAR_13->flags = VAR_1;
 VAR_13->writesize = 1;

 VAR_13->erasesize = VAR_3;
  while(VAR_13->size & (VAR_13->erasesize - 1))
  VAR_13->erasesize >>= 1;

 FUNC_0(VAR_4);
 return VAR_13;
}
