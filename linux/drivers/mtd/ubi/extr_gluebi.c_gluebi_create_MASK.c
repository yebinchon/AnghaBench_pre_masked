
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_info {scalar_t__ vol_type; unsigned long long size; unsigned long long used_bytes; int vol_id; int ubi_num; scalar_t__ usable_leb_size; scalar_t__ name_len; int name; } ;
struct ubi_device_info {int min_io_size; int ro_mode; } ;
struct mtd_info {unsigned long long size; struct gluebi_device* name; int index; int _put_device; int _get_device; int _erase; int _write; int _read; scalar_t__ erasesize; int writesize; int owner; int flags; int type; } ;
struct gluebi_device {int list; struct mtd_info mtd; int ubi_num; int vol_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 struct gluebi_device* FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct gluebi_device*) ;
 struct gluebi_device* FUNC_3 (int ,scalar_t__,int ) ;
 struct gluebi_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (struct mtd_info*,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ubi_device_info *VAR_14,
    struct ubi_volume_info *VAR_15)
{
 struct gluebi_device *VAR_16, *VAR_17;
 struct mtd_info *VAR_18;

 VAR_16 = FUNC_4(sizeof(struct gluebi_device), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_18 = &VAR_16->mtd;
 VAR_18->name = FUNC_3(VAR_15->name, VAR_15->name_len + 1, VAR_2);
 if (!VAR_18->name) {
  FUNC_2(VAR_16);
  return -VAR_1;
 }

 VAR_16->vol_id = VAR_15->vol_id;
 VAR_16->ubi_num = VAR_15->ubi_num;
 VAR_18->type = VAR_3;
 if (!VAR_14->ro_mode)
  VAR_18->flags = VAR_4;
 VAR_18->owner = VAR_5;
 VAR_18->writesize = VAR_14->min_io_size;
 VAR_18->erasesize = VAR_15->usable_leb_size;
 VAR_18->_read = VAR_12;
 VAR_18->_write = VAR_13;
 VAR_18->_erase = VAR_9;
 VAR_18->_get_device = VAR_10;
 VAR_18->_put_device = VAR_11;






 if (VAR_15->vol_type == VAR_6)
  VAR_18->size = (unsigned long long)VAR_15->usable_leb_size * VAR_15->size;
 else
  VAR_18->size = VAR_15->used_bytes;


 FUNC_7(&VAR_7);
 VAR_17 = FUNC_1(VAR_15->ubi_num, VAR_15->vol_id);
 if (VAR_17)
  FUNC_0("gluebi MTD device %d form UBI device %d volume %d already exists",
   VAR_17->mtd.index, VAR_15->ubi_num, VAR_15->vol_id);
 FUNC_8(&VAR_7);

 if (FUNC_6(VAR_18, ((void*)0), 0)) {
  FUNC_0("cannot add MTD device");
  FUNC_2(VAR_18->name);
  FUNC_2(VAR_16);
  return -VAR_0;
 }

 FUNC_7(&VAR_7);
 FUNC_5(&VAR_16->list, &VAR_8);
 FUNC_8(&VAR_7);
 return 0;
}
