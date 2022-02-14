
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; size_t size; int writesize; int priv; int erasesize; int type; int owner; int _write; int _read; int _unpoint; int _point; int _erase; int flags; } ;
struct phram_mtd_list {TYPE_1__ mtd; int list; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phram_mtd_list*) ;
 struct phram_mtd_list* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(char *VAR_14, phys_addr_t VAR_15, size_t VAR_16)
{
 struct phram_mtd_list *VAR_17;
 int VAR_18 = -VAR_2;

 VAR_17 = FUNC_3(sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  goto out0;

 VAR_18 = -VAR_1;
 VAR_17->mtd.priv = FUNC_0(VAR_15, VAR_16);
 if (!VAR_17->mtd.priv) {
  FUNC_6("ioremap failed\n");
  goto out1;
 }


 VAR_17->mtd.name = VAR_14;
 VAR_17->mtd.size = VAR_16;
 VAR_17->mtd.flags = VAR_4;
 VAR_17->mtd._erase = VAR_8;
 VAR_17->mtd._point = VAR_10;
 VAR_17->mtd._unpoint = VAR_12;
 VAR_17->mtd._read = VAR_11;
 VAR_17->mtd._write = VAR_13;
 VAR_17->mtd.owner = VAR_7;
 VAR_17->mtd.type = VAR_5;
 VAR_17->mtd.erasesize = VAR_6;
 VAR_17->mtd.writesize = 1;

 VAR_18 = -VAR_0;
 if (FUNC_5(&VAR_17->mtd, ((void*)0), 0)) {
  FUNC_6("Failed to register new device\n");
  goto out2;
 }

 FUNC_4(&VAR_17->list, &VAR_9);
 return 0;

out2:
 FUNC_1(VAR_17->mtd.priv);
out1:
 FUNC_2(VAR_17);
out0:
 return VAR_18;
}
