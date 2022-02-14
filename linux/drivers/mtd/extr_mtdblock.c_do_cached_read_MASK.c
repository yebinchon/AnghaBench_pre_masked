
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mtd_info* mtd; } ;
struct mtdblk_dev {unsigned int cache_size; scalar_t__ cache_state; unsigned long cache_offset; scalar_t__ cache_data; TYPE_1__ mbd; } ;
struct mtd_info {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,unsigned int) ;
 int FUNC_1 (struct mtd_info*,unsigned long,unsigned int,size_t*,char*) ;
 int FUNC_2 (char*,int ,unsigned long,int) ;

__attribute__((used)) static int FUNC_3 (struct mtdblk_dev *VAR_2, unsigned long VAR_3,
      int VAR_4, char *VAR_5)
{
 struct mtd_info *VAR_6 = VAR_2->mbd.mtd;
 unsigned int VAR_7 = VAR_2->cache_size;
 size_t VAR_8;
 int VAR_9;

 FUNC_2("mtdblock: read on \"%s\" at 0x%lx, size 0x%x\n",
   VAR_6->name, VAR_3, VAR_4);

 if (!VAR_7)
  return FUNC_1(VAR_6, VAR_3, VAR_4, &VAR_8, VAR_5);

 while (VAR_4 > 0) {
  unsigned long VAR_10 = (VAR_3/VAR_7)*VAR_7;
  unsigned int VAR_11 = VAR_3 - VAR_10;
  unsigned int VAR_12 = VAR_7 - VAR_11;
  if (VAR_12 > VAR_4)
   VAR_12 = VAR_4;







  if (VAR_2->cache_state != VAR_1 &&
      VAR_2->cache_offset == VAR_10) {
   FUNC_0 (VAR_5, VAR_2->cache_data + VAR_11, VAR_12);
  } else {
   VAR_9 = FUNC_1(VAR_6, VAR_3, VAR_12, &VAR_8, VAR_5);
   if (VAR_9)
    return VAR_9;
   if (VAR_8 != VAR_12)
    return -VAR_0;
  }

  VAR_5 += VAR_12;
  VAR_3 += VAR_12;
  VAR_4 -= VAR_12;
 }

 return 0;
}
