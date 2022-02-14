
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_mkvol_req {scalar_t__ bytes; int alignment; scalar_t__ vol_type; int name_len; scalar_t__ vol_id; int flags; int * name; } ;
struct ubi_device {scalar_t__ vtbl_slots; int leb_size; int min_io_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ubi_mkvol_req const*) ;
 int FUNC_2 (struct ubi_device const*,char*) ;

__attribute__((used)) static int FUNC_3(const struct ubi_device *VAR_8,
       const struct ubi_mkvol_req *VAR_9)
{
 int VAR_10, VAR_11 = -VAR_0;

 if (VAR_9->bytes < 0 || VAR_9->alignment < 0 || VAR_9->vol_type < 0 ||
     VAR_9->name_len < 0)
  goto bad;

 if ((VAR_9->vol_id < 0 || VAR_9->vol_id >= VAR_8->vtbl_slots) &&
     VAR_9->vol_id != VAR_5)
  goto bad;

 if (VAR_9->alignment == 0)
  goto bad;

 if (VAR_9->bytes == 0)
  goto bad;

 if (VAR_9->vol_type != VAR_2 &&
     VAR_9->vol_type != VAR_3)
  goto bad;

 if (VAR_9->flags & ~VAR_7)
  goto bad;

 if (VAR_9->flags & VAR_6 &&
     VAR_9->vol_type != VAR_3)
  goto bad;

 if (VAR_9->alignment > VAR_8->leb_size)
  goto bad;

 VAR_10 = VAR_9->alignment & (VAR_8->min_io_size - 1);
 if (VAR_9->alignment != 1 && VAR_10)
  goto bad;

 if (!VAR_9->name[0] || !VAR_9->name_len)
  goto bad;

 if (VAR_9->name_len > VAR_4) {
  VAR_11 = -VAR_1;
  goto bad;
 }

 VAR_10 = FUNC_0(VAR_9->name, VAR_9->name_len + 1);
 if (VAR_10 != VAR_9->name_len)
  goto bad;

 return 0;

bad:
 FUNC_2(VAR_8, "bad volume creation request");
 FUNC_1(VAR_9);
 return VAR_11;
}
