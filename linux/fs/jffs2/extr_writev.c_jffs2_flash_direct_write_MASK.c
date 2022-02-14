
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct kvec {unsigned char* iov_base; size_t iov_len; } ;
struct jffs2_sb_info {int mtd; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct jffs2_sb_info*,struct kvec*,int,int ) ;
 int FUNC_2 (int ,scalar_t__,size_t,size_t*,int const*) ;

int FUNC_3(struct jffs2_sb_info *VAR_0, loff_t VAR_1, size_t VAR_2,
   size_t *VAR_3, const u_char *VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_2(VAR_0->mtd, VAR_1, VAR_2, VAR_3, VAR_4);

 if (FUNC_0()) {
  struct kvec VAR_6[1];
  int VAR_7;

  VAR_6[0].iov_base = (unsigned char *) VAR_4;
  VAR_6[0].iov_len = VAR_2;

  VAR_7 = FUNC_1(VAR_0, VAR_6, 1, (uint32_t) VAR_1);
  if (VAR_7) {
   return VAR_7;
  }
 }
 return VAR_5;
}
