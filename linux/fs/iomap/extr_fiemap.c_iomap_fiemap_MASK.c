
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iomap_ops {int dummy; } ;
struct inode {int i_mapping; } ;
struct fiemap_extent_info {int fi_flags; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct fiemap_ctx {TYPE_1__ prev; struct fiemap_extent_info* fi; } ;
typedef int loff_t ;
typedef int ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fiemap_extent_info*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int,int,int ,struct iomap_ops const*,struct fiemap_ctx*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct fiemap_extent_info*,TYPE_1__*,int ) ;
 int FUNC_4 (struct fiemap_ctx*,int ,int) ;

int FUNC_5(struct inode *VAR_6, struct fiemap_extent_info *VAR_7,
  loff_t VAR_8, loff_t VAR_9, const struct iomap_ops *VAR_10)
{
 struct fiemap_ctx VAR_11;
 loff_t VAR_12;

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.fi = VAR_7;
 VAR_11.prev.type = VAR_3;

 VAR_12 = FUNC_0(VAR_7, VAR_2);
 if (VAR_12)
  return VAR_12;

 if (VAR_7->fi_flags & VAR_2) {
  VAR_12 = FUNC_1(VAR_6->i_mapping);
  if (VAR_12)
   return VAR_12;
 }

 while (VAR_9 > 0) {
  VAR_12 = FUNC_2(VAR_6, VAR_8, VAR_9, VAR_4, VAR_10, &VAR_11,
    VAR_5);

  if (VAR_12 == -VAR_0)
   break;
  if (VAR_12 < 0)
   return VAR_12;
  if (VAR_12 == 0)
   break;

  VAR_8 += VAR_12;
  VAR_9 -= VAR_12;
 }

 if (VAR_11.prev.type != VAR_3) {
  VAR_12 = FUNC_3(VAR_7, &VAR_11.prev, VAR_1);
  if (VAR_12 < 0)
   return VAR_12;
 }

 return 0;
}
