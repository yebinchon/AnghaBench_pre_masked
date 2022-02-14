
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mtd_info* mtd; } ;
struct mtdblk_dev {unsigned int cache_size; scalar_t__ cache_state; unsigned long cache_offset; int cache_data; TYPE_1__ mbd; } ;
struct mtd_info {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mtd_info*,unsigned long,unsigned int,char const*) ;
 int FUNC_1 (int ,char const*,unsigned int) ;
 int FUNC_2 (struct mtd_info*,unsigned long,unsigned int,size_t*,int ) ;
 int FUNC_3 (struct mtd_info*,unsigned long,int,size_t*,char const*) ;
 int FUNC_4 (char*,int ,unsigned long,int) ;
 int FUNC_5 (struct mtdblk_dev*) ;

__attribute__((used)) static int FUNC_6 (struct mtdblk_dev *VAR_4, unsigned long VAR_5,
       int VAR_6, const char *VAR_7)
{
 struct mtd_info *VAR_8 = VAR_4->mbd.mtd;
 unsigned int VAR_9 = VAR_4->cache_size;
 size_t VAR_10;
 int VAR_11;

 FUNC_4("mtdblock: write on \"%s\" at 0x%lx, size 0x%x\n",
  VAR_8->name, VAR_5, VAR_6);

 if (!VAR_9)
  return FUNC_3(VAR_8, VAR_5, VAR_6, &VAR_10, VAR_7);

 while (VAR_6 > 0) {
  unsigned long VAR_12 = (VAR_5/VAR_9)*VAR_9;
  unsigned int VAR_13 = VAR_5 - VAR_12;
  unsigned int VAR_14 = VAR_9 - VAR_13;
  if( VAR_14 > VAR_6 )
   VAR_14 = VAR_6;

  if (VAR_14 == VAR_9) {





   VAR_11 = FUNC_0 (VAR_8, VAR_5, VAR_14, VAR_7);
   if (VAR_11)
    return VAR_11;
  } else {


   if (VAR_4->cache_state == VAR_2 &&
       VAR_4->cache_offset != VAR_12) {
    VAR_11 = FUNC_5(VAR_4);
    if (VAR_11)
     return VAR_11;
   }

   if (VAR_4->cache_state == VAR_3 ||
       VAR_4->cache_offset != VAR_12) {

    VAR_4->cache_state = VAR_3;
    VAR_11 = FUNC_2(VAR_8, VAR_12, VAR_9,
            &VAR_10, VAR_4->cache_data);
    if (VAR_11)
     return VAR_11;
    if (VAR_10 != VAR_9)
     return -VAR_0;

    VAR_4->cache_offset = VAR_12;
    VAR_4->cache_size = VAR_9;
    VAR_4->cache_state = VAR_1;
   }


   FUNC_1 (VAR_4->cache_data + VAR_13, VAR_7, VAR_14);
   VAR_4->cache_state = VAR_2;
  }

  VAR_7 += VAR_14;
  VAR_5 += VAR_14;
  VAR_6 -= VAR_14;
 }

 return 0;
}
