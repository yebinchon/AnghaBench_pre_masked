
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,unsigned int,scalar_t__,...) ;

__attribute__((used)) static inline long FUNC_3(unsigned int VAR_4)
{

 if (FUNC_1(VAR_4) != VAR_2) {
  FUNC_2("device ioctl magic numbers don't match! Did you rebuild pvfs2-client-core/libpvfs2? [cmd %x, magic %x != %x]\n",
   VAR_4,
   FUNC_1(VAR_4),
   VAR_2);
  return -VAR_0;
 }

 if (FUNC_0(VAR_4) >= VAR_3 || FUNC_0(VAR_4) <= 0) {
  FUNC_2("Invalid ioctl command number [%d >= %d]\n",
      FUNC_0(VAR_4), VAR_3);
  return -VAR_1;
 }
 return 0;
}
