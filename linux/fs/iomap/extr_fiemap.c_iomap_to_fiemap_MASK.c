
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iomap {int type; int flags; scalar_t__ addr; int length; int offset; } ;
struct fiemap_extent_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;



 scalar_t__ VAR_8 ;

 int FUNC_0 (struct fiemap_extent_info*,int ,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_1(struct fiemap_extent_info *VAR_9,
  struct iomap *VAR_10, u32 VAR_11)
{
 switch (VAR_10->type) {
 case 131:

  return 0;
 case 132:
  VAR_11 |= VAR_1 | VAR_4;
  break;
 case 129:
  break;
 case 128:
  VAR_11 |= VAR_5;
  break;
 case 130:
  VAR_11 |= VAR_0;
  break;
 }

 if (VAR_10->flags & VAR_6)
  VAR_11 |= VAR_2;
 if (VAR_10->flags & VAR_7)
  VAR_11 |= VAR_3;

 return FUNC_0(VAR_9, VAR_10->offset,
   VAR_10->addr != VAR_8 ? VAR_10->addr : 0,
   VAR_10->length, VAR_11);
}
