
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mtd_info {int dummy; } ;
struct TYPE_7__ {int end; int start; } ;
typedef TYPE_1__ slram_priv_t ;
struct TYPE_8__ {TYPE_4__* mtdinfo; struct TYPE_8__* next; } ;
typedef TYPE_2__ slram_mtd_list_t ;
struct TYPE_9__ {char* name; unsigned long size; int writesize; struct TYPE_9__* priv; int erasesize; int type; int owner; int _write; int _read; int _unpoint; int _point; int _erase; int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,char*,unsigned long,...) ;
 int VAR_10 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_2__* FUNC_3 (int,int ) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned long,unsigned long,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *,int ) ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_8(char *VAR_17, unsigned long VAR_18, unsigned long VAR_19)
{
 slram_mtd_list_t **VAR_20;

 VAR_20 = &VAR_12;
 while (*VAR_20) {
  VAR_20 = &(*VAR_20)->next;
 }

 *VAR_20 = FUNC_3(sizeof(slram_mtd_list_t), VAR_3);
 if (!(*VAR_20)) {
  FUNC_0("slram: Cannot allocate new MTD device.\n");
  return(-VAR_2);
 }
 (*VAR_20)->mtdinfo = FUNC_4(sizeof(struct mtd_info), VAR_3);
 (*VAR_20)->next = ((void*)0);

 if ((*VAR_20)->mtdinfo) {
  (*VAR_20)->mtdinfo->priv =
   FUNC_4(sizeof(slram_priv_t), VAR_3);

  if (!(*VAR_20)->mtdinfo->priv) {
   FUNC_2((*VAR_20)->mtdinfo);
   (*VAR_20)->mtdinfo = ((void*)0);
  }
 }

 if (!(*VAR_20)->mtdinfo) {
  FUNC_0("slram: Cannot allocate new MTD device.\n");
  return(-VAR_2);
 }

 if (!(((slram_priv_t *)(*VAR_20)->mtdinfo->priv)->start =
  FUNC_5(VAR_18, VAR_19,
    VAR_4 | VAR_6 | VAR_5))) {
  FUNC_0("slram: memremap failed\n");
  return -VAR_1;
 }
 ((slram_priv_t *)(*VAR_20)->mtdinfo->priv)->end =
  ((slram_priv_t *)(*VAR_20)->mtdinfo->priv)->start + VAR_19;


 (*VAR_20)->mtdinfo->name = VAR_17;
 (*VAR_20)->mtdinfo->size = VAR_19;
 (*VAR_20)->mtdinfo->flags = VAR_7;
 (*VAR_20)->mtdinfo->_erase = VAR_11;
 (*VAR_20)->mtdinfo->_point = VAR_13;
 (*VAR_20)->mtdinfo->_unpoint = VAR_15;
 (*VAR_20)->mtdinfo->_read = VAR_14;
 (*VAR_20)->mtdinfo->_write = VAR_16;
 (*VAR_20)->mtdinfo->owner = VAR_10;
 (*VAR_20)->mtdinfo->type = VAR_8;
 (*VAR_20)->mtdinfo->erasesize = VAR_9;
 (*VAR_20)->mtdinfo->writesize = 1;

 if (FUNC_7((*VAR_20)->mtdinfo, ((void*)0), 0)) {
  FUNC_0("slram: Failed to register new device\n");
  FUNC_6(((slram_priv_t *)(*VAR_20)->mtdinfo->priv)->start);
  FUNC_2((*VAR_20)->mtdinfo->priv);
  FUNC_2((*VAR_20)->mtdinfo);
  return(-VAR_0);
 }
 FUNC_1("slram: Registered device %s from %luKiB to %luKiB\n", VAR_17,
   (VAR_18 / 1024), ((VAR_18 + VAR_19) / 1024));
 FUNC_1("slram: Mapped from 0x%p to 0x%p\n",
   ((slram_priv_t *)(*VAR_20)->mtdinfo->priv)->start,
   ((slram_priv_t *)(*VAR_20)->mtdinfo->priv)->end);
 return(0);
}
